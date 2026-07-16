#include <iostream>
#include <functional>
using namespace std;
void myfunction(function<void()> fun){
    fun();
    fun();
}
int main (){
    auto message = [](){
        cout << "hello wolrd\n";
    };
    myfunction(message);
    return 0;
}
