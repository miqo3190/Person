#include <iostream>

struct Person
{
	int age;
	char* name;
	char* email;
} pers;

void defaultCtor(Person* this1)
{
	this1->age = 0;
	this1->email = nullptr;
	this1->name = nullptr;
}
void parametCtor(Person* this1, int age, char* name, char* email)
{
	this1->age = age;
	this1->email = email;
	this1->name = name;
}
void copyCtor(Person* this1, Person* this2)
{
	this2->name = this1->name;
	this2->age = this1->age;
	this2->email = this2->email;
}
