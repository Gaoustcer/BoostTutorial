#include <boost/signals2/signal.hpp>
// #include <boost/optional/optional_io.hpp>
#include <iostream>
#include <typeinfo>
#include <vector>
#include <algorithm>
// using namespace std;
int symbol = 0;
int func(){
    symbol --;
    std::cout << symbol << std::endl;
    return symbol;
}
// class deal{
//     vector<int> operator(InputIter){

//     }
// };
template <typename T> 
struct min_element 
{ 
  typedef T result_type; 

  template <typename InputIterator> 
  T operator()(InputIterator first, InputIterator last) const 
  { 
    std::cout << "Call combination\n";
    std::cout << "start value is" <<  *first << std::endl;
    for(auto ptr = first;ptr != last;ptr++){
        std::cout << "value is " << *ptr << std::endl;
    }
    // std::cout << typeid(first).name() << std::endl;
    return T(first,last); 
  } 
};
int main(){
    boost::signals2::signal<int(),min_element<std::vector<int>>> s;
    s.connect(func);
    s.connect(func);
    // auto value = s();
    auto value = s();
    std::cout << value[0] << " " << value[1] << std::endl;
}