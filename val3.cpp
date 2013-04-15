#include <iostream>
 using namespace std;
 int main(void)
 {
   //check check
   int whatareudoingcloud9 = 0009993;
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
   while(indx > size || indx < 0);
   //here is a changed that I made
   //lets see if you get this change
   cout<< "The value at position " << indx <<"\n";
   cout<<"is: "<<  vals[indx];

   cin>>stop;
   return 0;
 }
