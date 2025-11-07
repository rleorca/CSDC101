#include <iostream>
#include <cmath>// library for time function
#include <cstdlib>

using namespace std;

int main(){
    
    srand( time(0) );
    cout<< " the random number in the dice with SRAND is " << (rand() % 6) + 1 << endl;
    
    return 0;
}
