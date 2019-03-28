#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "simple_header.h"
void test_max(void)
{
  printf ("Test max using assert:      ");
  assert (max(13,14)==14);
  assert (max(14,13)==14);
  /* assert (max(INT_MAX,14)==INT_MAX); */
  /* asserax(INT_MAX,INT_MIN)==INT_MAX); */
  /* assert (max(-23000,INt (mT_MIN)==-23000); */
  printf (" OK\n");
}
