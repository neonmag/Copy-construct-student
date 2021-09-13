#include <iostream>
#include "Student.h"

using namespace std;

Student::Student()
{
	this->number = nullptr;
	this->city = nullptr;
	this->country = nullptr;
	this->name = nullptr;
	this->surname = nullptr;
	this->fathername = nullptr;
	this->birthday = nullptr;
	this->group = nullptr;
	this->university = nullptr;
	counter++;
}

Student::Student(const char* number, const char* city,
	const char* country, const char* name, const char* surname, const char* fathername,
	const char* birthday, const char* group, const char* university)
{
	this->number = new char[strlen(number) + 1];
	strcpy_s(this->number, strlen(number) + 1, number);
	this->city = new char[strlen(city) + 1];
	strcpy_s(this->city, strlen(city) + 1, city);
	this->country = new char[strlen(country) + 1];
	strcpy_s(this->country, strlen(country) + 1, country);
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);
	this->fathername = new char[strlen(fathername) + 1];
	strcpy_s(this->fathername, strlen(fathername) + 1, fathername);
	this->birthday = new char[strlen(birthday) + 1];
	strcpy_s(this->birthday, strlen(birthday) + 1, birthday);
	this->group = new char[strlen(group) + 1];
	strcpy_s(this->group, strlen(group) + 1, group);
	this->university = new char[strlen(university) + 1];
	strcpy_s(this->university, strlen(university) + 1, university);
	counter++;
}

Student::Student(const Student& obj) // Copy construct
{
	cout << "\nCopy construct\n";
	if (this->number != nullptr)
	{
		delete[]this->number;
	}
	if (this->city != nullptr)
	{
		delete[]this->city;
	}
	if (this->country != nullptr)
	{
		delete[]this->country;
	}
	if (this->name != nullptr)
	{
		delete[]this->name;
	}
	if (this->surname != nullptr)
	{
		delete[]this->surname;
	}
	if (this->fathername != nullptr)
	{
		delete[]this->fathername;
	}
	if (this->birthday != nullptr)
	{
		delete[]this->birthday;
	}
	if (this->group != nullptr)
	{
		delete[]this->group;
	}
	if (this->university != nullptr)
	{
		delete[]this->university;
	}
	this->number = new char[strlen(obj.number) + 1];
	strcpy_s(this->number, strlen(obj.number) + 1, obj.number);
	this->city = new char[strlen(obj.city) + 1];
	strcpy_s(this->city, strlen(obj.city) + 1, obj.city);
	this->country = new char[strlen(obj.country) + 1];
	strcpy_s(this->country, strlen(obj.country) + 1, obj.country);
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->surname = new char[strlen(obj.surname) + 1];
	strcpy_s(this->surname, strlen(obj.surname) + 1, obj.surname);
	this->fathername = new char[strlen(obj.fathername) + 1];
	strcpy_s(this->fathername, strlen(obj.fathername) + 1, obj.fathername);
	this->birthday = new char[strlen(obj.birthday) + 1];
	strcpy_s(this->birthday, strlen(obj.birthday) + 1, obj.birthday);
	this->group = new char[strlen(obj.group) + 1];
	strcpy_s(this->group, strlen(obj.group) + 1, obj.group);
	this->university = new char[strlen(obj.university) + 1];
	strcpy_s(this->university, strlen(obj.university) + 1, obj.university);
}

void Student::Input()
{
	this->number = new char[20];
	cout << "\nEnter your number: ";
	cin.getline(this->number, 19);
	this->city = new char[20];
	cout << "\nEnter your city: ";
	cin.getline(this->city, 19);
	this->country = new char[20];
	cout << "\nEnter your country: ";
	cin.getline(this->country, 19);
	this->name = new char[20];
	cout << "\nEnter your name: ";
	cin.getline(this->name, 19);
	this->surname = new char[20];
	cout << "\nEnter your surname: ";
	cin.getline(this->surname, 19);
	this->fathername = new char[20];
	cout << "\nEnter your fathername: ";
	cin.getline(this->fathername, 19);
	this->birthday = new char[20];
	cout << "\nEnter your birthday: ";
	cin.getline(this->birthday, 19);
	this->group = new char[20];
	cout << "\nEnter your group: ";
	cin.getline(this->group, 19);
	this->university = new char[20];
	cout << "\nEnter your university: ";
	cin.getline(this->university, 19);
}

