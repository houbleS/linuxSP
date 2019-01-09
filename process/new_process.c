#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
  int execl(const char *path, const char *arg, ...);
  /* current process replace to [path]. 3rd arg = variable factor and no arg = NULL */
  int ret;

  ret = execl("../advFileIO/mapping", "mapping", NULL);
  if (ret == -1) {
    perror("execl");
  }

  int execlp(const char *file, const char *arg, ...);
  int execle(const char *path, const char *arg, ..., char *const envp[]);
  int execv(const char *path, char *const argv[]);
  int execvp(const char *file, char *const argv[]);
  int execve(const char *filename, char *const argv[], char *const envp[]);
  /* l = list, v = vector(array), p = path on environment variable, e = new Environment */

  ret = execvp("/bin/emacs", "emacs", "../advFileIO/advIO.c", NULL);
  if (ret == -1) {
    perror("execvp");
  }

  const char *args[] = { "emacs", "../advFileIO/mapping.c", NULL };

  ret = execv("/bin/emacs", args);
  if (ret == -1) {
    perror("execv");
  }

  /* only system call type function = execve, anothers are wrapping function */
  ret = execve("/bin/emacs", args, environ);
  if (ret == -1) {
    perror("execve");
  }

  /* new_process created down current process! a.k.a child-process. In Parent Process, returning value is child-process ID, In child-process, it is 0. */
  pid_t fork(void);

  pid_t pid;
  pid = fork();
  if (pid > 0) {
    printf("I am the parent of pid = %d!\n", pid);
  }
  else if (!pid) {
    printf("I am the child!\n");
  }
  else if (pid == -1) {
    perror("fork");
  }
  
  return 0;
}
