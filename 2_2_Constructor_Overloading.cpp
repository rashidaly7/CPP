#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    student(){
        name = "rashid ali";
        roll_no = 1;
    }
    student(string x, int y){
        name = x;
        roll_no = y;
    }
};
int main(){
    student myojc1;
    student myojc2("caimran", 2);
    student myojc3("ayan", 3);
    cout << myojc1.name <<"  " << myojc1.roll_no << "\n";
    cout << myojc2.name <<"  " << myojc2.roll_no << "\n";
    cout << myojc3.name <<"  " << myojc3.roll_no << "\n";
    return 0;
}
