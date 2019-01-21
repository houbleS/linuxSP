#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

 int main()
 {
   char rdbuf[BUFSIZ];
   int fd = open("wendy.txt", O_CREAT | O_RDONLY); 
   if (fd == -1) {
     perror("open");
     return 1;
   }
   printf("The %d was opened succesfully!\n", fd);

   if (read(fd, rdbuf, BUFSIZ) == -1) {
     perror("read");
     return 1;
   }
   
   return 0;
 }
