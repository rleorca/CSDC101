#include <iostream>
#include <cctype>

using namespace std;

int main(){
    
    char sample = 's';
    
    cout << " before toupper " << sample << endl;
    sample = toupper(sample);
    cout << " after to upper " << sample << endl;
    return 0;
}
