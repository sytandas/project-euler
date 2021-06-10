#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define Num 1000000

using namespace std;

unsigned long long pri(unsigned int x){
  unsigned long long result = 0;

  while (x > 0){

    auto digit = x % 10;
    x /= 10;

    unsigned long long pos = 1;
    for (unsigned int i = 1; i <= digit; i++)
      pos *= 10;
      result += pos;
    }
    return result;
  }

int main(void){
  
  unsigned int maxNum = 1000000;
  unsigned int maxMulti = 6;
  cin >> maxNum >> maxMulti;

  for (unsigned int i = 1; i <= maxNum; i++){
    auto id = pri(i);
    bool found = true;
    for (unsigned int multi = 2; multi <= maxMulti; multi++)
      if (id != pri(i * multi)){
        found = false;
        break;
      }
if (found)
{
#ifdef ORIGINAL
  cout << i << "\n";
  return 0;
#endif
  for (unsigned int multi = 1; multi <=maxMulti; multi++)
    cout << (i * multi) << " ";
    cout << "\n";
}
}
return 0;
}

