#include <iostream>
#include <boost/signals2/signal.hpp>
#include <boost/function.hpp>
#include <ctime>

#define N 1024 * 1024
using namespace std;
int main(){
    int index = 0;
    boost::signals2::signal<int()> sig;
    boost::function<int()> fun1,fun2;
    fun1 = [&](){
        index ++;
        return index;
    };
    fun2 = [&](){
        index ++;
        return index;
    };
    sig.connect([&](){
        index++;
        return index;
    });
    int start,end;
    sig.connect([&](){
        index++;
        return index;
    });
    start = clock();
    for(int i = 0;i < N;i++){
        // sig();
        fun1();
        fun2();
    }
    end = clock();
    cout << "Time is " << end - start << " result is " << index;
}