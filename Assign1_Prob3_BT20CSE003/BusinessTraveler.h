//IOOM Problem 3 BusinessTraveler.h
//Declaration of BusinessTraveler class


#ifndef BusinessTraveler_H
#define BusinessTraveler_H

//#include<iostream>
//#include<string.h>

 #include"Traveler.h"
 #include"Pager.h"

// using namespace std;



class BusinessTraveler: public Traveler{

	private:
		Pager obj;
	public:
		BusinessTraveler();
		BusinessTraveler(string s);
		BusinessTraveler(const BusinessTraveler &B);
		void displayBusinessTraveler();
		~BusinessTraveler();
		
};

#endif
