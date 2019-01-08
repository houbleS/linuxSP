#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
  pid_t getpid(void); /* called pid */
  pid_t getppid(void); /* parents pid */

  printf("My pid = %jd\n\n", (intmax_t)getpid()); /* intmax_t in stdint.h */
  printf("Parents pid = %jd\n", (intmax_t)getppid());
  
  return 0;
}
