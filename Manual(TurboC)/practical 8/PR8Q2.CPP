#include<iostream.h>
#include<conio.h>

class pweight
{
	float m,w;
	static float g;
	public:
	void getdata();
	int weight();
	void display();

};

float pweight::g;

void pweight::getdata()
{
	cout<<"Enter the Mass of Planet : ";
	cin>>m;
	g=9.8;
}

int pweight::weight()
{
	w=m*g;
	return w;
}

void pweight::display()
{
	cout<<"Weight of the Planet : "<<w<<endl;
}

void main()
{
	pweight w1,w2;
	clrscr();
	w1.getdata();
	w1.weight();
	w2.getdata();
	w2.weight();
	w1.display();
	w2.display();
	getch();
}