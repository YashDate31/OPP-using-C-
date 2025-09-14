#include<iostream.h>
#include<conio.h>
class Number{

    int n1,n2;

    public:
        void getdata(){
            cout<<"\nEnter the two number:";
            cin>>n1>>n2;
        }
        inline int add(){
            return n1+n2;
        }
        inline int sub(){
            return n1+n2;
        }

        inline int multi(){
            return n1*n2;
        }

        inline int div(){
            return n1/n2;
        }


};
void main()
{

    Number n;
    int add,sub,multi;
    float div;

    n.getdata();
    cout<<"\nAddition is="<<n.add()<<endl;

    cout<<"\nSubtraction is="<<n.sub()<<endl;
    cout<<"\nmultiply is="<<n.multi<<endl;
    cout<<"\nDivition is="<<n.div<<endl; 
    getch();
    
}