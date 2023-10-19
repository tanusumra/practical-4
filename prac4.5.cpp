#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(const std::string &n, int a) : name(n), age(a) {}

   
    static Student createStudent(const std::string &name, int age) {
        return Student(name, age);
    }
};

void printStudent(const Student &student) {
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
}

int main() {
    
    Student student1 = Student::createStudent("tanya", 17);

   
    printStudent(student1);

    return 0;
}



