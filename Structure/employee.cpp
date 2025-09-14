#include<stdio.h>
#include<iostream>
using namespace std;

struct worker{

    int id;
    char name[100];
    int salary;
} w[5];

int main(){
    int i;
    cout<< "Enter the details of workeer:";
    cout<< "1st id then name and last salary";
    
    for(i=0;i<2;i++)
    {
        cin>>w[i].id >>w[i].name >>w[i].salary;

    }
    cout<<"The info is:";
    for(i=0;i<2;i++)
    
    {
        cout <<"\n"<<w[i].id <<"\n"<<w[i].name << "\n"<<w[i].salary;

    }
    return 0;

}