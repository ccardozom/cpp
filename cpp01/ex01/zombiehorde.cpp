#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ){

    std::string aux;

    if (!name.compare(""))
        name = "default";
    if (N == 0)
        return (NULL);
    Zombie *ptr = new Zombie[N];
    if (!ptr)
        return (NULL);
    for(int i = 0; i < N; i++)
    {
        aux = name;
        aux.append(std::to_string(i));
        ptr[i].setName(aux);
        ptr[i].announce();
    }
    return (ptr);
}