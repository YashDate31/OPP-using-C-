// * Overloading the pre-increment operator (++) using a member function.

#include <iostream>

class Counter {
private:
    int count;
public:
    Counter(int c = 0) : count(c) {}

    int getCount() { return count; }

    // Overload ++ when used as prefix
    Counter& operator++() {
        ++count;
        return *this;
    }
};

int main() {
    Counter c1(5);
    std::cout << "Initial count: " << c1.getCount() << std::endl;

    ++c1; // Calls operator++()

    std::cout << "After pre-increment: " << c1.getCount() << std::endl;

    return 0;
}
