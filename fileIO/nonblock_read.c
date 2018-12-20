#include <unistd.h>

int main()
{
  char buf[BUFSIZ];
  ssize_t nr;

 start:
  nr = read(fd, buf, BUFSIZ);
  if (nr == -1){
    if (errno == EINTR) {
      goto start;
    }
    if (errno == EAGAIN) {
      /* TRY AGRAIN LATER */
    }
    else {
      /* ERROR CODE */
    }
  }
  return 0;
}
