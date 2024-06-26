//
// Created by Admin on 08.04.2024.
//

#include "Animal.h" //подключение заголовочного файла Animal.h

//Чтобы указать, что функция принадлежит классу, нужно указать имя класса,
//к которому она принадлежит, через двойное двоеточие (::)

//Реализация конструктора по умолчанию
Animal::Animal() {
    age = 0; //присвоение значения переменной age
    name = "Unknown"; //присвоение значения переменной name
}

//Также есть другой способ указания значений переменных через список инициализации
//Animal::Animal() : age(0), name("Unknown") {}

//Реализация конструктора с параметрами
Animal::Animal(int age, std::string name) {
    this->age = age; //присвоение значения переменной age
    this->name = name; //присвоение значения переменной name
}

//Также есть другой способ указания значений переменных через список инициализации
//Animal::Animal(int age, std::string name) : age(age), name(name) {}

//Реализация функции say
void Animal::say() {
    std::cout << "My name is " << name << ", I'm " << age << " years old" << std::endl;
}

//Реализация функции play
void Animal::play() {
    std::cout << name << " is playing" << std::endl;
}

//Реализация деструктора
/*
Animal::~Animal() {
    //пустое тело деструктора, так как динамическая память не используется
    //В таких случаях проще всего в заголовочном файле указать деструктор как default
}
*/