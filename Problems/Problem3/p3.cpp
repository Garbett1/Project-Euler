#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> primesTo(long n)
{
  int limit = sqrt(n);
  std::cout << limit << "\n";
  std::vector<int> primes;
  primes.push_back(2);
  for(int i = 3; i < limit; i+=2)
  {
    bool flag = true;
    for(auto x: primes)
    {
      if(i%x == 0)
      {
        flag = false;
        break;
      }
    }
    if(flag)
    {
      primes.push_back(i);
    }

  }
  return primes;
}

int highestDivisor(std::vector<int> primes, long n)
{
  int last = 1;
  for ( auto x : primes)
  {
    while(n%x== 0)
    {
      n = n/x;
      last = x;
    }
  }
  return last;
}

int main()
{
  std::cout << highestDivisor(primesTo(600851475143),600851475143) << "\n";

}
