#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  pid_t pid;
  pid = fork();
  if (pid == -1) {
    perror("fork");
  }

  /* child-processing */
  if (!pid) {
    char *const args[] = { "emacs", NULL };
    int ret;
    
    ret = execv("/bin/emacs", args);
    if (ret == -1) {
      perror("execv");
      exit(EXIT_FAILURE);
    }
  }
  
  return 0;
}
