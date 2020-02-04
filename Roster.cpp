#include "roster.h"
Roster::Roster()
{
}
Roster::Roster(int totalStudents)
{
	totalStudents = totalStudents;
}
//insert student
void Roster::add(string ID, string name1, string name2, string email, int s_Age, int course1, int course2, int course3, Degree degree)
{
	if (lastIndex <= totalStudents - 2)
	{
		lastIndex++;
		int courses[3] = { course1,course2,course3 };
		if (degree == SECURITY)
		{
			classRosterArray[lastIndex] = new SecurityStudent(ID,
				name1, name2, email, s_Age, courses, SECURITY);
		}
		else if (degree == NETWORK)
		{
			classRosterArray[lastIndex] = new NetworkStudent(ID,
				name1, name2, email, s_Age, courses, NETWORK);
		}
		else if (degree == SOFTWARE)
		{
			classRosterArray[lastIndex] = new SoftwareStudent(ID,
				name1, name2, email, s_Age, courses, SOFTWARE);
		}

	}
}

void Roster::remove(string ID)
{
	bool flag = true;
	for (int i = 0; i <= totalStudents; i++)
	{
		//remove specific students
		if (classRosterArray[i]!=nullptr&& classRosterArray[i]->getStudentID() == ID)
		{
			flag = false;
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			break;
		}
	}
	if (flag)
	{
		cout << "\nA student with this ID was not found" << endl;
	}
}
//print average course length
void Roster::printAverageCourseLength(string ID)
{
	for (int i = 0; i < totalStudents; i++)
	{
		if (classRosterArray[i] != nullptr&&classRosterArray[i]->getStudentID()==ID)
		{
			int avg = classRosterArray[i]->getCourseLength()[0] + classRosterArray[i]->getCourseLength()[1] + classRosterArray[i]->getCourseLength()[2];
			avg = avg / 3;
			cout << "\nAverage course length is: " << avg << endl;
		}
	}
}
//print all students
void Roster::printAll()
{
	for (int i = 0; i < totalStudents; i++)
	{
		if (classRosterArray[i] != nullptr)
		{
			classRosterArray[i]->print();
		}
	}
}
//invalid email finder
void Roster::printInvalidEmails()
{

	for (int i = 0; i < totalStudents; i++)
	{
		if (classRosterArray[i] != nullptr)
		{
			bool period = false,atSign=false,space=false;

			string email = classRosterArray[i]->getEmailAddress();
			//find invalid emails
			for (int i = 0; i < email.length(); i++)
			{
				if (email[i] == ' ')
				{
					space = true;
					break;
				}
				else if (email[i] == '@')
				{
					atSign = true;
				}
				else if (email[i] == '.')
					period = true;
			}
			if (space == true || atSign == false || period == false)
			{
				cout<<classRosterArray[i]->getEmailAddress()<<endl;
			}
		}
	}
}
//print all students of specific degree
void Roster::printByDegreeProgram(Degree dType)
{
	for (int i = 0; i < totalStudents; i++)
	{
		if (classRosterArray[i] != nullptr&&dTypeStrings[classRosterArray[i]->getDegreeProgram()]==dTypeStrings[dType])
		{
			classRosterArray[i]->print();
		}
	}
}
//destructor
Roster::~Roster()
{
	for(int i=0;i<totalStudents;i++)
	{
		if(classRosterArray[i]!=nullptr)
			delete classRosterArray[i];
		classRosterArray[i] = nullptr;
		lastIndex = -1;
	}
}
int main()
{
	cout << "WGU C867, SCRIPTING AND PROGRAMMING IN C++\t 10/23/2019\t ID: #001023417\t Name: JUSTIN NUGENT" << endl;
	//Create an instance of the Roster class called classRoster.
	Roster classRoster;
	//Add each student to classclassRoster.
	int tempindex = 0;
	for (int i = 0; i < students; i++)
	{
		tempindex = 0;
		string tempArray[10];
		string a = *((studentData + i));
		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] == ',')
			{
				tempindex++;
			}
			else
			{
				tempArray[tempindex]+=a[j];
			}
		}
		//select degree
		Degree deg{};
		if (tempArray[8] == "SECURITY")
			deg = SECURITY;
		else if (tempArray[8] == "NETWORK")
			deg = NETWORK;
		else if (tempArray[8] == "SOFTWARE")
			deg = SOFTWARE;
		classRoster.add(tempArray[0], tempArray[1], tempArray[2], tempArray[3],
			stoi(tempArray[4]), stoi(tempArray[5]), stoi(tempArray[6]), stoi(tempArray[5]),deg);
	}
	//print all
	cout << "\nPrint all\n" << endl;
	classRoster.printAll();
	//Print invalid emails
	cout << "\nPrint invalid emails\n" << endl;
	classRoster.printInvalidEmails();
	//Average course length
	classRoster.printAverageCourseLength("A3");
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	return 0;
}