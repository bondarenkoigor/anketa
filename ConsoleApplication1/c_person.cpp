#include "c_person.h"

c_person::c_person()
{
	name = (char*)"unknown";
	age = 0;
}

c_person::c_person(char* name, int age)
{
	this->name = name;
	this->age = age;
}
