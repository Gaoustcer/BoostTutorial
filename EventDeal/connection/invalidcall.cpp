#include <boost/signals2.hpp>
#include <iostream>
using namespace std;
class call{
public:
    int * ptr;
    call(int value){
        ptr = new int;
        *ptr = value;
    }
    
    
    call operator(){
        cout << "Value is " << *ptr << endl;
        return *this;
    }
    ~call(){
        delete ptr;
        ptr = nullptr;
    }
};
int main(){
    call inst(10);
    inst();
}