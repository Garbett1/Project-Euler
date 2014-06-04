#include <iostream>

int fib()
{
  int base1 = 1;
  int base2 = 1;
  int n = 0;
  int ret = 0;
  while( n < 4000000)
  {
    n = base1+base2;
    base2 = base1;
    base1 = n;
    if(n%2 == 0)
    {
      ret+=n;
    }
  }
  return ret;
}

int main(){

  std::cout <<fib()<< "\n";
}
