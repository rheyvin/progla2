#include <iostream>
using namespace std;

struct Person{
	int toes;
	int knees;
	int shoulder;
	int head;
};
int main()
{
	Person person;
	for(int i=0;i<5;i++){
	cout<<"Person"<<i+1<<endl;
	cout<<"Toes:";
	cin>>person.toes;
	cout<<"Knees:";
	cin>>person.knees;
	cout<<"Shoulder:";
	cin>>person.shoulder;
	cout<<"Head:";
	cin>>person.head;
	cout<<endl;
	}
	for(int i=0;i<5;i++){
	cout<<"Person"<<i+1<<endl;
	cout<<"Toes:"<<person.toes<<endl;
	cout<<"Knees:"<<person.knees<<endl;
	cout<<"Shoulder:"<<person.shoulder<<endl;
	cout<<"Head:"<<person.head<<endl;
	cout<<endl;
	}

	return 0;
}

