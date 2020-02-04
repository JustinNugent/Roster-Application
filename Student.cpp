
#include<iostream>
#include<iomanip>
#include<string>
#include "degree.h"
#include "student.h"
using namespace std;
//empty constructor, followed by a full constructor, both containing their own respective arrays
Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < courseLengthSize; i++) 
		this->courseLength[i] = 0;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int courseLength[])
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < courseLengthSize; i++) 
		this->courseLength[i] = courseLength[i];
}

//These are some getters
string Student::getStudentID()
{
	return studentID;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

string Student::getEmailAddress()
{
	return emailAddress;
}

int Student::getAge()
{
	return age;
}

int* Student::getCourseLength()
{
	return courseLength;
}

//These are some setters
void Student::setStudentID(string studentID)
{
	this->studentID = studentID;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setCourseLength(int courseLength[])
{
	for (int i = 0; i < courseLengthSize; i++)
		this->courseLength[i] = courseLength[i];
}
//Print method that displays all student information except for Degree

void Student::print()
{

}

Student::~Student()
{
};