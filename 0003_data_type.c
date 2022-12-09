#include <stdio.h>

int main() {
  unsigned int franzjosef = -2000000000;
  int hans;
  
  hans = 1337;
  
  int doerte = franzjosef + hans;
  
  /*
  If %d is called in the print argument, it will handle franzjosef as an integer and return -1999998663.
  Changing this to %u (which stands for unsigned integer) will give aresult of 2294968633.
  
  */
  printf("franzjosef + hans = %d\n", doerte);
  
  return 0;
  
}
