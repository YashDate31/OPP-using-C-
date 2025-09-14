// * A 'TeachingAssistant' class inherits from both 'Teacher' and 'Student'.
using namespace std;


#include <iostream>
#include <string>

class Teacher {
public:
    string subject;
    void teach() {
        cout << "I can teach " << subject << "." << endl;
    }
};

class Student {
public:
    int grade;
    void study() {
        cout << "I am in grade " << grade << "." << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void assist() {
        cout << "I assist in teaching and also study." << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.subject = "Math";
    ta.grade = 12;
    ta.teach();
    ta.study();
    ta.assist();
    return 0;
}

