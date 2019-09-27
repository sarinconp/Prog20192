#include <iostream>

template <typename T>
T max(T a, T b)
{
  T result = 0;
  if ( a >= b ) {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}

int main(void)
{
  std::cout << max(-3.2, -3.5) << "\n";
  std::cout << max(2, -5) << "\n";
  //std::cout << max(1.1, -7) << "\n"; // error, no hay funcion sobre cargada para esta combinacion
  
  return 0;
}

