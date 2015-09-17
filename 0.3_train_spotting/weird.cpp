#include <iostream>

int powerof (int x, int y) {
  int res = 1;
  std::clog << "x = " << x << "y = " << &y << std::endl;
  for (int i = 0; i < y; ++i)
    res *= x;
  //std::clog << "i = " << i << std::endl;
  std::clog << "res = " << &res << std::endl;
  return res;
}

int main () {
  int const a = 2;
  int const b = 4;

  int   x = powerof(a, b); 
  float y = 3.1415;

  std::cout << a << "^" << b << " = " << x << ";\n";

  if (y == 3.1415f)
    std::cout << y << " is equal to 3.1415!\n";
  else
    std::cout << y << " is not equal to 3.1415!\n";
}
