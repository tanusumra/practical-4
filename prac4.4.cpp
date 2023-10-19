#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea()
	 {
        return length * width;
    }
};


void printArea(const Rectangle &rect) 
{
    double area = rect.calculateArea()
	    std::cout << "Rectangle Area: " << area << std::endl;
}

int main() {
    
    Rectangle myRectangle(5.0, 3.0);

   
    printArea(myRectangle);

    return 0;
}

