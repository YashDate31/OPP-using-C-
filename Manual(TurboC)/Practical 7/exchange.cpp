//friend function
#include<iostream>
using namespace std;
class swap{

    private:
     int num1,num2;

    public:
     void getdata(){
        cout<<"\nEnter the two num";
        cin>>num1>>num2;

     }

     void putdata()
     {
        cout<<"\nNumber after exchanging:";
        cout<<num1<<num2;

     }

    friend void exchange(swap a);
    
};

void exchange(swap a)
{
    int temp=a.num1;
    a.num1=a.num2;
    a.num2=temp;

    //cout<<""
}
int main()
{
    swap a;
    a.getdata();
    exchange(a);
    a.putdata();
    return 0;

}