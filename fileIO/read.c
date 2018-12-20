#include <unistd.h>

int main()
{
  unsigned long word;
  ssize_t nr;
  ssize_t ret;

  /* in 'fd',read some bytes and store on 'word'  */
  nr = read(fd, &word, sizeof(unsigned long));
  if (nr == -1) {
    /* ERRORCODE */
  }

  while (len != 0 && (ret = read(fd, buf, len) !=0 ) {
      if (ret == -1) {
	if (errno == EINTR) {
	  continue;
	}
	perror("read");
	break;
      }
  }
  return 0;
}
