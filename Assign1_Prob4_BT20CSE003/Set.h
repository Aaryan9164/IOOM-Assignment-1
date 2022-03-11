//Aaryan Patel
//Enrollment Number:-BT20CSE003
//Assignment-1 problem 4
//Set.h file


 //#include<iostream>
 //#include<string.h>

 //using namespace std;

#define SIZE 20

#ifndef SET_H
#define SET_H


class Set{

	private:
		int set[SIZE];
		int size;
		static int i;
	public:
		Set();
		Set(int a[],int n=5);
		Set(const Set &S);
		void read();
		void print(Set P);
		int get_size_of_set(Set S);
		Set UNION(Set S1,Set S2);
	    bool Belong(Set R,int n);
	    Set INTERSECTION(Set p1,Set p2);
		~Set();
   };
	int Set::i=1;

#endif

