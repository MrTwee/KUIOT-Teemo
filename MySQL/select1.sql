-- example1
select bookname, price from Book;

-- example2
select price, bookname from Book;

-- example 3-2
select bookid, bookname, publisher, price from Book;

select * from Book;

-- example 3-3
select publisher from Book;

-- example 3-4
select * from Book;
select * from Book where price < 20000;

-- example 3-5
select * from Book where price between 10000 and 20000;
select * from Book where price >=10000 and price <= 20000;

-- example 3-6
select * from Book where publisher in ('굿스포츠', '대한미디어');
select * from Book where publisher not in ('굿스포츠', '대한미디어');

-- example 3-7, 3-8
select bookname 책이름, publisher 발행자 from Book where bookname like '축구의 역사'; 
select bookname, publisher from Book where bookname like '%축구%'; 

-- example 3-9
select * from Book where bookname like '_구%';

-- example 3-10 3-11
select * from Book where (bookname like '%축구%') AND (price >= 20000);
select * from Book where (publisher = '굿스포츠') OR (publisher = '대한미디어');
select * from Book where (publisher = '굿스포츠') or (price >= 10000);

-- example 3-12
select * from Book order by bookname;
select * from Book order by bookname desc;

-- example 3-14
select * from Book order by price desc, publisher asc;

select * from R1 where (A = 'a1') or (A = 'a2');

-- example 3-15 3-16
select * from Orders;
select sum(saleprice) 총판매액 from Orders;
select sum(saleprice) 총매출 from Orders where custid=2;

-- example 3-17
select sum(saleprice) 총판매액,
	ROUND(AVG(saleprice), 0) 평균액,
    min(saleprice) 최소액,
    max(saleprice) 최대액
from Orders;

-- example 3-18
select count(*) from Orders;

select count(phone) from Customer;


select custid 고객번호, count(*) 총수량, sum(saleprice) 총판매액 from Orders group by custid;

select custid 고객번호, count(*) 총수량 from Orders where saleprice >= 8000 group by custid having count(*) >=2;
