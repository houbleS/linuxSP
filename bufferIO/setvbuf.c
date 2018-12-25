#include <stdio.h>

int main()
{
  /* int setvbuf(FILE *stream, char *buf, int mode, size_t size); */

  char buf[BUFSIZ];

  setvbuf(stdout, buf, _IOFBF, BUFSIZ);
  /* process the setvbuf before any operations when open the stream*/
  printf("Arrr!, BUFSIZ: %d \n", BUFSIZ);

  fclose(stdout);
  /* fclose stream before shut buf */

  /* in setvbuf, mode : _IONBF, _IOLBF, _IOFBF (Buffer no use, Buffer using Line, Buffer using Full(== Block)) */
  return 0;
}
