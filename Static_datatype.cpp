#include<iostream>
using namespace std;

class student{
    static int no;
    char surname[10];
    public:
        void getdata()
        {
            cout<<"Enter the surname:";
            cin>>surname;
            no++;
            cout<<"Student surname is: " << surname << endl;
        }

        void putdata()
        {
           
            cout << "Number of students: " << no << endl;
        }

};

int student::no=0;
int main()
{
    student s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s3.putdata();
    s2.putdata();
    return 0;
}