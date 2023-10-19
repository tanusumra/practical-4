#include <iostream>
using namespace std;

class MyClass {
public:
   
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }

    void display() {
        std::cout << "This is an object of MyClass." << std::endl;
    }
};

int main() {
    
    MyClass obj;

    
    obj.display();

    return 0;
}

