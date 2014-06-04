#include <iostream>
using namespace std;
int tnf()
{
  int ret = 0;
  for(int i = 1; i <= 999;i++)
  {
    if(i%3 == 0 || i%5 == 0)
    {
      ret +=i;
    }
  }
  return ret;
}

int main()
{
  cout << "threes and fives= " << tnf()<< "\n";
}
