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
    - 
- MySQL폴더 기
- SELECT문 문법 기본형과 상세형