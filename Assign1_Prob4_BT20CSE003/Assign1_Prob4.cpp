//Assignment 1 Problem 4
//Assign1_Prob4.cpp

#include<iostream>
#include<string.h>


using namespace std;

#include"Set.cpp"


int main()
{
   Set a,b;
  
   a.read();
   b.read();

   cout<<"Set a:";
   a.print(a);
   cout<<"Set b:";
   b.print(b);

   Set c;
   cout<<endl;
   c=c.UNION(a,b);
   if(a.get_size_of_set(a)==0 && b.get_size_of_set(b)==0)
   {
      cout<<endl;
      cout<<"\n No union formed!"<<endl;
   }
   else
   {
        cout<<endl;
        cout<<"Set c is:";
        c.print(c);

   }
 

   Set d;
   cout<<endl;
   d=d.INTERSECTION(a,b);
   if(d.get_size_of_set(d)==0)
   {
      cout<<endl;
      cout<<"No Intersection found"<<endl;
   }
   else
   {
      cout<<endl;
      cout<<"Intersection of Set a and b is:"<<endl;
      d.print(d);
   }

   cout<<endl;

   int x;
   cout<<" Enter the number to be checked if it is present in Set c or Set d!"<<endl;
   cin>>x;

   bool both=d.Belong(d,x);
   bool none=!(c.Belong(c,x));
   if(both)
   {
      cout<<x<<" is present in the intersection set d"<<endl;
   }
   else if(none)
   {
      cout<<x<<" is not in either set"<<endl;
   }
   else
   {
      cout<<x<<" is present in the union set c"<<endl;
   }


   return 0;
}


