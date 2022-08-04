#include <iostream>
// #include <boost/signals2/signal.hpp>
#include <boost/signals2.hpp>

using namespace std;
using namespace boost::signals2;
void func(){
    cout << "Hello world\n";
}
void func2(){
    cout << "hello \n";
}
int main(){
    signal<void()> pointer;
    connection c = pointer.connect(func);
    pointer();
    shared_connection_block b(c);
    pointer();
    b.unblock();
}