#pragma once
#include <string>
#include <iostream>
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
using namespace std;

const int students = 5; 
const string studentData[students] = 
{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Justin,Nugent,jnuge12@wgu.edu,24,55,44,33,SOFTWARE"
};
class Roster {

private:
	int lastIndex = -1;
	int totalStudents = 5;
	Student * classRosterArray[5];

public:
	Roster();
	Roster(int totalStudents);

	Student * getStudentAt;

	void add(string ID, string name1, string name2, string email, int s_Age, int course1, int course2, int course3, Degree);
	void remove(string ID);
	void printAverageCourseLength(string ID);
	void printAll();
	void printInvalidEmails();
	void printByDegreeProgram(Degree dType);
	
	~Roster();
};