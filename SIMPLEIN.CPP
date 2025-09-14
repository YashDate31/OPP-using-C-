#include<iostream.h>
#include<conio.h>

class simple
{
	int pricipal,duration;
	static float rate;
	float simple_i;

	public:
		void getdata()
		{
			cout<<"\nEnter the priciple , duration and rate:";
			cin>>pricipal>>duration>>rate;

		}
		void calculate(){

		       simple_i=( pricipal*duration*rate)/100.00;

		}
		void display(){

			cout<<"\nThe simple interest is:"<<simple_i<<endl;
		}
};
float simple ::rate;

void main()
{
	simple s1;
	clrscr();
	s1.getdata();
	s1.calculate();
	s1.display();
	getch();
	


}





