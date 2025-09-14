#include <iostream.h>
#include <conio.h>

// Base class Cricketer
class Cricketer
{
protected:
    char name[30];
    int matches;
public:
    void getCricketer()   // Function to input cricketer info
    {
        cout << "\n Enter Cricketer Name : ";
        cin >> name;
        cout << " Enter Matches Played : ";
        cin >> matches;
    }
    void showCricketer()
    {
        cout << "\n Name : " << name;
        cout << "\n Matches Played : " << matches;
    }
};

// Bowler class derived from Cricketer using virtual
class Bowler : virtual public Cricketer
{
protected:
    int wickets;
public:
    void getBowler()
    {
        cout << " Enter Wickets Taken : ";
        cin >> wickets;
    }
    void showBowler()
    {
        cout << "\n Wickets Taken : " << wickets;
    }
};

// Batsman class derived from Cricketer using virtual
class Batsman : virtual public Cricketer
{
protected:
    int runs;
public:
    void getBatsman()
    {
        cout << " Enter Runs Scored : ";
        cin >> runs;
    }
    void showBatsman()
    {
        cout << "\n Runs Scored : " << runs;
    }
};

// AllRounder class derived from both Bowler & Batsman
class AllRounder : public Bowler, public Batsman
{
public:
    void getAllRounder()
    {
        clrscr();
        cout << " --- Enter All Rounder Details --- \n";
        getCricketer();   // from Cricketer
        getBowler();      // from Bowler
        getBatsman();     // from Batsman
    }

    void showAllRounder()
    {
        cout << "\n\n --- All Rounder Information --- \n";
        showCricketer();
        showBowler();
        showBatsman();
    }
};

// Main function
void main()
{
    clrscr();
    AllRounder A;   // object of AllRounder

    A.getAllRounder();
    A.showAllRounder();

    getch();
}
