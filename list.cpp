#include <iostream>
/*Unlike vectors, a list does not support random access,
meaning you cannot directly jump to a specific index,
or access elements by index numbers.*/
#include <list>
using namespace std;
int main(){
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Change the value of the first element
cars.front() = "Opel";

// Change the value of the last element
cars.back() = "Toyota";

for (string car : cars) {
    // cout << car << "\n";
  }

// cout << cars.front(); // Now outputs Opel instead of Volvo
// cout << cars.back();  // Now outputs Toyota instead of Mazda

// Add an element at the beginning
cars.push_front("Tesla");

// Add an element at the end
cars.push_back("VW");
 for (string car : cars) {
    // cout << car << "\n";
  }

  // Remove the first element
cars.pop_front();

// Remove the last element
cars.pop_back();

// Loop Through a List

// you can write like this then give that errore
// for (int i = 0; i < cars.size(); i++)
// {
//     cout << cars[i] <<"\n";
// }

// right way is like this
for(string car: cars){
    cout << car << "\n";
}

    return 0;
}
