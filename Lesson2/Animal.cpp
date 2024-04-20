//
// Created by Admin on 08.04.2024.
//

#include "Animal.h"

#include <utility>
#include <iostream>

//реализация методов класса Animal

Animal::Animal(): age(0), name("Unknown") {}

Animal::Animal(int age, std::string name): age(age), name(std::move(name)) {}

void Animal::play(){
    std::cout << name << " is playing" << std::endl;
}

void Animal::say() {
    std::cout << name << " is saying" << std::endl;
}

//перегрузка оператора сложения (складывать животных будем по возрасту)
int Animal::operator+(Animal other_animal){
    return this->age += other_animal.age;
}

int Animal::get_age() {
    return this->age;
}

//Переопределение оператора вывода в поток
//Здесь видно, что мы можем обращаться к закрытым полям класса, при этом ключевое
//слово friend писать снова не нужно, а также не нужно писать имя класса
std::ostream& operator<<(std::ostream& os, Animal& animal){
    os << "Name: " << animal.name << ", age: " << animal.age;
    return os;
}

//Переопределение оператора ввода из потока
//С ним могут иногда возникнуть проблемы, так как ввод воспринимается как строка
//Но в данном случае всё работает корректно
//friend также не пишем и не пишем имя класса
std::istream& operator>>(std::istream& is, Animal& animal){
    is >> animal.name >> animal.age;
    return is;
}

//Перегрузка оператора вызова функции
//Перегружаем так, чтобы при вызове объекта класса как функции выводилось имя и возраст животного
void Animal::operator()(){
    std::cout << "Name: " << name << ", age: " << age;
}
