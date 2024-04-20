//
// Created by Admin on 08.04.2024.
//

//Защита от двойного включения (include) в файле Animal.h
#ifndef LESSON_ANIMAL_H
#define LESSON_ANIMAL_H

#include <iostream> //стандартная библиотека ввода-вывода

/*
 Новая конструкция в c++ - class
    class - это пользовательский тип данных, который позволяет объединить в себе переменные и функции
    class - это шаблон, по которому создаются объекты
    class - это тип данных, который можно использовать в качестве других типов данных
 Это официальные определения, но проще говоря, класс - это такой конструктор, из которого можно создавать объекты
 Объекты - это переменные, которые создаются на основе класса

 Пример:
 */
class Animal {
    /*
     Один из принципов ООП - инкапсуляция
     Инкапсуляция - это сокрытие данных и методов работы с ними внутри класса
     В c++ инкапсуляция реализуется с помощью модификаторов доступа (public, private, protected)
     private - модификатор доступа, который означает, что переменные и функции, объявленные после него, доступны только внутри класса
     public - модификатор доступа, который означает, что переменные и функции, объявленные после него, доступны из любого места программы
     О protected поговорим позже
     */
private:
    //переменные класса
    int age; //возраст
    std::string name; //имя
public:
    //конструкторы - функции, которые вызываются при создании объекта
    //Конструктор должен иметь то же название, что и класс
    //Конструктор не имеет возвращаемого значения
    //Конструктор по умолчанию (без параметров)
    Animal();
    //Конструктор с параметрами
    Animal(int age, std::string name);
    //функции класса
    void say();
    void play();
    //деструктор - функция, которая вызывается при удалении объекта
    //Деструктор должен иметь то же название, что и класс, но с символом ~ в начале
    //Деструктор не имеет возвращаемого значения
    //Вообще говоря, деструктор нужен для освобождения памяти, но в данном случае он пустой
    ~Animal() = default; //default - ключевое слово, которое означает, что деструктор по умолчанию
};

//Здесь только сигнатуры (определения) функций, реализация функций в файле Animal.cpp


#endif //LESSON_ANIMAL_H
