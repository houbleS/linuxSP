#include <stdio.h>

int main()
{
  /* int ferror(FILE *stream); */
  /* int feof(FILE *stream); */
  FILE *stream = fopen("file", "r");

  if (ferror(stream)) {
    /* ERROR CODE */
  }

  if (feof(stream)) {
    /* ERROR CODE */
  }

  clearerr(stream);
  
  return 0;
}
