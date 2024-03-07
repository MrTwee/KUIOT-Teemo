use madangdb;

-- 4-19 example
create view vw_Book
as 	select *
	from Book
    where bookname like '%축구%';
    
select * from vw_Book;

-- 4-20 example
create view vw_Customer
as select *
from Customer
where address like '%대한민국%';

-- 4-21 example
create view vw_Orders (orderid, custid, name, bookid,
						bookname, saleprice, orderdate)
as select od.orderid, od.custid, cs.name, od.bookid, bk.bookname, od.saleprice, od.orderdate
	from Orders od, Customer cs, Book bk
	where od.custid = cs.custid and od.bookid = bk.bookid;

CREATE OR REPLACE VIEW vw_Customer (custid, name, address)
AS SELECT custid, name, address
FROM Customer
WHERE address like '%영국%';

SELECT * from vw_Customer;
SELECT * from Customer;

drop view vw_Customer;
insert into vw_Customer value (6, 이진우, "영국 세종");
insert into Customer value (6, "이진우", "영국 세종", "010-8824-4455");
insert into Customer value (7, "박정석", "영국 대전", "000-0000-0000");

show variables like 'datadir';
