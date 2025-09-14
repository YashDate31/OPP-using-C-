#include<iostream.h>
#include<conio.h>

class test2;
class test1
{
	int oopt1,dmst1,dsut1;
	public:
	void gett1data();
	friend void avg(test1,test2);
};

class test2
{
	int oopt2,dmst2,dsut2;
	public:
	void gett2data();
	friend void avg(test1,test2);
};

void test1::gett1data()
{
	cout<<"Enter the Marks of test 1 of OOP DMS DSU : "<<endl;
	cin>>oopt1>>dmst1>>dsut1;
}

void test2::gett2data()
{
	cout<<"Enter the Marks of test 2 of OOP DMS DSU : "<<endl;
	cin>>oopt2>>dmst2>>dsut2;
}
void avg(test1 t1, test2 t2)

{
	float avg1,avg2,avg3;
	avg1=(t1.oopt1+t2.oopt2)/2.0;
	avg2=(t1.dmst1+t2.dmst2)/2.0;
	avg3=(t1.dsut1+t2.dsut2)/2.0;
	cout<<"Average of OOP is : "<<avg1<<endl;
	cout<<"Average of DMS is : "<<avg2<<endl;
	cout<<"Average of DSU is : "<<avg3<<endl;
}

void main()
{
	test1 t1;
	test2 t2;
	clrscr();
	t1.gett1data();
	t2.gett2data();
	avg(t1,t2);
	getch();
}
/*    output
Enter the Marks of test 1 of OOP DMS DSU :
80
60
77
Enter the Marks of test 2 of OOP DMS DSU :
85
64
65
Average of OOP is : 82.5
Average of DMS is : 62
Average of DSU is : 71
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
