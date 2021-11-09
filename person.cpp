#include "funcPerson.h"

int main()
{
	int age_m;
	char name_m[20];
	char email_m[40];
	Person pers1_obj;
	Person* pers1 = &pers1_obj ;

	std::cout << "Enter please name : \n";
	std::cin.getline(name_m, 20);
	std::cout << "Enter please email : \n";
	std::cin.getline(email_m, 40);
	std::cout << "Enter please age : \n";
	std::cin >> age_m;
	

	setName(pers1,name_m);
	setAge(pers1,age_m);
	setEmail(pers1,email_m);
	getName(pers1);
	getEmail(pers1);
	getAge(pers1);
	Person pers2_obj;
	Person* pers2 = &pers2_obj;
	copyCtor(pers1, pers2);
	getName(pers2);
	getAge(pers2);

}