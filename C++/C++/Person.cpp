#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
	_firstName = "Alex or Alice";
	_lastName = "Wedontknow";
	_birthDate = "on September 2, 1995";
	_gender = "non-binary";
	_car = "a Peugeot 208";
	_money = 5432;
}

Person::Person(string firstName, string lastName, string birthDate, string gender, float money, string car)
{
	_firstName = firstName;
	_lastName = lastName;
	_birthDate = birthDate;
	_gender = gender;
	_money = money;
	_car = car;
}

Person::~Person()
{
	
}

string Person::GetFirstName()
{
	return _firstName;
}

string Person::GetLastName()
{
	return _lastName;
}

string Person::GetBirthDate()
{
	return _birthDate;
}

string Person::GetGender()
{
	return _gender;
}

float Person::GetMoney()
{
	return _money;
}

string Person::GetCar()
{
	return _car;
}

void Person::Introduce()
{
	cout << "Je m'appelle " << _firstName << " " << _lastName << ", je suis nee en " << _birthDate << " et je suis " << _gender << endl;
	cout << "J'ai t'en de moula " << _money << " et mon carrosse est une " << _car << endl;
}