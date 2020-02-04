#pragma once
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;
//Class that allows network student to inherit from student
class NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(
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
	~NetworkStudent();

};