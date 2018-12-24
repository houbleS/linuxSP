#include <stdio.h>

int main()
{
  /* int putc(int c, FILE *stream); */
  FILE *stream;
  stream = fopen("/etc/manifest", "w");
  if (fputc('p', stream) == EOF ){
    /* ERROR CODE */
  }
  fclose(stream);
  
  /* int fputs(const char *str, FILE *stream); */
  stream = fopen("journal.txt", "w");
  if (!stream) {
    /* ERROR CODE */
  }

  if(fputc("The ship is made of wood.\n", stream) == EOF){
    /* ERROR CODE */
  }

  if (fclose(stream) == EOF) {
    /* ERROR CODE */
  }

  /*binary data write*/
  /* size_t fwrite(void *buf, size_t size, size_t nr, FILE *stream); */
  
  
  return 0;
}
