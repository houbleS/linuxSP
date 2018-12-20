#include <sys/types.h>
#include <unistd.h>

int main()
{
  /* off_t lseek(int fd, off_t pos, int origin); */
  int pos;
  off_t ret;

  ret = lseek(fd, (off_t)1825, SEEK_SET);

  /* in this, 1825(off_t pos) is file-offset */

  pos = lseek(fd, 0, SEEK_CUR);
  if (pos == (off_t)-1) {
    /* ERROR CODE */
  }
  else {
    /* 'pos' is fd's current file-offset */
  }
  
  if (ret == (off_t) -1){
    /* ERROR CODE */
  }
  
  return 0;
}
