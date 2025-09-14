#include<iostream>
using namespace std;

class complex
{
    private:
    int real,img;

    public:
    
    void getdata()
    {
        cout<<"\nEnter the real number:"<<endl;
        cin>>real;

        cout<<"\nEnter the imaginary number:"<<endl;
        cin>>img;

    }

    void display(){
        
        cout<<"\n"<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex add(complex a,complex b);
  
};
 complex add(complex b,complex a)
    {
        complex y;
        y.real= a.real+ b.real;
        y.img= a.img+ b.img;
        return y;
    }
int main()
{
    complex x,y,z;
    cout<<"\nEnter the 1st number";
    x.getdata();
    cout<<"\n The number is:";
    x.display();
    cout<<"\nEnter the 2nd number";
    y.getdata();
    cout<<"\n The 2nd num is:";
    y.display();

    cout<<"\nThe addition is:";
    //call friend
    z=add(x,y);

    z.display();

    return 0;
}