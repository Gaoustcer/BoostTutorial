#include <boost/signals2.hpp>
#include <iostream>
void connect(boost::signals2::signal<void()> &s){
    boost::signals2::scoped_connection c = s.connect([](){std::cout << "connect function\n";});
    s();
    return ;
}
using namespace std;
int main(){
    boost::signals2::signal<void()> s;
    {
        boost::signals2::scoped_connection c= s.connect([](){cout << "Hello world\n";});
        s();
    }
    s();
}