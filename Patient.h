#ifndef PATIENT_H
#define PATIENT_H
#include "Person.h"

using namespace std;

class Patient : public Person
{
private:
	char gender;
	string bloodType;
	string phone;
	string id;

public:
	Patient();
	Patient(char gender, string bloodType, string phone, string id);

	void set_gender(char gender);
	char get_gender();

	void set_bloodType(string bloodType);
	string get_bloodType();

	void set_phone(string phone);
	string get_phone();

	void set_id(string id);
	string get_id();

	friend ostream& operator<<(ostream& os, const Patient& obj);
};

#endif
