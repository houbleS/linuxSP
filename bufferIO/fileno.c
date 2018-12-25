#include <stdio.h>

int main()
{
  /* int fileno(FILE *stream); */
  
  FILE *stream = fopen("data", "r");

  fileno(stream);
  return 0;
}
