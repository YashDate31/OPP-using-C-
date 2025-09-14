// * 'Manager' and 'Worker' classes both inherit from 'Employee'.
using namespace std;


#include <iostream>
#include <string>

class Employee {
protected:
    int emp_id;
public:
    void set_id(int id) { emp_id = id; }
};

class Manager : public Employee {
public:
    void manage() {
        cout << "Manager with ID " << emp_id << " is managing." << endl;
    }
};

class Worker : public Employee {
public:
    void work() {
        cout << "Worker with ID " << emp_id << " is working." << endl;
    }
};

int main() {
    Manager m;
    Worker w;
    m.set_id(101);
    w.set_id(202);
    m.manage();
    w.work();
    return 0;
}

