//
// Created by Admin on 08.04.2024.
//

#include "Cat.h"
#include <iostream>

//реализация методов класса Cat
void Cat::say() {
    std::cout << name << " meow" << std::endl;
}

void Cat::play(){
    std::cout << name << " play ball" << std::endl;
}