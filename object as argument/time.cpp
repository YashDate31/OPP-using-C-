#include<iostream>
using namespace std;

class time
{
    private:
    int hour,min;

    public:
    
    void getdata()
    {
        cout<<"\nEnter the hour :"<<endl;
        cin>>hour;

        cout<<"\nEnter the minutes number:"<<endl;
        cin>>min;

    }

    void display(){
        
        cout<<"\n"<<hour<<":"<<min<<endl;
    }
    time add(time a)
     {
        time y;
        y.hour= a.hour+ hour;
        y.min= a.min+ min;

        if(y.min>=60)
        {
            y.hour++;
            y.min= y.min%60;
        }
        return y;
    }
  
};   
int main()
{
    time x,y,z;
    cout<<"\n-------------------------Enter time--------------------------------------------------------------";
    cout<<"\nEnter 1st time:";
    x.getdata();
    cout<<"\n1st time is:";
    x.display();
    cout<<"\nEnter the 2nd time:";
    y.getdata();
    cout<<"\n The 2nd num is:";
    y.display();

    cout<<"\n=========================The addition of time is:==================================================";

    z=x.add(y);

    z.display();

    return 0;
}