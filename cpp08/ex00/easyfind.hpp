#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>

template<typename T>
typename T::iterator easyfind(T &container, int to_find){
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), to_find);
    if (it == container.end())
        throw std::exception();
    return it;
}

#endif