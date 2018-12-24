#include <stdio.h>

int main()
{
  /* int fgetc(FILE *stream) */

  int c;
  FILE *stream;
  stream = fopen("/etc/manifest","r");
  
  c = fgetc(stream);
  if (c == EOF) {
    /* ERROR CODE */
  }
  else {
    printf("c= %c\n", (char)c);
  }

  fclose(stream);
  /* char* fgets(char *str, int size, FILE *stream); */

  char *s;
  int c = 1024 ;

  stream = fopen("/etc/manifest", "r");
  fgets(s, c, stream);

  fclose(stream);

  /* binary data reading  */
  /* size_t fread(void *buf, size_t size, size_t nr, FILE *stream); retrurn nr */

  char buf[64];
  size_t nr;

  nr = fread(buf, sizeof(buf), 1, stream);
  if (nr == 0) {
    /* ERROR CODE */
  }
  return 0;
}
