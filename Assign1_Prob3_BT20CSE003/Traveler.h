//Aaryan Patel
//Enrollment Number:BT20CSE003
//Assignment1
//Program to define two classes and derive a class from one of the base 
//classes and use constructor to perform a specific function.

//IOOM Problem 3 Traveler.h
//Declaration of Traveler class


#ifndef TRAVELER_H
#define TRAVELER_H

// #include<iostream>
// #include<string.h>

// using namespace std;



class Traveler{

	private:
	string name;
	
	public:
	Traveler(string str);
	Traveler(const Traveler &T);
	string get_name() const;
	void displayTraveler();
	~Traveler();

};

#endif
