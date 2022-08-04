#include <iostream>
#include <boost/smart_ptr.hpp>
using namespace std;
int main(){
    boost::shared_ptr<int> ptr(new int);
    boost::shared_ptr<int> anotherptr = ptr;
    cout << anotherptr.use_count() << endl;
}