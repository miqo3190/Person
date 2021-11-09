#include "classPerson.h"

void setName(Person* pers,char* name_m)
{
	pers->name = name_m;
}
void setAge(Person* pers,int age_m)
{
	pers->age = age_m;
}
void setEmail(Person* pers,char* email_m)
{
	pers->email = email_m;
}
void getName(Person* pers)
{
	std::cout << pers->name<<"\n";
}
void getEmail(Person* pers)
{
	std::cout << pers->email<<"\n";
}
void getAge(Person* pers)
{
	std::cout << pers->age<<"\n";
}