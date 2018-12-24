#include <stdio.h>

int main()
{
  /* int fseek(FILE *stream, long offset, int whence); 
     whence : SEEK_SET, SEEK_CUR, SEEK_END
   */
  /* int fsetpos(FILE *stream, fpos_t *pos);
      == fseek(FILE *stream, long offset, SEE_SET);
   */

  /* void rewind(FILE *stream); */
  /* from CUR to START */

  int errno = 0;
  FILE *stream;

  stream = fopen("data", "r");
  
  rewind(stream);
  
  if (errno) {
    /* ERROR CODE */
    /* after rewind, check if errno is 0*/
  }

  /* long ftell(FILE *stream); present current stream position */
  /* int fgetpos(FILE *stream, fpos_t *pos); flexiable  */
  
  
  return 0;
}
