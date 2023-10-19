#include <iostream>
using namespace std;
class MyClass {
public:
   
    MyClass(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }

private:
    int x;
    int y;
};

int main() {
  
    MyClass obj(10, 20);

  
    obj.display();

    return 0;
}

