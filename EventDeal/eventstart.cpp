// #include <boost/signal.hpp>
#include <boost/signals2.hpp>
// #include <boost/signals2/signal.hpp>
#include <iostream>
using namespace std;
void func(){
    cout << "Hello world" << endl;
}
int main(){
    // boost::signal<void()> s;
    boost::signals2::signal<void()> s;
    s.connect(func);
    s.connect(func);
    s();
}