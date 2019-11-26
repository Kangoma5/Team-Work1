#include<iostream>
using namespace std;
//grade checker
int main()
{
	string num1,num2, program, course;
	int id,grade;
	cout<<"enter first Number\n";
	cin>>num1;
	cout<<"enter num2\n";
	cin>>num2;
	cout<<"enter your program\n";
	cin>>program;
	cout<<"enter your course\n";
	cin>>course;
	cout<<"enter your ID\n";
	cin>>id;
	cout<<"Enter your grade\n";
	cin>>grade;
	if(grade>=75 && grade<=100)
	cout<<"A";
	else if(grade<=74 && grade>=65)
	cout<<"B";
	else if(grade>50 && grade<=64)
	cout<<"C";
	else if (grade>=40 && grade<=49)
	cout<<"D";
	else if(grade<=39)
	cout<<"Reference";
	else
	cout<<"invalid Input"<<endl;
	return 0;
	
	
}

