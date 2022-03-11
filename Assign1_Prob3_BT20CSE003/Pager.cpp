//IOOM Problem 3 Pager.cpp


#include<iostream>
#include<string.h>


using namespace std;

#include"Pager.h"

//Pager Constructor copies the string to internal string data 
//member(Parameterized constructor)
Pager::Pager(string x)
{
	cout<<"Pager class Parameterized constructor called"<<endl;
	noise=x;
}


//Pager Copy Constructor
Pager::Pager(const Pager &P)
{
	cout<<"Pager Copy Constructor called!"<<endl;
	noise=P.noise;
}

//Pager Destructor
Pager::~Pager()
{
	cout<<"Pager Destructor Called"<<endl;
}

//Getter method
string Pager::get_noise() const 
{
	cout<<"Getter Method called"<<endl;
	return noise;
}


//display method
void Pager::displayPager()
{
	cout<<noise<<endl;
}


