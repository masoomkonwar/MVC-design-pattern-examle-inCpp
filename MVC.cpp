#include<iostream>
using namespace std;
class Student
{
	string name;
	string rollno;
	public:
	string getRollno()
	{
		return rollno;
	}
	void setRollno(string r)
	{
		rollno=r;
	}
	void setName(string n)
	{
		name=n;
	}
	string getName()
	{
		return name;
	}
};

class StudentView{
	public:
	void printDetails(string roll,string name)
	{
		cout<<"\nStudent:"<<"\nNAME :"<<name<<"\nRoll No :"<<roll;
	}
};
class Controller{
	Student *model;
	StudentView *view;
	public:
	Controller(Student &model, StudentView &view)
	{
		this->model=&model;
		this->view=&view;
	}
	void setStudentName(string s)
	{
		model->setName(s);
	}
	void setStudentRoll(string r)
	{
		model->setRollno(r);
	}
	string getStudentRoll()
	{
		return model->getRollno();
	}
	string getStudentName()
	{
		return model->getName();
	}
	void updateview()
	{
		view->printDetails(model->getRollno(),model->getName());
	}

};

int main()
{


	Student s1,s2;
	s1.setName("Rahul");
	s1.setRollno("65677");
	StudentView view;
	Controller c(s1,view);
	c.updateview();
	s2.setName("John");
	s2.setRollno("44");
	Controller c1(s2,view);
	c.setStudentName("Wick");
	c.updateview();
	c1.updateview();
	
return 0;
}
