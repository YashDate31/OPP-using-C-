// * 'Manager' and 'Worker' classes both inherit from 'Employee'.

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
        std::cout << "Manager with ID " << emp_id << " is managing." << std::endl;
    }
};

class Worker : public Employee {
public:
    void work() {
        std::cout << "Worker with ID " << emp_id << " is working." << std::endl;
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
