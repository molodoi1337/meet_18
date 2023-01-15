#pragma once
#include <iostream>
using namespace std;//надеюсь правильно понял.Сделал все в 1 заголовке
//везде делал все в заголовке,т.к. там не много.
class Animal
{
protected:
	char name[15];
	char type[15];
	int age;
	int weight;
public:
	Animal() :name{ "bobik" }, type{ "Unknown" }, age{ 1 }, weight{5} {}

};

class Dog :public Animal {
	char name[15];
	char type[15];
	int age;
	int weight;
public:
	Dog() :name{ "sharik" }, type{ "Dog" }, age{ 2 }, weight{10} {}

};

class Cat : public Animal {
	char name[15];
	char type[15];
	int age;
	int weight;
public:
	Cat() :name{ "murzik" }, type{ "Cat" }, age{ 3 }, weight{ 4 } {}

};

class Parrot :public Animal {
	char name[15];
	char type[15];
	int age;
	int weight;
public:
	Parrot() :name{ "murzik" }, type{ "Cat" }, age{ 3 }, weight{ 4 } {}
};



