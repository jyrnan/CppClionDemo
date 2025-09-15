#include <iostream>
#include <string>
#include <utility>

#include "Employee.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
class Person {
    public:
    Person(std::string name, const int age):name(std::move(name)),age(age){
        std::cout << "Person " << this->name << " created." << std::endl;
    }
    ~Person()= default;
    void introduce() const {
        std::cout << "My name is " << name << ", and I am " << age << " years old." << std::endl;
    }
private:
    std::string name;
    int age;

};
int main() {
    Person person("Alice", 30);
    person.introduce();

    Employee employee("Bob", 25, "Software Engineer");
    employee.introduce();
    return 0;
  }