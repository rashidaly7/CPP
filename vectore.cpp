#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> list = {"rashid ali", "ayan", "caimran"};
    // Change the value of the first element
    list[0] = "rashid";
    // cout << list[0] << "\n";

    // which will add an element at the end of the vector:
    list.push_back("tausif");
    for(string item: list)
    {
        // cout << item << "\n";
    }

    // which removes an element from the end of the vector:
    list.pop_back();

    // how many elements a vector has
    list.size();

    // There is also a function to find out whether a vector is empty or not.
    list.empty(); //yes output: 1 , no output: 0

    // using loop with size element
    for (int i = 0; i < list.size(); i++) {
    cout << list[i] << "\n";
    }
    return 0;
}

