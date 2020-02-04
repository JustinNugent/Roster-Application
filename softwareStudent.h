#pragma once
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;
//Class that allows software student to inherit from student
class SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	SoftwareStudent(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* courseLength,
		Degree dType);
	Degree getDegreeProgram();
	void print();

	//destructor
	~SoftwareStudent();

};