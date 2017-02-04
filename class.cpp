#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class user{
	public:
		string name;
		int id_num;
};

class student:public user{
	public:
		int num_of_subjects;
		int num_books;
};

class prof:public user{
	public:
		int tin;
};

class staff:public user{
	public:
		int sss;
};

int main(){

	student stud1;
	cout<<"Input Student Name:";
	cin>>stud1.name;
	cout<<"Input Student Id Number:";
	cin>>stud1.id_num;
	cout<<"Input Number of Subjects:";
	cin>>stud1.num_of_subjects;
	cout<<"Input Number of Books:";
	cin>>stud1.num_books;
	cout<<"\n";

	prof prof1;
	cout<<"Input Professor Name:";
	cin>>prof1.name;
	cout<<"Input Professor Id Number:";
	cin>>prof1.id_num;
	cout<<"Input Tin:";
	cin>>prof1.tin;
	
	cout<<"\n";
	staff staff1;
	cout<<"Input Staff Name:";
	cin>>staff1.name;
	cout<<"Input Staff Id Number:";
	cin>>staff1.id_num;
	cout<<"Input Staff SSS:";
	cin>>staff1.sss;
	cout<<"\n";
	
	cout<<"Student\n";
	cout<<"Name:"<<stud1.name<<endl;
	cout<<"Age:"<<stud1.id_num<<endl;
	cout<<"Number of Subjects:"<<stud1.num_of_subjects<<endl;
	cout<<"Number of Books:" << stud1.num_books<<endl;
	cout<<"\n";
	
	cout<<"Professor\n";
	cout<<"Name:"<<prof1.name<<endl;
	cout<<"Age:"<<prof1.id_num<<endl;
	cout<<"Tin:"<<prof1.tin<<endl;
	cout<<"\n";
	
	cout<<"Staff\n";
	cout<<"Name:"<<staff1.name<<endl;
	cout<<"Age:"<<staff1.id_num<<endl;
	cout<<"SSS:"<<staff1.sss<<endl;
	
	return 0;
}
