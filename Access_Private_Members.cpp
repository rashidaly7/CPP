#include <iostream>
using namespace std;
class employee{
    private:
    int salary;
    public:
    void setsalary(int x){
        salary = x;
    }
    int getsalary(){
        return salary;
    }

};
int main(){
    employee myojc;
    myojc.setsalary(5000);
    cout << myojc.getsalary();
    return 0;
}
