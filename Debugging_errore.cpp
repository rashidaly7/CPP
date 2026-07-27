#include <iostream>
using namespace std;
int main (){
    int x = 10;
int y = 0;
cout << "Before division\n"; // Debug output
int z = x / y; // Crashes!
cout << "After division\n"; // Never runs
return 0;
}
// error: expected ';' before 'return'
