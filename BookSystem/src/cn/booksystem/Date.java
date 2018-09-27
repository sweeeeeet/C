package cn.booksystem;

public class Date {
Book[] books=new Book[50];
public Book[] init(){
	Book b1=new Book();
	b1.id=1;
	b1.name="javaø™∑¢";
	b1.state=1;
	books[0]=b1;
	
	Book b2=new Book();
	b2.id=2;
	b2.name="c”Ô—‘";
	b2.state=1;
	books[1]=b2;
	
	Book b3=new Book();
	b3.id=3;
	b3.name="c++";
	b3.state=1;
	books[2]=b3;
	
	Book b4=new Book();
	b4.id=4;
	b4.name="java∏≈ ˆ";
	b4.state=1;
	books[3]=b4;
	
	return books;
}

}
