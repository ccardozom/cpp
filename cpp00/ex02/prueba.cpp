#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>
 
int main ()
{
  time_t rawtime;
  char buffer [36];

  rawtime = time(0);

  strftime (buffer,36,"Now it's [%Y%m%d_%H%M%S] ",localtime (&rawtime));
  std::cout << buffer ;
  puts (buffer);

  return 0;
}