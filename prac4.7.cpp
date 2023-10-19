#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    
    friend double calculateArea(const Rectangle &rect);
};


double calculateArea(const Rectangle &rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle myRectangle(5.0, 3.0);

    
    double area = calculateArea(myRectangle);

    std::cout << "Rectangle Area: " << area << std::endl;

    return 0;
}

