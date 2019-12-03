#include <limits.h>
#include <stdlib.h>
#include <float.h>


int main()
{
  int a;
  float b;
  double c;
  char d;
  long int f;

  printf("size of int: %d bytes\n",sizeof(a));
  printf("size of float: % bytes\n",sizeof(b));
  printf("size of double: %d bytes\n",sizeof(c));
  printf("size of unsigned char: %d bytes\n",sizeof(d));
  printf("size of long int: %d bytes\n",sizeof(f));

  }
