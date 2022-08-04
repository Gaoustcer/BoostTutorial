#include <iostream>
#include <boost/signals2/signal.hpp>
#include <boost/bind.hpp>
using namespace std;
class call:public boost::signals2::trackable{
public:
    int * s;
    void print(){
        // s = new int(10);
        cout << "Hello world\n" << *s << endl;
    }
    // ~call(){
    //     delete s;
    // }
};
void print(){
    cout << "Print result\n";
}
int main(){
    boost::signals2::signal<void()> s;
    {
        call *inst = new call;
        s.connect(print);
        s.connect(boost::bind(&call::print,inst));
        delete inst;
    }
    s();
}