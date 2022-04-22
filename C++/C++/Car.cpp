#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	_brand = "Chocobo";
	_model = "Chocobo éléctrique";
	_licensePlate = "Kiwi du 27";
	_carColor = Color::yellow;
	_km = 12563;
	_carPrice = 7251;
}

Car::Car(string brand, string model, string licensePlate, unsigned int km, float carPrice, Color carColor)
{
	_brand = brand;
	_model = model;
	_licensePlate = licensePlate;
	_km = km;
	_carPrice = carPrice;
	_carColor = carColor;
}

Car::~Car()
{
	
}

string Car::GetBrand()
{
	return _brand;
}

string Car::GetModel()
{
	return _model;
}

string Car::GetLicensePlate()
{
	return _licensePlate;
}

unsigned int Car::GetKm()
{
	return _km;
}

float Car::GetCarPrice()
{
	return _carPrice;
}

void Car::infoCar()
{
	//merci pokemon encore une fois
	cout << "La voiture est de marque " << _brand << "\n";
	cout << "Son modele : " << _model << "\n";
	cout << "Sa plaque d'immatriculation : " << _licensePlate << "\n";
	cout << "Son kilometrage : " << _km << " et son prix : " << _carPrice << "\n";
}
