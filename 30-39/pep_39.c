#include <stdio.h>
#define S 1000
int main(void){
  unsigned a, b, c, perimeter;
  unsigned count, max = 0, max_perimeter = 0;

  for(perimeter = 1; perimeter <= S; perimeter++){
    count = 0;
    for (a = 1; a <= perimeter/2; a++){
      for(b = a; b <= perimeter/2; b++){
        c = perimeter - a - b;
        if( a*a + b*b == c*c){
          count++;
        }
      }
    }
    if (count > max){
      max = count;
      max_perimeter = perimeter;
    }
  }
  printf("%u\n", max_perimeter);

  return 0;
}
