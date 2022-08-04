#include <iostream>
#include <boost/algorithm/string.hpp>
#include <vector>
using namespace std;

int main(){
    string str = "hello world";
    string str2 = "Messi";
    vector<string> v;
    v.push_back(str);
    v.push_back(str2);
    cout << boost::algorithm::join(v," ") << endl;
    cout << boost::algorithm::to_upper_copy(str) << endl; 
    cout << boost::algorithm::replace_first_copy(str,"o","i") << endl;
    cout << boost::algorithm::erase_head_copy(str,2) << endl;
    boost::iterator_range<std::string::iterator> r = boost::algorithm::find_first(str,"hello");
    cout << r << endl;
}