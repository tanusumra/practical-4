#include <iostream>
using namespace std;
class MyClass {
public:
   
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

   
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }

    void display() {
        std::cout << "Inside MyClass" << std::endl;
    }
};

int main() {
   
    MyClass obj;

  
    obj.display();

   

    return 0;
}

