#include<iostream.h>
#include<conio.h>

class constructor{
	private:
	int num1,num2;
	public:
		constructor()
		{

		 num1= 10;
		 num2=20;


		}
		void display()
		{
			cout<<"\nnum1:"<<num1;
			cout<<"\nnum1:"<<num2;

		}

};
void main()
{
	constructor c1;
	clrscr();
	c1.display();
	getch();


}