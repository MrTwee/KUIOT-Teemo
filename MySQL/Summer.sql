use madangdb;

create table Summer(
	sid int primary key,
    class varchar(40),
    price int);
    
insert into Summer values (100, 'JAVA', 20000);
insert into Summer values (150, 'PYTHON', 15000);
insert into Summer values (200, 'C', 10000);
insert into Summer values (250, 'JAVA', 20000);

select * from Summer;

-- 7-1 example
SELECT price as 'C class의 가격'
FROM Summer
WHERE class LIKE 'C';