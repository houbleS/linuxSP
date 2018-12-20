#include <unistd.h>

int main()
{
  unsigned long word;
  ssize_t nr;

  /* in 'fd',read some bytes and store on 'word'  */
  nr = read(fd, &word, sizeof(unsigned long));
  if (nr == -1) {
    /* ERRORCODE */
  }
  return 0;
}
