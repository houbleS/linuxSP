#include <unistd.h>

int main()
{
  /* int fsync(int fd); */
  /* int fdatasync(int fd); only data writing */
  if (fsync(fd) == -1) {
    if (errno == EINVAL) {
      if (fdatasync(fd) == -1) {
	perror("fdatasync");
      } else {
	perror("fsync");
      }
    }
  }
  return 0;
}
