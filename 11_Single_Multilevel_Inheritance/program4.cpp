// * Multilevel inheritance with 'Result' inheriting from 'Test', which inherits from 'Student'.

#include <iostream>

class Student {
protected:
    int roll_number;
public:
    void set_roll_number(int r) { roll_number = r; }
    void get_roll_number() { std::cout << "Roll number is " << roll_number << std::endl; }
};

class Test : public Student {
protected:
    float sub1, sub2;
public:
    void set_marks(float m1, float m2) { sub1 = m1; sub2 = m2; }
    void get_marks() { std::cout << "Marks are " << sub1 << " and " << sub2 << std::endl; }
};

class Result : public Test {
private:
    float total;
public:
    void display() {
        total = sub1 + sub2;
        get_roll_number();
        get_marks();
        std::cout << "Total marks: " << total << std::endl;
    }
};

int main() {
    Result res;
    res.set_roll_number(101);
    res.set_marks(95.5, 89.0);
    res.display();
    return 0;
}
