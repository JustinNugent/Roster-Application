#pragma once
#include "SoftwareStudent.h"
#include <iostream>
using namespace std;

SoftwareStudent::SoftwareStudent() :Student()
{
	dType = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseLength[], Degree dType) : Student(studentID, firstName, lastName, emailAddress, age, courseLength)
{
	dType = SOFTWARE;
}

Degree SoftwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

//print function found below :)

void SoftwareStudent::print()
{
	cout << "\tFirst Name: " << getFirstName();
	cout << "\tLast Name: " << getLastName();
	cout << "\tAge: " << getAge();
	cout << "\tCourse Length: {" << getCourseLength()[0] << " , " << getCourseLength()[1] << " , " << getCourseLength()[2]<< "}";
	cout << "\tDegree Program: " <<dTypeStrings[getDegreeProgram()] << endl;
}

SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
}