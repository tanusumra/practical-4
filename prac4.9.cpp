#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    
    friend int add(const Number &num1, const Number &num2);
};


int add(const Number &num1, const Number &num2) {
    return num1.value + num2.value;
}

int main() {
    Number num1(5);
    Number num2(7);

   
    int sum = add(num1, num2);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

