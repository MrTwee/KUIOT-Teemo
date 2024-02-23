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