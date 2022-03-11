//IOOM Problem 3 Traveler.cpp


#include<iostream>
#include<string.h>


using namespace std;

#include"Traveler.h"

//Traveler Constructor copies the string to internal string data 
//member(Parameterized constructor)
Traveler::Traveler(string str)
{
	cout<<"Traveler class Parameterized constructor called"<<endl;
	name=str;
}


//Traveler Copy Constructor
Traveler::Traveler(const Traveler &T)
{
	cout<<"Traveler Copy Constructor called!"<<endl;
	name=T.name;
}

//Traveler Destructor
Traveler::~Traveler()
{
	cout<<"Traveler Destructor called"<<endl;
}

//Getter method
string Traveler::get_name() const
{
	cout<<"Getter method called!"<<endl;
	return name;
}


//display method
void Traveler::displayTraveler()
{
	cout<<name<<endl;
}
