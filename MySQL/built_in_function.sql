-- 4-1 example
select abs(-78), abs(+78);
select round(3.141592, 2);
select round(321.141592, -1);
select round(321.141592, 0);

-- 4-3 example
select custid, round(avg(saleprice), -2)
from Orders
group by custid;

-- 4-4 example
select bookid, bookname publisher, price from Book;
select bookid, replace(bookname, '야구', '농구'), publisher, price from Book;

-- 4-5 example
select bookname '제목', char_length(bookname) '문자수', length(bookname) '바이트수'
from Book 
where publisher like '굿스포츠';

-- 4-6 exmaple
select substr(name, 1, 1), count(*) 인원 from Customer group by substr(name, 1, 1);

-- 4-7 example
select * from Orders;
select orderid 주문번호, orderdate 주문날짜, adddate(orderdate, interval 10 day) 확정일 from Orders;

-- 4-8 example
select orderid, orderdate, custid, bookid from Orders
where orderdate = str_to_date('20240707', '%Y%m%d');

select orderid, date_format(orderdate, %Y-%M-%d), custid, bookid from order;

use madangdb;

create table Mybook(
	bookid int primary key,
    price int);
insert into Mybook(bookid, price) value (1, 10000);
insert into Mybook(bookid, price) value (2, 20000);
insert into Mybook(bookid, price) value (3, NULL);
select price + 100 from Mybook where bookid=3;

select sum(price), avg(price), count(*), count(price), count(bookid)
from Mybook;

-- 4-10 example
select name, ifnull(phone, '연락처없음') '전화번호' from Customer;

-- 4-11 example

set @seq:=0;

select (@seq:=@seq+1) '순번', custid, name, phone
from Customer
where @seq < 2;

-- 4-12 example
SELECT orderid, saleprice
FROM Orders
WHERE saleprice <= (SELECT AVG(saleprice) FROM Orders);

-- select avg(saleprice) FROM Orders;

-- 4-13 example
SELECT orderid, custid, saleprice
FROM Orders od1
WHERE saleprice > (	select avg(saleprice)
					from Orders od2
                    where od1.custid=od2.custid);

-- 4-14 example
SELECT SUM(saleprice) 'total'
FROM Oders
WHERE custid in (	SELECT custid
					FROM Customer
					Where ADDRESS LIKE '%대한민국%');
                    
-- 4-15 example
SELECT orderid, saleprice
FROM Orders
WHERE saleprice > all (	SELECT saleprice
						FROM Orders
                        WHERE custid = 3);

-- 4-16 example
SELECT sum(saleprice) total
FROM Orders od
WHERE exists (select *
				FROM Customer cs
                WHERE address like "%대한민국%" AND cs.custid=od.custid);
-- 4-17 example
SELECT (SELECT name
		FROM Customer cs
        WHERE cs.custid=od.custid) 'name', sum(saleprice) 'total'
		FROM Orders od
		GROUP BY od.custid;
-- 4-18 example

alter table Orders ADD bname varchar(40);

select * from Orders;

update Orders
set bname = (	select bookname
				from Book
                where Book.bookid = Orders.bookid);
                
-- 4-19 example
SELECT cs.name, sum(od.saleprice)
FROM (	select custid, name
		from Customer
        where custid <= 2) cs, Orders od
WHERE cs.custid = od.custid
GROUP BY cs.name;