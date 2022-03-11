//Assignment 1 Problem 4
//Set.cpp


#include<iostream>
#include<string.h>

using namespace std;


#include"Set.h"


//Set Default Constructor
Set::Set()
{
    //cout<<"Set Default Constructor Called"<<endl;
    for(int j=0;j<size;j++)
    {
	    set[j]=0;
    }
    size=size;
}

//Set Parameterized Constructor
// Set::Set(int a[],int n)
// {
//    int j=0;
//    for(j=0;j<n;j++)
//    {
//       set[j]=a[j];
//    }
//    size=n;
// }

//Set Copy Constructor
Set::Set(const Set & S)
{
   //cout<<"Set Copy Constructor called!"<<endl;
    size=S.size;
   for(int j=0;j<S.size;j++)
   {
      set[j]=S.set[j];
   }
}


//Taking input from the keyboard
void Set::read()
{
   int element;
   int j=0;
   int size_of_set;
   cout<<"\n Enter the size of the set and elements of the set "<<i++<<endl;
   cin>>size_of_set;
  
   while(j<size_of_set)
   {
      
      cout<<"Enter the element"<<endl;
      cin>>element;
      set[j]=element;
      j++;
   }
   size=size_of_set;

}


//Printing the set function
void Set::print(Set P)
{
   for(int j=0;j<P.size;j++)
   {
      cout<<P.set[j]<<" ";
   }
   cout<<endl;
}


//Union of set
Set Set::UNION(Set p1,Set p2)
{

   int j=0,k=0;
   Set new_union_set;
   new_union_set.size=p1.size+p2.size;
   for(j=0;j<p1.size;j++)
   {
      new_union_set.set[j]=p1.set[j];
   }
   int index=p1.size;
   int found=0;
   for(j=0;j<p2.size;j++)
   {
      found=0;
      for(k=0;k<p1.size;k++)
      {
         if(p2.set[j]==p1.set[k])
         {
            found=1;
            new_union_set.size--;
            break;
         }
      }
      if(found==0)
      {
        new_union_set.set[index++]=p2.set[j];
      
      }

   }
 

   return new_union_set;
}


//Intersection Of Set
Set Set::INTERSECTION(Set p1,Set p2)
{
   Set new_intersect_set;
   new_intersect_set.size=p1.size;
   int j=0,k=0,index=0;

   for(j=0;j<p1.size;j++)
   {
      int found=0;
      for(k=0;k<p2.size;k++)
      {
         if(p1.set[j]==p2.set[k])
         {
            new_intersect_set.set[index++]=p1.set[j];
            found=1;
         }
      }
      if(found==0)
      {
         new_intersect_set.size--;
      }

   }
   return new_intersect_set;
}

//get size function
int Set:: get_size_of_set(Set S)
{
   return S.size;
}

//Belong function
bool Set:: Belong(Set R, int n)
{
   int j=0;
   for(j=0;j<R.size;j++)
   {
         if(n==R.set[j])
         {
            return true;
         }
   }

   return false;
}


//Set destructor
Set::~Set()
{
   //cout<<"Set Destructor called!"<<endl;
}