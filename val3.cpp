#include <iostream>
 using namespace std;
 int main(void){
   int indx, stop;
   int size = -9;
   int * vals;

   //Checks size of aray.	 
   while(size <0)
   {
       cout<<"Enter the size of the array"<<"\n";
       cin>>size;
       cout<<"\n\n\n\n";
   }


    
   //Initalizes array to user inputted size. 
   vals = new int[size];
   
   indx = size;

   //Assigns the array values descending from size down to zero for the last position. I'm not certain why I used size_t here, but I haven't used C++ in a long time. It seems obvious that this would be better with an int data type.  
   for (size_t i = 0; i < size; i++)
   {
        vals[i] = size - i;
	cout<< vals[i] <<"\n";
   }

   //Prints the value at an index. 	 
   do
   {
   	cout<< "Which index item would you like to retrieve?\n";
   	cin>> indx;
   }
   while(indx > size || indx < 0);
   cout<< "The value at position " << indx <<"\n";
   cout<<"is: "<<  vals[indx];

   cin>>stop;
   return 0;
 }
