# Object-Oriented Programming Using C++

A comprehensive collection of C++ programs demonstrating all major Object-Oriented Programming concepts. This repository contains 26 different topics with multiple example programs for each concept.

## 📚 Topics Covered

### Basic Concepts
1. **Input/Output Expressions** - Basic I/O operations and expression evaluation
2. **Scope Resolution & Memory Management** - Using `::` operator, `new`, `delete`, and manipulators
3. **Type Casting** - Implicit and explicit type conversions

### Classes and Objects
4. **Function Inside Class** - Defining member functions within class definition
5. **Function Outside Class** - Defining member functions outside class using `::`
6. **Inline Functions** - Performance optimization with inline functions

### Advanced Class Features
7. **Friend Functions** - Accessing private members across classes
8. **Static Members** - Static data members and member functions
9. **Array of Objects** - Working with multiple objects

### Constructors and Destructors
10. **Constructors** - Default, parameterized, copy, and multiple constructors

### Inheritance
11. **Single & Multilevel Inheritance** - Basic inheritance concepts
12. **Multiple Inheritance** - Inheriting from multiple base classes
13. **Hierarchical Inheritance** - Multiple classes inheriting from one base
14. **Virtual Base Class** - Solving diamond problem in inheritance
15. **Constructors in Derived Classes** - Constructor call order in inheritance

### Pointers and Objects
16. **Pointers to Objects** - Using pointers with objects and `this` pointer
17. **Pointers to Derived Classes** - Base pointers to derived objects

### Polymorphism
18. **Function Overloading** - Multiple functions with same name
19. **Unary Operator Overloading** - Overloading unary operators
20. **Binary Operator Overloading** - Overloading binary operators
21. **Virtual Functions** - Runtime polymorphism
22. **Pure Virtual Functions** - Abstract classes and interfaces

### File Handling
23. **File I/O** - Reading and writing files using constructors and `open()`
24. **File Content Copying** - Copying data between files
25. **Sequential File Operations** - Sequential file input/output
26. **Binary File Operations** - Working with binary files

## 🗂️ Repository Structure

```
📦 OPP-using-C-
├── 📁 ALL u/                          # Comprehensive examples organized by topic
│   ├── 📁 01_IO_Expressions/
│   ├── 📁 02_Scope_Memory_Manipulators/
│   ├── 📁 03_Type_Casting/
│   ├── 📁 04_Class_Function_Inside/
│   ├── 📁 05_Class_Function_Outside/
│   ├── 📁 06_Inline_Function/
│   ├── 📁 07_Friend_Function/
│   ├── 📁 08_Static_Members/
│   ├── 📁 09_Array_Of_Objects/
│   ├── 📁 10_Constructors/
│   ├── 📁 11_Single_Multilevel_Inheritance/
│   ├── 📁 12_Multiple_Inheritance/
│   ├── 📁 13_Hierarchical_Inheritance/
│   ├── 📁 14_Virtual_Base_Class/
│   ├── 📁 15_Constructors_In_Derived_Class/
│   ├── 📁 16_Pointers_To_Objects/
│   ├── 📁 17_Pointers_To_Derived_Class/
│   ├── 📁 18_Function_Overloading/
│   ├── 📁 19_Unary_Operator_Overloading/
│   ├── 📁 20_Binary_Operator_Overloading/
│   ├── 📁 21_Virtual_Function/
│   ├── 📁 22_Pure_Virtual_Function/
│   ├── 📁 23_File_IO/
│   ├── 📁 24_Copy_File_Content/
│   ├── 📁 25_Sequential_File_IO/
│   └── 📁 26_Binary_File_IO/
├── 📁 Manual(TurboC)/                  # Practical assignments
├── 📁 Practice/                        # Additional practice programs
├── 📁 Friend function/
├── 📁 Static Function and data member/
├── 📁 Structure/
├── 📁 Type casting/
└── 📁 object as argument/
```

## 🚀 Getting Started

### Prerequisites
- C++ compiler (GCC, Clang, or Visual Studio)
- Basic knowledge of C++ syntax

### Running the Programs

1. **Clone the repository**
   ```bash
   git clone https://github.com/YashDate31/OPP-using-C-.git
   cd OPP-using-C-
   ```

2. **Navigate to any topic folder**
   ```bash
   cd "ALL u/01_IO_Expressions"
   ```

3. **Compile and run any program**
   ```bash
   g++ program1.cpp -o program1
   ./program1
   ```

## 📝 Program Structure

Each program follows a consistent structure:
- **Comment Header**: Brief description of what the program demonstrates
- **Includes**: Necessary header files
- **Using Namespace**: `using namespace std;` for cleaner code
- **Classes/Functions**: Well-documented implementation
- **Main Function**: Example usage and testing

### Example:
```cpp
// * Demonstrates basic class with member functions

#include <iostream>
using namespace std;

class Example {
public:
    void display() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    Example obj;
    obj.display();
    return 0;
}
```

## 🎯 Learning Path

For beginners, follow this suggested order:

1. **Start with Basics** (Topics 1-3)
2. **Master Classes** (Topics 4-6)
3. **Understand Advanced Features** (Topics 7-9)
4. **Learn Constructors** (Topic 10)
5. **Explore Inheritance** (Topics 11-15)
6. **Work with Pointers** (Topics 16-17)
7. **Master Polymorphism** (Topics 18-22)
8. **Practice File Handling** (Topics 23-26)

## 🤝 Contributing

Contributions are welcome! Please feel free to:
- Add more example programs
- Improve existing code
- Fix bugs or issues
- Enhance documentation

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

## 👨‍💻 Author

**YashDate31**
- GitHub: [@YashDate31](https://github.com/YashDate31)

---

⭐ **Star this repository if you found it helpful!**

📚 **Perfect for**: Students learning OOP concepts, C++ enthusiasts, interview preparation, and academic reference.