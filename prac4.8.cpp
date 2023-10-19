#include <iostream>
using namespace std;

class Rectangle; 
class Calculator {
public:
    static double calculateArea(const Rectangle& rect);
};

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

   
    friend class Calculator;
};


double Calculator::calculateArea(const Rectangle& rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle myRectangle(5.0, 3.0);

   
    double area = Calculator::calculateArea(myRectangle);

    std::cout << "Rectangle Area: " << area << std::endl;

    return 0;
}

