#include <thread>
#include <iostream>
using namespace std;
void func(){
    cout << "hello world\n" ;
}

int main(){
    thread t(func);
    t.join();

}