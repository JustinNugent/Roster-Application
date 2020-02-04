#pragma once
#include "securityStudent.h"
#include <iostream>
using namespace std;

SecurityStudent::SecurityStudent() :Student()
{
	dType = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseLength[], Degree dType) : Student(studentID, firstName, lastName, emailAddress, age, courseLength)
{
	dType = SECURITY;
}

Degree SecurityStudent::getDegreeProgram()
{
	return SECURITY;
}

//print function found below :)

void SecurityStudent::print()
{
	cout << "\tFirst Name: " << getFirstName();
	cout << "\tLast Name: " << getLastName();
	cout << "\tAge: " << getAge();
	cout << "\tCourse Length: {" << getCourseLength()[0] << " , " << getCourseLength()[1] << " , " << getCourseLength()[2] << "}";
	cout << "\tDegree Program: " << dTypeStrings[getDegreeProgram()] << endl;
}

SecurityStudent::~SecurityStudent()
{
	Student::~Student();
}