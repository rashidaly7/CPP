#include <iostream>
using namespace std;
class animal{
    public:
    void animal_sound(){
        cout << "animal sound like this\n";
    }
};
class dog: public animal{
    public:
    void animal_sound(){
        cout << "dog say: bao bao\n";
    }
};
class woolf: public animal{
    public:
    void animal_sound(){
        cout << "woolf say: aauuuuuu\n";
    }
};
int main (){
    animal myanime;
    dog mydog;
    woolf mywoolf;
    myanime.animal_sound();
    mydog.animal_sound();
    mywoolf.animal_sound();
    return 0;
}
