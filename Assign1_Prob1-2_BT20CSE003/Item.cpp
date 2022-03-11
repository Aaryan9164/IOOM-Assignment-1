//IOOM Assignment 1 Problem 1 and 2
//Item.cpp



#include<iostream>
#include<string.h>

#include"Item.h"

using namespace std;

//Item Default constructor
Item::Item()
{
	//cout<<"Item Default constructor called"<<endl;
	item_id=0;
	quantity=0;
	strcpy(item_label,"");
}

//Item Parameterized Constructor Called
Item::Item(int id,int q,char il[])
{
	cout<<"Item Parameterized Constructor Called!"<<endl;
	item_id=id;
	quantity=q;
	strcpy(item_label,il);
}


//Item Copy Constructor Called
Item::Item(const Item &I)
{
	//cout<<"Item Copy constructor called"<<endl;
	item_id=I.item_id;
	quantity=I.quantity;
	strcpy(item_label,I.item_label);
}


//get_id (getter)
int Item::get_id() const
{
	return item_id;
}


//getQty(getter)
int Item::getQty() const 
{
	return quantity;
}

//get item_label(getter)
char*Item::getItem_Label() 
{
	return item_label;
}

//setter 
void Item::set_id(int id)
{
	item_id=id;
}

//setter
void Item::setQty(int q)
{
	quantity=q;
}


//setter
void Item::setItem_Label(char label[])
{
	strcpy(item_label,label);
}


//Printing the output
void Item::printItem()
{
	cout<<get_id()<<endl;
	cout<<getQty()<<endl;
	cout<<getItem_Label()<<endl;
}

//Item Destructor
Item::~Item()
{
	//cout<<"Item Destructor was called"<<endl;
}
