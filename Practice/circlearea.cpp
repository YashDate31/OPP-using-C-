#include<iostream>
using namespace std;

class circle
{
    int r;
    float area;
    public:
        void read();
        void compute();
        void display();
};

void circle::read()
{
    cout<<"Enter the radius:";
    cin>>r;
}
void circle::compute()
{
    area= (int)3.14*r*r;
}

void circle::display()
{
    3

    
    cout<<"area is="<< area;
}
int main()
{
    circle c1;
    c1.read();
    c1.compute();
    c1.display();
    return 0;
}