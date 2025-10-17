#include<iostream>
using namespace std;

int main(){
    //314159265
   int number, reverse = 0, digit;
   
   cout<<"Enter a number: ";
   cin>>number;
   
   while(number !=0){
       digit = number % 10; 
       reverse = reverse *10 + digit;
       number = number / 10;
   }
   
   cout<<"reversed"<< reverse << endl;
   return 0;
}   
   
