#pragma once
#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
	const static int courseLengthSize = 3;

	//So that these items remain visible to the necessary classes!
protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int courseLength[3];
	Degree dType;

public:
	//constructors, empty and full
	Student();

	Student(string studentID, string firstName, string lastName, string emailAddress, int Age, int courseLength[]);

	//getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getCourseLength();
	virtual Degree getDegreeProgram() = 0; // our virtual method

	//setters
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setCourseLength(int days[]);
	
	//print method incoming!
	virtual void print() = 0;

	//destructor
	~Student();
};