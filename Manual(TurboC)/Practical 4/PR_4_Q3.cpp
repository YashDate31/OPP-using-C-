/*Program to calculate square of a number using class in Turbo C++*/

#include<iostream.h>
#include<conio.h>

class math
{
    int num, result;

public:
    void getinfo()
    {
        cout << "Enter the number :";
        cin >> num;
    }

    void putinfo()
    {
        result = num * num;
        cout << "The square of the given number is :" << result;
    }
};

void main()
{
    clrscr();
    math m;
    m.getinfo();
    m.putinfo();
    getch();
}

/*Output: Enter the number :5
          The square of the given number is :25 */
