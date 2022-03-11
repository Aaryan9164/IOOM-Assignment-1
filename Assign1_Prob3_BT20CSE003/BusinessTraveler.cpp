//IOOM Problem 3 Business.cpp


#include<iostream>
#include<string.h>


using namespace std;

#include"BusinessTraveler.h"
#include"Pager.h"



//BusinessTraveler Default Constructor
BusinessTraveler::BusinessTraveler():Traveler(""),obj(""){


	cout<<"BusinessTraveler default constructor called"<<endl;
}



//BusinessTraveler Parameterized Constructor
BusinessTraveler::BusinessTraveler(string s):Traveler(s),obj(s)
{
	cout<<"BusinessTraveler Parameterized Constructor Called"<<endl;
	
}


//BusinessTraveler Copy Constructor
BusinessTraveler::BusinessTraveler(const BusinessTraveler &B):Traveler(B),obj(B.obj)
{
	cout<<"BusinessTraveler Copy Constructor called!"<<endl;
	//obj.displayPager();
	cout<<endl;
}


//BusinessTraveler Destructor
BusinessTraveler::~BusinessTraveler()
{
	cout<<"BusinessTraveler Destructor called"<<endl;
}


//display method
void BusinessTraveler::displayBusinessTraveler()
{
	obj.displayPager();
	
}
