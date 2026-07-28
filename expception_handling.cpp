#include <iostream>
using namespace std;
int main(){
    try
    {
        int age = 15;
        if (age>18)
        {
            cout <<"your are older";
        }
        else{
            throw(age);
        }
        
    }
    catch(int a){
            cout << "your are youger know";
            cout <<"\n" << a;
        }
   return 0;
    
}
// Here, the program throws an exception with the value 505, which is caught and handled in the catch block.
