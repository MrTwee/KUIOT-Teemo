use madangdb;

create index ix_Book_1 ON Book(bookname);
create index ix_Book_2 ON Book(publisher, price);

select * from Book where publisher='대한미디어' and price >= 30000;
select * from Book where bookname like '%축구%';
select * from Book;

drop index ix_Book_1 on Book;

analyze table Book;
