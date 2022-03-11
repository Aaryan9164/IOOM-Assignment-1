//IOOM Assignment 1 Problem 1 and 2
//Assign1_Prob1.cpp

#include<iostream>
#include<string.h>

using namespace std;

#include"Item.cpp"
#include"Stack.cpp"

int main()
{
	int id,quantity;
	string cont;
	char label_item[10];
	int num;
	Item item;
	int val;
	cout<<"Enter the size of the stack"<<endl;
	cin>>val;
	Stack s(val);
	int i=0,current=0;

	int choice;
	do{
		cout<<"Enter your choice, 1-push, 2-pop, 3-empty , 4-display, 5-sort the Stack, 6-Delete the middle Element"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter id,quantity and label_item"<<endl;
				cin>>id>>quantity>>label_item;
				char str[10];
				strcpy(str,label_item);
				cout<<endl;
				char st[10];
				strcpy(st,str);
				item.setItem_Label(st);
				item.set_id(id);
				item.setQty(quantity);
				s.push(item);
				break;
				
				
			case 2:
				s.pop();
				break;
				
			case 3:
				if(s.isEmpty()==true)
				{
					cout<<"Stack is Empty"<<endl;
				}
				else
				{
					cout<<"\n Stack is not empty"<<endl;
				}
				break;
			
			case 4:
				cout<<"-----"<<endl;
				s.display(s);
				break;
				
			case 5:
				SortStack(s);
				break;
			
			case 6:
				deleteMiddleElement(s);
				break;
			
			
			default:
				cout<<"Invalid Choice"<<endl;
				
		}
		cout<<"Do you want to continue?(yes/no)"<<endl;
		cin>>cont;
	}while(cont=="yes"||cont=="Yes");
}
	
