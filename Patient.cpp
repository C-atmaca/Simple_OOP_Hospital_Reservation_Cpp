#include "Patient.h"

#include <iostream>
#include <string>

using namespace std;

Patient::Patient()
{
}

Patient::Patient(char gender, string bloodType, string phone, string id)
{
	this->gender = gender;
	this->bloodType = bloodType;
	this->phone = phone;
	this->id = id;

	// --- //
	this->name;
	this->surname;
	string name = this->get_name();
	this->set_name("abc");
	// --- //
}

void Patient::set_gender(char gender)
{
	this->gender = gender;
}

char Patient::get_gender()
{
	return gender;
}

void Patient::set_bloodType(string bloodType)
{
	this->bloodType = bloodType;
}

string Patient::get_bloodType()
{
	return bloodType;
}

void Patient::set_phone(string phone)
{
	this->phone = phone;
}

string Patient::get_phone()
{
	return phone;
}

void Patient::set_id(string id)
{
	this->id = id;
}

string Patient::get_id()
{
	return id;
}

