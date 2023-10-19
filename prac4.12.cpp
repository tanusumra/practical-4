#include <iostream>
using namespace std;
class MyClass {
public:
   
    MyClass(int value) {
        this->value = value;
        std::cout << "Constructor called with value " << value << std::endl;
    }

   
    MyClass(const MyClass& other) {
        this->value = other.value;
        std::cout << "Copy constructor called with value " << value << std::endl;
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
  
    MyClass obj1(42);

   
    MyClass obj2 = obj1;

    obj1.display();
    obj2.display();

    return 0;
}

