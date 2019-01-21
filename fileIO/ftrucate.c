#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
  /* int ftruncate(int fd, off_t len); opperate on fd writing mode */
  /* int truncate(const char *path, off_t len); file path Writing Authentication

  two CASE, its file length is "len" */

  int ret;
  ret = truncate("./pirate.txt", 45);
  if (ret == -1) {
    perror("truncate");
    return -1;
  }
  printf("Pirate ftrucated!\n");
  /*
    Edward Teach was a notorious English pirate.
    He was nicknamed Blackbeard
    
    to 

    Edward Teach was a notorious English pirate.
   */
  
  return 0;
}
