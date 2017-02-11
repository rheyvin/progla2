#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
};

class Student : public Person{
	private:
		int stud_num;
		int q1_score;
	public:
		string course;
		void set_stud_num(int);
		int get_stud_num();
		void set_q1_score(int);
		int get_q1_score();
};

void Student::set_stud_num(int num){
	stud_num = num;	
}

int Student::get_stud_num(){
	return stud_num;
}

void Student::set_q1_score(int num){
	q1_score = num;
}

int Student::get_q1_score(){
	return q1_score;
}

int main(){
Student stud1[100];
Student num1;
Student q1;
int x,y,avg;

for(int i=0; i<3; i++){
	cout<<"Student"<<i+1<<endl;
	cout<<"Name:";
	cin>>stud1[i].name;
	cout<<"Age:";
	cin>>stud1[i].age;
	cout<<"Student Number:";
	cin>>x;
	num1.set_stud_num(x);
	cout<<"Quiz #1 Score:";
	cin>>y;
	q1.set_q1_score(y);
	cout<<"Course:";
	cin>>stud1[i].course;
	cout<<"\n";
}
	for(int i=0; i<3; i++){
		avg=avg+y;
		q1.set_q1_score(y);
	}	
	avg=avg/3;
	cout<<"The Average of 3 Student in Quiz#1 is:"<<avg<<endl;
	
}

//	/*  1. Create an array of class Students. Capacity is 100.
//		2. Put values to 3 elements of the class Student's array:
//			2.a. name 
//			2.b. age 
//			2.c. stud_num 
//			2.d. q1_score
//			2.e. course
//		3. Get the average of the 3 student's q1_score.
//	*/
