#include <unistd.h>

int main()
{
  ssize_t ret,nr;

  while (len != 0 && (ret = write(fd, buf, len) != 0) {
      if (ret == -1) {
	if (errno == EINTR) {
	  continue;
	}
	perror("write");
	break;
      }

      len -= ret;
      buf += ret;
  }
  return 0;
}
