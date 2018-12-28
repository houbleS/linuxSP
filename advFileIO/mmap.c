#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

int main()
{
  /* void mmnp(void *adrr, size_t len, int prot, int flags, int fd, off_t offset); return Address not addr. 
   prot :
       PROT_NONE, PROT_READ, PROT_WRITE, PROT_EXEC
   flags :
       MAP_FIXED, MAP_PRIVATE, MAP_SHARED ( NO use MAP_PRIVATE with MAP_SHARED )
   */
  /* long sysconf(int name); */
  /* int getpagesize(void); */
  int munmap(void *addr, size_t len);
  
  void *p;
  int len = 8192;
  int fd = open("buccaneer.txt", O_RDONLY);
  
  p = mmap(0, len, PROT_READ, MAP_SHARED, fd, 0);
  if (p == MAP_FAILED) {
    perror("mmap");
    return 1;
  }

  long page_size = sysconf(_SC_PAGESIZE)/* BEST USING */;
  int pageSize = getpagesize(); /* no USING */

  if (munmap(p, len) == -1) {
    perror("munmap");
  }
  
  return 0;
}
