#include<iostream>
using namespace std;

class student
{
	private:int rollno,mark1,mark2,mark3;
	             string name;
		
	public:
		student();
		student(int rollno,string name,int mark1,int mark2,int mark3);
	    void display();
	    void caltotalmark();
	 
};


