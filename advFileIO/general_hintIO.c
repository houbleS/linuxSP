#include <fcntl.h>

int main()
{
  int posix_fadvise(int fd, off_t offset, off_t len, int advice);
  if (off_t len == 0){
    [offset, file_length]
  }
 advice:
  POSIX_FADV_WILLNEED - file reading pull into page cache;
  POSIX_FADV_DONTNEED - in page cache, given file be deleted;
  POSIX_FADV_SEQUENTIAL - when entire file reading;
  POSIX_FADV_RANDOM - NO unuseful prereading;
  
  int ret;

  ret = posix_fadvise(fd, 0, 0, POSIX_FADV_RANDOM);
  if (ret == -1) {
    perror("posix_fadvise");
  }

  ssize_t readahead(int fd, off64_t offset, size_t count);
  
  return 0;
}
