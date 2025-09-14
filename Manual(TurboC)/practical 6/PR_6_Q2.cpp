#include<iostream>
using namespace std;
class rectangle{

    int lenght,breadth;

    public:
        void getdata(){
            cout<<"\n Enter the lenght and breadth:"<<endl;
            cin>>lenght>>breadth;

        }
        inline void area()
        {
            cout<<"Area is "<<lenght*breadth;
        }
};

int main()
{
    rectangle r;
    r.getdata();
    r.area();
    
    return 0;
}