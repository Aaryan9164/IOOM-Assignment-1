#include<iostream>
#include<string.h>
using namespace std;


#include"Traveler.cpp"
#include"Pager.cpp"
#include"BusinessTraveler.cpp"


int main()
{
	string str1,str2,str3;
	cout<<"Enter the string 1"<<endl;
	cin>>str1;
	cout<<"Enter the string 2"<<endl;
	cin>>str2;
	cout<<"Enter the string 3"<<endl;
	cin>>str3;
	
	Traveler A(str1);
	Pager B(str2);
	//BusinessTraveler();
	BusinessTraveler C(str3);
	BusinessTraveler D=C;
	A.displayTraveler();
	B.displayPager();
	C.displayBusinessTraveler();
	D.displayBusinessTraveler();
	cout<<endl;
	
	return 0;
	
}
