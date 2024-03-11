#ifndef DATE_H
#define DATE_H
/*
struct date {
	int year;
	int month;
	int day;
};

typedef struct date Date;
*/
typedef struct {
	int year;
	int month;
	int day;
} Date;

void printDate1(Date d);
void printDate2(const Date *pd);

#endif
