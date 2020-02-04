#pragma once
#include "networkStudent.h"
#include <iostream>
using namespace std;

NetworkStudent::NetworkStudent() :Student()
{
	dType = NETWORK;
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseLength[], Degree dType) : Student(studentID, firstName, lastName, emailAddress, age, courseLength)
{
	dType = NETWORK;
}

Degree NetworkStudent::getDegreeProgram()
{
	return NETWORK;
}

//print function found below :)

void NetworkStudent::print()
{
	cout << "\tFirst Name: " << getFirstName();
	cout << "\tLast Name: " << getLastName();
	cout << "\tAge: " << getAge();
	cout << "\tCourse Length: {" <<getCourseLength()[0]<<" , "<< getCourseLength()[1]<<" , "<<getCourseLength()[2] << "}";
	cout << "\tDegree Program: " << dTypeStrings[getDegreeProgram()] << endl;
}

NetworkStudent::~NetworkStudent()
{
	Student::~Student();
}