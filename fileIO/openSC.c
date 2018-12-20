#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
  int fd;

  /*flag O_WRONLY, O_TRUNC WRiteONLY, file exist and fileLength to 0
   in STACK or Terminal Device, IGNORE it and WRITE needed*/
  fd = open("/home/teach/pearl", O_WRONLY | O_TRUNC);
  if (fd == -1) {
    printf("ERROER");
  }
  return 0;
}
