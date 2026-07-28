#include <iostream>
using namespace std;
int main(){
    int number;
    do
    {
        cout << "Enter a number 1 to 5: ";
        cin >> number;
    }while (number<1||number>5);
    cout << "\nYou chose: " << number;
}
