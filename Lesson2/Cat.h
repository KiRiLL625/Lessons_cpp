//
// Created by Admin on 08.04.2024.
//

#ifndef LESSON2_CAT_H
#define LESSON2_CAT_H

#include "Animal.h"

//класс Cat наследует класс Animal (переносит все его поля и методы)
class Cat: public Animal {
public:
    void play() override;
    void say() override;
};


#endif //LESSON2_CAT_H
