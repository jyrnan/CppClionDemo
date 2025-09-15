#include "Employee.h"
#include <string>

#include <iostream>
#include <ostream>
#include <utility>
#include <vector>

Employee::Employee(std::string name, const int age, std::string position)
    : name(name), age(age), position(position) {
}
Employee::~Employee() = default;

void Employee::sayHello() {
    std::cout << "Hello from Employee class!" << std::endl;
}
void Employee::introduce() const {
    std::cout << "My name is " << name << ", I am " << age << " years old, and my position is " << position << "." << std::endl;
}

