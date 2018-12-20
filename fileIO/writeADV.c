#include <unistd.h>

int main()
{
  unsigned long word = 1720;
  size_t count;
  ssize_t nr;

  count = sizeof(word);
  nr = write(fd, &word, count);
  if (nr == -1) {
    /* CHECK the ERRNO */
  }
  else if (nr != count) {
    /* maybe ERROR, not sat ERRNO */
  }
  return 0;
}
