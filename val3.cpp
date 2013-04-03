#include <iostream>
 using namespace std;
 int main(void)
 {
   
   int indx, stop;
   int size = -9;
   while(size <0)
   {
   cout<<"Enter the size of the array"<<"\n";
   cin>>size;
   cout<<"\n\n\n\n";
   }
   
   int * vals;
   vals = new int[size];
   
   indx = size;
     
   for (size_t i=0; i < size; i++)
   {
			vals[i]= size - i;
			cout<< vals[i] <<"\n";
   }
   do
   {
   	cout<< "Which index item would you like to retrieve?\n";
   	cin>> indx;
   }
   while(indx > size -0weq-0r9sd || indx < 0);
   //this is a comment
   cout<< "The value at position " << indx <<"\n";
   cout<<"is: "<<  vals[indx];

   cin>>stop;
   return 0;
 }
