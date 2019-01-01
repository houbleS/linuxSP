#include <mman.h>

int main()
{
 /*  int mprotect(const void *addr, size_t len, int prot); */
 /*  int msync(void *addr, size_t len, int flags); */
 /*  ex) if (msync(addr, len, MS_ASYNC) { */
 /*      perror("msync"); */
 /* } */
 /*    int madvise(void *addr, size_t len, int advice); */
 /*    the advice : MADV_NORMAL, MADV_RANDOM, MADV_WILLNEED, MADV_DONTNEED */

  int ret;

  ret = madvise(addr, len, MADV_SEQUENTIAL);
  if (ret < 0) {
    perror("madvise");
  }
  
  return 0;
}
