//Aaryan Patel
//Enrollment Number:BT20CSE003
//Assignment1
//Program to define two classes and derive a class from one of the base 
//classes and use constructor to perform a specific function.

//IOOM Problem 3 Pager.h
//Declaration of Pager class


#ifndef PAGER_H
#define PAGER_H

// #include<iostream>
// #include<string.h>

// using namespace std;



class Pager{

	private:
	string noise;
	
	public:
	Pager(string x);
	Pager(const Pager &P);
	string get_noise() const;
	void displayPager();
	~Pager();

};

#endif
