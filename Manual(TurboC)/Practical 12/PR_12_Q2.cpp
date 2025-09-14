    #include <iostream.h>
    #include <conio.h>

    // Base class Student
    class Student {
    public:
        int rollno;
        char name[30];

        void getStudentData() {
            cout << "Enter Roll Number: ";
            cin >> rollno;
            cout << "Enter Name: ";
            cin >> name;
        }

        void showStudentData() {
            cout << "Roll Number: " << rollno << endl;
            cout << "Name: " << name << endl;
        }
    };

    // Base class Marks
    class Marks {
    public:
        int m[6];   // marks of 6 subjects

        void getMarks() {
            cout << "Enter marks of 6 subjects: ";
            for (int i = 0; i < 6; i++) {
                cin >> m[i];
            }
        }

        void showMarks() {
            cout << "Marks: ";
            for (int i = 0; i < 6; i++) {
                cout << m[i] << " ";
            }
            cout << endl;
        }
    };

    // Derived class Result (Multiple Inheritance)
    class Result : public Student, public Marks {
    public:
        int total;
        float average;

        void calculate() {
            total = 0;
            for (int i = 0; i < 6; i++) {
                total += m[i];
            }
            average = total / 6.0;
        }

        void showResult() {
            showStudentData();
            showMarks();
            cout << "Total: " << total << endl;
            cout << "Average: " << average << endl;
        }
    };

    void main() {
        clrscr();

        Result r;   // object of derived class

        cout << "Enter Student Details:\n";
        r.getStudentData();
        r.getMarks();
        r.calculate();

        cout << "\nStudent Result:\n";
        r.showResult();

        getch();
    }

    /*
    ================= OUTPUT =================

    Enter Student Details:
    Enter Roll Number: 101
    Enter Name: Ram
    Enter marks of 6 subjects: 80 75 90 85 88 92

    Student Result:
    Roll Number: 101
    Name: Ram
    Marks: 80 75 90 85 88 92
    Total: 510
    Average: 85
    */
