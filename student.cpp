#include<iostream>
#include "student.h"

student::student(){
	rollno=101;
	name="harshal";
	mark1=88;
	mark2=86;
	mark3=72;
}
student::student(int rollno,string name,int mark1,int mark2,int mark3)
{
	this->rollno=rollno;
	this->name=name;
	this->mark1=mark1;
	this->mark2=mark2;
	this->mark3=mark3;
}
void student::display(){
	
	cout<<"student details is"<<endl;
	cout<<"roll no :"<<rollno<<endl;
	cout<<"name :"<<name<<endl;
	cout<<"subject 1 :"<<mark1<<endl;
	cout<<"subject 2 :"<<mark2<<endl;
	cout<<"subject 3 :"<<mark3<<endl;
}
void student::caltotalmark()
{
	int total,m1,m2,m3;
	double per;
	total=m1+m2+m3;
	cout<<"total marks is"<<total;
	per=total*100/300;
	cout<<"percentage is"<<per;
}
