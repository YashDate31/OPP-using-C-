#include<iostream>
using namespace std;

class square{

    int side;

    public:
   void  getdata();
   void putdata();
};
void square::getdata(){
    cout<<"Enter the side";
    cin>>side;
}
void square::putdata()
{
    cout<<"Area is "<<side*side;
}
int main()

{
    square s1;
    s1.getdata();
    s1.putdata();
    return 0;
}