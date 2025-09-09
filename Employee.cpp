//
// Created by jyrnan on 2025/9/9.
//

#include "Employee.h"

#include <iostream>
#include <ostream>
#include <utility>
#include <vector>

Employee::Employee(std::string name, const int age): name(std::move(name)), age(age){

}
Employee::~Employee() = default;

void Employee::sayHello() {
    vector<int> v {1, 2, 3, 4, 5};

    for (auto i: v) {
        cout << i << endl;
    }

}

