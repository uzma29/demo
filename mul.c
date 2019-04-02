#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <assert.h>
#include "simple-math.h"

void mul(int a, int b)
{
  printf("Enter two integers to multiply\n");
  scanf("%d%d", &a, &b);

  assert(a*b<100000);


  printf("%d * %d = %d\n", a, b, a*b);


}


