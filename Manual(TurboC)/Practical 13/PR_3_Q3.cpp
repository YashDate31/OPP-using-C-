#include <iostream.h>
#include <conio.h>

class Player {
    char name[20];
    int matches;
public:
    void getdata() {
        cout << "\nEnter Player Name: ";
        cin >> name;
        cout << "Enter Number of Matches: ";
        cin >> matches;
    }
    void display() {
        cout << "\nPlayer Name: " << name;
        cout << "\nMatches Played: " << matches;
    }
    int getMatches() {
        return matches;
    }
};

class Batsman : public Player {
    int total_score;
    float per_match_score, average;
public:
    void getdata() {
        Player::getdata();
        cout << "Enter Total Score: ";
        cin >> total_score;
        per_match_score = (float)total_score / getMatches();
        average = per_match_score;
    }
    void display() {
        Player::display();
        cout << "\nTotal Score: " << total_score;
        cout << "\nAverage Score per Match: " << average;
    }
};

class Bowler : public Player {
    int wickets;
public:
    void getdata() {
        Player::getdata();
        cout << "Enter Number of Wickets: ";
        cin >> wickets;
    }
    void display() {
        Player::display();
        cout << "\nNumber of Wickets: " << wickets;
    }
};

void main() {
    clrscr();
    Batsman b;
    Bowler w;

    cout << "\n--- Enter Batsman Data ---\n";
    b.getdata();
    cout << "\n--- Enter Bowler Data ---\n";
    w.getdata();

    cout << "\n--- Batsman Details ---";
    b.display();
    cout << "\n\n--- Bowler Details ---";
    w.display();

    getch();
}
