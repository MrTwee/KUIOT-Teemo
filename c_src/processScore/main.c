#include <stdio.h>

typedef struct {
    char name[21];
    int kor;
    int eng;
    int mat;
    int sum;
    double average;
    int rank;
} Student;

int main(void) {
	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	
    Student students[10];

    for (int i = 0; i < 10; ++i) {
        fscanf(stdin, "%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
        students[i].sum = students[i].kor + students[i].eng + students[i].mat;
        students[i].average = (double)students[i].sum / 3;
        students[i].rank = 1;
    }

    fprintf(fout, "----------------------------------------------\n");
    fprintf(fout, "     name            kor eng mat sum   avg rnk\n");
    fprintf(fout, "----------------------------------------------\n");

    // Sorting
    Student *table[10];
    for (int i = 0; i < 10; ++i) {
        table[i] = &students[i];
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (table[j]->sum < table[j + 1]->sum) {
                // Swap
                Student *temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        table[i]->rank = i + 1;
    }

    for (int i = 0; i < 10; ++i) {
        fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n",
                table[i]->name, table[i]->kor, table[i]->eng, table[i]->mat,
                table[i]->sum, table[i]->average, table[i]->rank);
    }

    fprintf(fout, "----------------------------------------------\n");
	
	fclose(fin);
	fclose(fout);
	
    return 0;
}

