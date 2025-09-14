#include<iostream.h>
#include<conio.h>

class sinterest
{
	long int principal,duration,sint;
	static int rate;
	public:
	void getdata();
	void display();
	int simplint();
};
int sinterest::rate;
void sinterest::getdata()
{
	cout<<"Enter the Principal : ";
	cin>>principal;
	cout<<"Enter the Duration (years) : ";
	cin>>duration;
	cout<<"Enter the Rate of Interest : ";
	cin>>rate;

}

int sinterest::simplint()
{
	sint= (principal * rate * duration)/100;
	return sint;
}
void sinterest::display()
{
	cout<<"Simple Interest = "<<sint;
}

void main()
{
	sinterest s1;
	clrscr();
	s1.getdata();
	s1.simplint();
	s1.display();
	getch();
}