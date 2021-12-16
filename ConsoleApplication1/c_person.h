#pragma once
#include<iostream>
class c_person
{
private:
	char* name;
	int age;
public:
	c_person();
	c_person(char* name, int age);
	inline char* getname() const
	{
		return name;
	}
	inline  int getage() const
	{
		return age;
	}
	inline void setname(char* name)
	{
		this->name = name;
	}
	inline void setage(int age)
	{
		this->age = age;
	}
};

