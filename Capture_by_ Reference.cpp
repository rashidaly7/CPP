#include <iostream>
using namespace std;
int main(){
    int x = 10;
    auto number = [&x] (){
        cout << x;
    };
    x = 20;
    number();
    return 0;
}

