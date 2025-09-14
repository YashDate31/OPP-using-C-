// * A 'TeachingAssistant' class inherits from both 'Teacher' and 'Student'.

#include <iostream>
#include <string>

class Teacher {
public:
    std::string subject;
    void teach() {
        std::cout << "I can teach " << subject << "." << std::endl;
    }
};

class Student {
public:
    int grade;
    void study() {
        std::cout << "I am in grade " << grade << "." << std::endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void assist() {
        std::cout << "I assist in teaching and also study." << std::endl;
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
