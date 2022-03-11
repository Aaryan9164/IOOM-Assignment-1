//Aaryan Patel
//Enrollment Number:BT20CSE003
//Assignment1


//IOOM Problem 1 and 2 item.h
//Declaration of item class

//#include<iostream>
//#include<string.h>

#ifndef ITEM_H
#define ITEM_H

class Item{
	
	private:
		int item_id;
		int quantity;
		char item_label[10];
	public:
		Item();//default constructor
		Item(int id,int q,char il[]);//Parametrized Constructor
		Item(const Item &I);//copy constructor
		~Item();//destructor
		int get_id() const;//getter method
		int getQty() const;//getter method
		char*getItem_Label();//getter method
		void set_id(int id);//setter method
		void setQty(int q);//setter method
		void setItem_Label(char label[]);//setter method
		void printItem();//printing the output
		
};
#endif
		
