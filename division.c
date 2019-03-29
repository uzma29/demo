#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <assert.h>
#include "simple-math.h"

void division(int a, int b)
{
  printf("Input two integers to divide\n");
  scanf("%d%d", &a, &b);

  assert(b != 0);
  printf("%d/%d = %.2f\n", a, b, a/(float)b);

}


