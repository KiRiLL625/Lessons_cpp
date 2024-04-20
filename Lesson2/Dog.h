//
// Created by Admin on 08.04.2024.
//

#ifndef LESSON2_DOG_H
#define LESSON2_DOG_H

#include "Animal.h"

//класс Dog наследует класс Animal (переносит все его поля и методы)
class Dog: public Animal {
public:
    void play() override; //переопределение метода play (override - ключевое слово, указывающее на переопределение метода)
    void say() override; //переопределение метода say
};


#endif //LESSON2_DOG_H
