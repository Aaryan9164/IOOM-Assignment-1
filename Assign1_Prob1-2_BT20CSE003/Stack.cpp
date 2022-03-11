//Stack.cpp
//IOOM Assignment 1 Problem 1 and 2
//Definition of data members and member functions of class Stack

#include<iostream>
#include<string.h>

using namespace std;

#include"Stack.h"


//Stack Default constructor
Stack::Stack()
{
	//cout<<"Stack Default constructor called"<<endl;
	top=-1;
	size=0;
}

//Parameterized Constructor
Stack::Stack(int n)
{
	//cout<<"Stack Parameterized constructor called"<<endl;
	top=-1;
	size=n;
}

//Copy Constructor
Stack::Stack(const Stack &S)
{
	cout<<"Stack Copy Constructor Called"<<endl;
	top=S.top;
	size=S.size;
	for(int i=0;i<size;i++)
	{
		e[i]=S.e[i];
	}
}


//Push operation
bool Stack::push(Item x)
{
	if(top==(size-1))
	{
		cout<<"STACK OVERFLOW!CANT PUSH!!"<<endl;
		return false;
	}
	else
	{
		e[++top]=x;
		cout<<endl<<x.get_id()<<","<<x.getQty()<<","<<x.getItem_Label()<<" "<<"pushed into the stack"<<endl;
		return true;
	}
}


//Get size
int Stack::get_size()
{
	return size;
}


//Get top index
int Stack::get_top()
{
	return top;
}


//Find the top element
Item Stack::peek()
{
	if(top<0)
	{
		cout<<"Stack is empty!"<<endl;
		Item x;
		x.set_id(-1);
		x.setQty(-1);
		char temp[10]="";
		x.setItem_Label(temp);
		return x;
	}
	else
	{
		Item x=e[top];
		return x;
	}
}



//Pop operation
Item Stack::pop()
{
	if(top<0)
	{
		cout<<"STACK UNDERFLOW!Cant Delete further!"<<endl;
		Item x;
		x.set_id(-1);
		x.setQty(-1);
		char temp[10]="";
		x.setItem_Label(temp);
		return x;
	}
	else
	{
		Item x=e[top--];
		cout<<"The element is popped!"<<endl;
		return x;
	}
}

//Checking if stack is empty
bool Stack::isEmpty()
{
	if(top<0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//Displaying the stack
void Stack:: display(Stack &s)
{	
	cout<<"STACK"<<endl;
	if(s.top!=-1)
	{
		for(int i=s.top;i>=0;i--)
		{
			Item t=s.e[i];
			t.printItem();
			cout<<"----------"<<endl;
		}
	}
	else
	{
		cout<<"Stack is Empty"<<endl;
	}
}

//Sorting the stack
void SortStack(Stack &s)
{
	int n;
	cout<<"Enter the size of he temporary stack"<<endl;
	cin>>n;
	Stack tempstack(n);
	
	Item temp;
	while(!s.isEmpty())
	{
		//popping the first element
		 temp=s.peek();
		//temp.printItem();
		s.pop();
		tempstack.push(temp);

		//while temporary stack is not empty and top of stack is 
		//greater than tempstack
		while(!tempstack.isEmpty() && tempstack.peek().getQty() > temp.getQty())
		{
			Item t=tempstack.peek();
			tempstack.pop();
			tempstack.push(temp);
			s.push(t);
		}
	}
	cout<<"The Stack has been sorted!"<<endl;
	tempstack.display(tempstack);
	
}		


//Deleting the middle Element
void deleteMiddleElement(Stack &s)
{
	
	if(s.isEmpty())
	{
		cout<<"\n The stack is empty! Cant delete the middle element"<<endl;
	}
	else
	{
		int middle=s.get_size()/2;
		int tmpstacksize;
		cout<<"\n Enter the size of the temporary stack"<<endl;
		cin>>tmpstacksize;
		Stack tmpstack(tmpstacksize);
		Item t=s.peek();
		s.pop();
		tmpstack.push(t);

		while(!tmpstack.isEmpty() && s.get_top()!=middle && !s.isEmpty())
		{
			t=s.peek();
			s.pop();
			tmpstack.push(t);
		}

		if(!s.isEmpty() && s.get_top()==middle)
		{
			s.pop();
		}
		while(!tmpstack.isEmpty())
		{
			Item T=tmpstack.peek();
			tmpstack.pop();
			s.push(T);
		}

		cout<<"THE MIDDLE ELEMENT HAS BEEN DELETED!"<<endl;


	}
	
}
	

//Stack Destructor
Stack::~Stack()
{
	//cout<<"Stack Destructor called"<<endl;
}


