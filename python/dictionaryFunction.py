def main():
    student_info = {20140012: 'sungshul', 20140059: 'Jiyong', 20140058:'Jaehong'}
    print(student_info[20140012])

    # 추가
    student_info[20140013] = 'sugil'

    for key in student_info:
        print(key, student_info[key])

    print(type(student_info))

    # 메소드 keys() values() items()

if __name__ == '__main__':
    main()