#include<iostream>
using namespace std;

int main(){

int number, choice;

do{

cout<<"enter a number: ";
cin>> number;

for(int i = 1; i <= 10; i++){
cout<< i << number <<" = "<< i*number<<endl;
}

cout<<"do you want to try another number? (1-yes, 0-no):";
cin>> choice;
cout<< endl;
}
while(choice == 1);

cout<< " thank you for using the program"<< endl;

return 0;
}
