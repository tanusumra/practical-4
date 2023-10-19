#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    float spi;

    void input() {
        std::cout << "Enter the name of the student: ";
        std::cin >> name;
        std::cout << "Enter the SPI of " << name << ": ";
        std::cin >> spi;
    }
};

int main() {
    Student students[3];

    
    for (int i = 0; i < 3; i++) {
        students[i].input();
    }

   
    int highestSPIIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].spi > students[highestSPIIndex].spi) {
            highestSPIIndex = i;
        }
    }

    
    std::cout << "Student with the highest SPI: " << students[highestSPIIndex].name << std::endl;
    std::cout << "SPI: " << students[highestSPIIndex].spi << std::endl;

    return 0;
}

