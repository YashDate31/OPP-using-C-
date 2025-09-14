#include<iostream.h>
#include<conio.h>


class Account{

private:
	int account_no;
public:
	int balance;
	void getdata()
	{
		cout<<"\nEnter The accout no And Balance:"<<endl;
		cin>>account_no>>balance;

	}
	void showdata()
	{
		cout<<account_no;

	}


};


void main()
{
	Account a[3];
	clrscr();
	for(int i=0;i<3;i++)
	{
	   a[i].getdata();

	}

	cout<<"\n The account who has balance greater than 10000:";
	for(i=0;i<3;i++)
	{
	if(a[i].balance>10000)
	{
	   a[i].showdata();
	}
	}
	getch();

}