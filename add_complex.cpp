#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
       void getdata()
        {
            cout<<"\nEnter the real number and img number: ";
            cin>>real>>img;
        }

       void display()
       {
        cout<<"\nthe num is"<<endl;
        cout<<real<<"+"<<img<<"i";
       }

       complex add(complex c2)
       {
            complex y;

            y.real= real+ c2.real;
            y.img= img+ c2.img;
            return y;

       }


};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c3= c1.add(c2);
    cout<<"The sum is:"<<endl;
    c3.display();
    return 0;
}
#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
       void getdata()
        {
            cout<<"\nEnter the real number and img number: ";
            cin>>real>>img;
        }

       void display()
       {
        cout<<"\nthe num is"<<endl;
        cout<<real<<"+"<<img<<"i";
       }

       complex add(complex c2)
       {
            complex y;

            y.real= real+ c2.real;
            y.img= img+ c2.img;
            return y;

       }


};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c3= c1.add(c2);
    cout<<"The sum is:"<<endl;
    c3.display();
    return 0;
}
#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
       void getdata()
        {
            cout<<"\nEnter the real number and img number: ";
            cin>>real>>img;
        }

       void display()
       {
        cout<<"\nthe num is"<<endl;
        cout<<real<<"+"<<img<<"i";
       }

       complex add(complex c2)
       {
            complex y;

            y.real= real+ c2.real;
            y.img= img+ c2.img;
            return y;

       }

};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c3= c1.add(c2);
    cout<<"The sum is:"<<endl;
    c3.display();
    return 0;
}
#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
       void getdata()
        {
            cout<<"\nEnter the real number and img number: ";
            cin>>real>>img;
        }

       void display()
       {
        cout<<"\nthe num is"<<endl;
        cout<<real<<"+"<<img<<"i";
       }

       complex add(complex c2)
       {
            complex y;

            y.real= real+ c2.real;
            y.img= img+ c2.img;
            return y;

       }


};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c3= c1.add(c2);
    cout<<"The sum is:"<<endl;
    c3.display();
    return 0;
} 