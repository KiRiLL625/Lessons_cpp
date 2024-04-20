//
// Created by Admin on 08.04.2024.
//

#include "Dog.h"
#include <iostream>

//реализация методов класса Dog
void Dog::say(){
    std::cout << name << " bark" << std::endl;
}

void Dog::play(){
    std::cout << name << " play bone" << std::endl;
}