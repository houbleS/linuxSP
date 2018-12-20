#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
  int fd;

  fd = creat(filename, 0644);
  /*fd = open(filename,O_WRONLY, O_CREAT, O_TRUNC, 0644);*/
  if (fd == -1) {
    /* ERROR Code */
  }
  return 0;
}
