//
// Created by jyrnan on 2025/9/9.
//

#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H
#include <string>
using namespace std;


class Employee {
public:
    Employee(std::string name, int age, std::string position);
    [[nodiscard]] std::string getName() const {
        sayHello();
        return name;
    };
    static void sayHello();
    void introduce() const;
    ~Employee();
private:
    std::string name;
    int age;
    std::string position;
};


#endif //UNTITLED_EMPLOYEE_H