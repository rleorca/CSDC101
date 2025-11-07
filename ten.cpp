#include <iostream>

using namespace std;

int product( int a, int b){

 return a*b;
 }
 
 int timesten( int c){
 return c * 18;
 }
 
 int main(){
 
 cout<< " product of 10 and 15 is " << product(100,150) << endl;
 cout<< " times ten is equal to " << timesten(product(100,150)) << endl;
    
    return 0;
}
