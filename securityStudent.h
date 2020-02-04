#pragma once
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;
//Class that allows security student to inherit from student
class SecurityStudent : public Student
{
public:
	SecurityStudent();
	SecurityStudent(string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* courseLength,
		Degree dType);
	Degree getDegreeProgram(); //override?
	void print();

	//destructor
	~SecurityStudent();

};