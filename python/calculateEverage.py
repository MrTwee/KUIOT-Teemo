def min():
    kor_score = [45, 23, 53, 35, 93]
    math_score =  [75, 53, 72, 65, 100]
    eng_score = [57, 38, 29, 69, 48]
    midterm_score = [kor_score, math_score, eng_score]

    student_score = [0, 0, 0, 0 ,0]
    for subject in midterm_score:
        # for i in enumerate(subject):
        #     student_score[i] += score
        sum(subject)
    else:
        a, b, c, d, e = student_score
        student_average = [a/3, b/3, c/3, d/3, e/3]
        for i, studernt in enumerate(student_average):
            print(f"student_averag: {kor_score[i]}, {math_score[i]}, {eng_score[i]}")
            i += 1

if __name__ == "__main__":
    min()