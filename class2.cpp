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
	student stud1[3];
	prof prof1[3];
	staff staff1[3];
	for(int i=0; i<3; i++){
		cout<<"Student:";
		cin>>stud1[i].name;
		cout<<"ID Number:";
		cin>>stud1[i].id_num;
		cout<<"Number of Subject:";
		cin>>stud1[i].num_of_subjects;
		cout<<"Number of Books:";
		cin>>stud1[i].num_books;
		cout<<"\n";
		
		cout<<"Professor Name:";
		cin>>prof1[i].name;
		cout<<"ID Number:";
		cin>>prof1[i].id_num;
		cout<<"TIN:";
		cin>>prof1[i].tin;
		cout<<"\n";
		
		cout<<"Staff Name:";
		cin>>staff1[i].name;
		cout<<"ID Number:";
		cin>>staff1[i].id_num;
		cout<<"SSS:";
		cin>>staff1[i].sss;
		cout<<"\n";
	}
	for(int i=0; i<3; i++){
		cout<<"Student"<<i+1<<endl;
		cout<<"Student:"<<stud1[i].name<<endl;
		cout<<"Age:"<<stud1[i].id_num<<endl;
		cout<<"Number of Subjects:"<<stud1[i].num_of_subjects<<endl;
		cout<<"Number of Books:"<<stud1[i].num_books<<endl;
		cout<<"\n";
		
		cout<<"Professor"<<i+1<<endl;
		cout<<"Name:"<<prof1[i].name<<endl;
		cout<<"Age:"<<prof1[i].id_num<<endl;
		cout<<"Tin:"<<prof1[i].tin<<endl;
		cout<<"\n";
		
		cout<<"Staff"<<i+1<<endl;
		cout<<"Name:"<<staff1[i].name<<endl;
		cout<<"Age:"<<staff1[i].id_num<<endl;
		cout<<"SSS:"<<staff1[i].sss<<endl;
		cout<<"\n";
	}
