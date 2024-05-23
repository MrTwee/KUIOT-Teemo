def min():
    score = int(input("점수를 넣으시오: "))
    if score >= 90: 
        grade = 'A'
    elif score >= 80: 
        grade = 'B'
    elif score >= 70: 
        grade = 'C'
    elif score >= 60: 
        grade = 'D'
    else: grade = 'F'
    
    print(f"학점은 {grade} 입니다")

    if True:
        print("참입니다")
    if False:
        print("거짓입니다")
    if 2:
        print("참입니다")
    if 0:
        print("거짓입니다")
    if 0.0:
        print("거짓입니다")
    if 0.0001:
        print("참입니다")
    if "":
        print("거짓입니다")
    if "abc":
        print("참입니다")
    if None:
        print("거짓입니다")
    if []:
        print("거짓입니다")
    if [1, 2, 3]:
        print("참입니다")

if __name__ == "__main__":
    min()