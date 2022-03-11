//Stack.h
//IOOM Assignment 1 Problem 1 and 2
//Declaration of class Stack

#define SIZE 10

//#include<iostream>
//#include<string.h>

//using namespace std;

#ifndef STACK_H
#define STACK_H

#include"Item.h"


class Stack{

	private:
		int top;
		int size;
		Item e[SIZE];
	public:
		Stack();//Default Constructor
		Stack(int n);//Parametrized Constructor;
		Stack(const Stack &S);//Copy Constructor
		~Stack();//Destructor
		bool push(Item x);
		Item peek();
		Item pop();
		bool isEmpty();
		int get_size();//returns size of stack
		int get_top();//returns top(index) of the stack
		void display(Stack &s);
};

#endif
	
