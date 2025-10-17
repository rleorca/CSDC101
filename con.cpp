#include<iostream>
using namespace std;

int main(){

int choice, consent;
float value, result;

cout<<"=== Pressure Unit Converter ==="<<endl;
cout<<"1. Pascal to Bar "<<endl;
cout<<"2. Pascal to PSI "<<endl;
cout<<"3. Bar to Pascal "<<endl;
cout<<"4. PSI to Pascal "<<endl;
cout<<"5. Exit "<<endl;
cout<<"1. Choose an option: "<<endl;

switch(choice){

case '1'://pascal to bar
cout<<" Enter the Value in pascal: ";
cin>>value;
result = value / 100000;
cout<< "result: " << result << " bar "<<endl;
break;
