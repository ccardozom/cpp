#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *dir, int len, void (*f)(T)){
    for (int i=0; i < len; i++)
        f(dir[i]);
    std::cout << "\n";
}

template<typename T>
void printTarget(T target){
    std::cout << target << " ";
}
#endif