#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3,sum,avg;

    cout<<"Enter marks of 3 subs ";

    cin>> sub1>>sub2>>sub3;

    sum = sub1 + sub2 + sub3;

    cout<<"\nSum is="<< sum;

    avg = sum/3;
    
    cout<<"\nAvg is "<<avg;


    return 0;
}
