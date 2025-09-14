#include<iostream.h>
#include<conio.h>

class number{
	int num1,num2;
	public:
	void getnum1();
	void getnum2();
	friend int exchange(number,number);
};

void number::getnum1()
{
	cout<<"Enter the number 1 to exchange :"<<endl;
	cin>>num1;
}

void number::getnum2()
{
	cout<<"Enter the number 2 to exchange :"<<endl;
	cin>>num2;
}

int exchange(number n1,number n2){
	int temp;
	temp=n1.num1;
	n1.num1=n2.num2;
	n2.num2=temp;
	cout<<"The Exchanged Numbers are :"<<endl<<n1.num1<<endl<<n2.num2<<endl;
}

void main()
{
	number n1,n2;
	clrscr();
	n1.getnum1();
	n2.getnum2();
	exchange(n1,n2);
	getch();
}

/*
Enter the number 1 to exchange :
12
Enter the number 2 to exchange :
20
The Exchanged Numbers are :
20
12
*/