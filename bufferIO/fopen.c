#include <stdio.h>

int main()
{
  /* FILE *fopen(const char *path, const char*mode); */
  /* FILE *fd; */
  /* fd = fopen_s(fd, path, mode); */
  FILE *stream;

  stream = fopen("/etc/manifest","r");
  if (!stream) {
    /* ERROR CODE */
  }

  fclose(stream);
  /* fcloseall(); only on LINUX */
  
  return 0;
}
