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