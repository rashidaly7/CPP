#include <iostream>
using namespace std;
int main (){
    for (int i = 0; i < 4; i++)
    {
        auto show = [i](){
            cout << "number:"<< i<< "\n";
        };
        show();
    }
    
    return 0;
    
}