void Student::Print()
{
	cout << "\n\nName: " << this->name;
	cout << "\nSurname: " << this->surname;
	cout << "\nFathername: " << this->fathername;
	cout << "\nBirthday: " << this->birthday;
	cout << "\nNumber: " << this->number;
	cout << "\nCity: " << this->city;
	cout << "\nCountry: " << this->country;
	cout << "\nGroup: " << this->group;
	cout << "\nUniversity: " << this->university << endl;
}

int Student::GetCounter()
{
	cout << "Counter = " << counter << endl;
	return counter;
}

const char* Student::GetName()
{
	return this->name;
}

void Student::SetName(const char* name)
{
	if (this->name != nullptr)
	{
		delete[]this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

const char* Student::GetSurname()
{
	return this->surname;
}

void Student::SetSurname(const char* surname)
{
	if (this->surname != nullptr)
	{
		delete[]this->surname;
	}
	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);
}

const char* Student::GetFathername()
{
	return this->fathername;
}

void Student::SetFathername(const char* fathername)
{
	if (this->fathername != nullptr)
	{
		delete[]this->fathername;
	}
	this->fathername = new char[strlen(fathername) + 1];
	strcpy_s(this->fathername, strlen(fathername) + 1, fathername);
}

const char* Student::GetNumber()
{
	return this->number;
}

void Student::SetNumber(const char* number)
{
	if (this->number != nullptr)
	{
		delete[]this->number;
	}
	this->number = new char[strlen(number) + 1];
	strcpy_s(this->fathername, strlen(fathername) + 1, fathername);
}

const char* Student::GetBirthday()
{
	return this->birthday;
}

void Student::SetBirthday(const char* birthday)
{
	if (this->birthday != nullptr)
	{
		delete[]this->birthday;
	}
	this->birthday = new char[strlen(birthday) + 1];
	strcpy_s(this->birthday, strlen(birthday) + 1, birthday);
}

const char* Student::GetCity()
{
	return this->city;
}

void Student::SetCity(const char* city)
{
	if (this->university != nullptr)
	{
		delete[]this->city;
	}
	this->city = new char[strlen(city) + 1];
	strcpy_s(this->city, strlen(city) + 1, city);
}

const char* Student::GetCountry()
{
	return this->country;
}

void Student::SetCountry(const char* country)
{
	if (this->country != nullptr)
	{
		delete[]this->country;
	}
	this->country = new char[strlen(country) + 1];
	strcpy_s(this->country, strlen(country) + 1, country);
}

const char* Student::GetGroup()
{
	return this->group;
}

void Student::SetGroup(const char* group)
{
	if (this->group != nullptr)
	{
		delete[]this->group;
	}
	this->group = new char[strlen(group) + 1];
	strcpy_s(this->group, strlen(group) + 1, group);
}

const char* Student::GetUniversity()
{
	return this->university;
}

void Student::SetUniversity(const char* university)
{
	if (this->university != nullptr)
	{
		delete[]this->university;
	}
	this->university = new char[strlen(university) + 1];
	strcpy_s(this->university, strlen(university) + 1, university);
}

Student::~Student()
{
	delete[]this->name; // Освобождение памяти
	this->name = nullptr;
	delete[]this->surname;
	this->surname = nullptr;
	delete[]this->fathername;
	this->fathername = nullptr;
	delete[]this->city;
	this->city = nullptr;
	delete[]this->country;
	this->country = nullptr;
	delete[]this->birthday;
	this->birthday = nullptr;
	delete[]this->group;
	this->group = nullptr;
	delete[]this->university;
	this->university = nullptr;
	delete[]this->number;
	this->number = nullptr;
	counter--;
}

int Student::counter = 0; // Инициализация static поля