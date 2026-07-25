#include <iostream>
using namespace std;
class myclass{
    public:
    void myFuntion(){
        cout << "some contect in parent class\n";
    }
};
class otherclass{
    public:
    void otherFuntion(){
        cout << "some contect in other class";
    }
    
};
class parent: public myclass , public otherclass{

};
int main (){
    parent myOjc;
    myOjc.myFuntion();
    myOjc.otherFuntion();
    return 0;
}
