# KUIOT-Teemo
C/C++, Database, Arduino, RaspberryPi

---
## 2024-02-22
---

- 개요                  / instruction
- 구글 슬라이드 공유     / share google slide link
- gitHub 가입           / gitHub sign up
- gitHub 저장소생성     /create gitHub repository
- ubuntu 한글 설정       / setting korean  
- VsCode 설치           / install VsCode
- git 설치              / install git
```shell
sudo apt-get install git
git clone https://github.com/MrTwee/KUIOT-Teemo.git
```

- sql workbench install - windows
- MySQL DBMS install - windows
- sql workbench install - ubuntu
- MySQL DBMS install - ubuntu
- vscode mysql extension install
- chapter01 데이터베이스 개론
- chapter03 SQL 기초
    - 데이터베이스 만들기 create database;
    - 데이터베이스에 테이블 만들기 3개
        - bookid
        - bookname
        - publisher
        - price
    - 데이터베이스에 데이터 넣기 insert into ... valuse(...);
    - 유저 만들어서 권한 설정 하기;
        - grant all privileges on *.* to 'root'@'localhost' identified by '1234';
    - windows cli 에서 testDB 생성하기

...
## 2024-02-23
...

- MySQL ubuntu 문제 해결
- user를 새로 만들어 관리자 권한을 부여했지만 해결되지 않음
- 권한 설정 및 user create 시
    - ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY '0000'; 명령어 사용
    - 새로운 유저를 만들 때 mysql_native_password를 사용하도록 설정
- 우분투 myworkbench에서 코드를 작성하고 vscode에서 git에 연동
    - 추가한 파일:
        - create_database.sql
        - create_table.sql
        - insert_data.sql
        - create_user.sql
        - select1.sql
    - 3장 내용 추가
        - 셀렉트 쓰는 방법
    - 2장 데이터베이스 모델 진행
        - 릴레이션 스키마
        - 무결성 제약조건
            - 도메인
            - 키 
                - 슈퍼키
                - 후보키
                - 기본키
                - 대리키
                - 대체키
                - 외래키
        - 관계대수 연산자         
    - 3장 group by 165p 까지 진행
    - 윈도우 DBMS 를 우분투에서 연결
        - 윈도우 DBMS에 외부 IP 접근 가능한 USER 생성
        - 윈도우 방화벽에 3306포트 열기
        - 윈도우 DBMS에 임의의 데이터 넣고 우분투에서 확인
    - 우분투 DBMS를 윈도우에서 연결
        - 우분투 DBMS에 외부 IP 접근 가능한 USER 생성
        - 우분투 방화벽에 전체 포트 열기
        - 우분투 DBMS에 임의의 데이터를 넣고 윈도우에서 확인
            - VERTUALBOX 프로그램에서는 WINDOWS로 가는 PING이 확인되지 않음
            - VMWARE 프로그램에서는 WINDOWS로 가는 PING이 확인됨
- MySQL폴더 기
- SELECT문 문법 기본형과 상세형

...
## 2024-02-26
...

- C언어 연산자
    - 산술 연산
        - 기본 산술 연산자 코드 작성
            - arithmetic.c
        - 남녀성비 구하는 코드 작성 
            -genderRatio.c
    - 증감 연산
        - a++, ++a 증감연산자 코드 작성
            - incrementer.c
    - 치환 연산
    - 비교 연산 
        - 기본 비교 연산자 코드 작성
            - compare.c
        - 입력 받은 문자로 대문자 소문자 알파벳 확인하는 코드 작성
            - alphabetic.c
        - 입력 받은 숫자로 홀수 짝수 확인하는 코드 작성
            - oddEven.c
            - oddNumber.c
        - 입력 받은 점수로 합격 불합격 확인하는 코드 작성
            - passFail.c
        - 입력 받은 숫자를 일정 숫자 범위 내에 있는지 확인하는 코드 작성
            - zero2Nine.c
    - 논리 연산 &&, ||, !
        - 입력 받은 년도로 윤년, 평년 확인하는 코드 작성
            -leapYear.c, ordinaryYear.c
    - 형변환
    - 비트연산자



...
## 2024-02-27
...

- 제어흐름 (control folw)

- 선택 (selection)
    - if
    - if else
    - else if
    + switch case

- 반복문 (loop)
    - while
    - for
    + do while

- 삼항연산자

...
## 2024-02-28
...


...
## 2024-02-29
...

- 빌드 과정
    - make cmake for linux
    - 전처리 어셈블리 바이너리 링크
- make 실습
    - 기본 문법
    - 여러 개 명령어 등록
    - 연속 실행
    - 생략 가능 명령어
    - 변수 사용
- 3장
    - DML
        - select
    - DDL
        - create, alter, drop
    - DCL
        - insert, update, delete
- 4장 내장 함수
    - SQL 내장 함수
        - 숫자 함수
            - abs, ceil, floor, round, sign ...
        - 문자열 함수
            - concat, replace, substr, length ...
        - 날짜 함수
            - str_to_date, date_format, adddate, sysdate ...
            - format 형식 %Y-%m-%d %H:%i:%s ... 


...
## 2024-03-05
...

- 다차원 배열(Array of Array)
    - 2차원 배열
- 포인터 (반드시 대상을 가리키며 역참조해야 한다)
    - 다중 포인터
    - 이중 포인터 (단일 포인터를 가리킬 때 사용)
    - 함수 포인터
    - void 포인터 (순수하게 주소값 저장, 역참조 불가능)
    - 포괄형 포인터
- 포인터와 배열의 관계
    - 배열 이름이 식에서 사용되면 첫번째 엘리먼트의 시작 주소를 의미
    - char형 포인터와 double형 포인터에 +1은 각각 크기값이 다름
    - 포인터의 +1은 배열의 다음 엘리먼트를 가리킨다



...
## 2024-03-06
...

- SWAP
    - 호출하는 쪽에 있는 변수값을 호출당하는 쪽에서 바꾸어주어야할 때 사용
    - 배열을 인자로 전달할 때 첫번째 엘리먼트의 시작 주소와 사이즈를 전달

- 변수
    - 지역변수 (Local)
        - 함수 안에서 사용
        - 함수가 시작될 때 생성 함수가 끝날 때 소멸
        - 해당 함수만
        - 스스로 초기화되지 않는다
    - 전역변수  (Global)
        - 함수 밖에서 사용
        - 프로그램 시작부터 끝까지
        - 모든 함수
        - 스스로 초기화된다
    - Static 전역
        - 프로그램 시작부터 끝까지
        - .C 파일 안에 함수만
        - 스스로 초기화된다
    - Static 지역
        - 프로그램 시작부터 끝까지
        - 특정 함수만
        - 스스로 초기화된다

- Process
    - code 영역
    - data 영역
        - 전역변수
        - Static 전역
        - Static 지역
    - stack 영역
        - 지역변수
    - heap 영역
        - malloc/free

...
## 2024-03-07c
...

    dd
