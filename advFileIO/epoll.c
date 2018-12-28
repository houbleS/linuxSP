#include <unistd.h>
#include <stdio.h>
#include <sys/epoll.h>
typedef unsigned int __u32;
typedef unsigned long int __u64;

int main()
{
  /* int epoll_create1(int flags); gt epoll_create, Valid flags = EPOLL_CLOSEXEC  */
  /* epoll_create(int size);*/
  /* int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event); for add or delete file Discriptor */
  /* struct epoll_event */
  /* { */
  /*   __u32 events; */
  /*   union { */
  /*     void *ptr; */
  /*     int fd; */
  /*     __u32 u32; */
  /*     __u64 u64; */
  /*   } data; */
  /* }; */

 /* op : */
 /*  EPOLL_CTL_ADD, EPOLL_CTL_DEL, EPOLL_CTL_MOD */

  /* int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout); return count of events */
  
  
  int epfd;

  epfd = epoll_create1(0);
  if (epfd < 0) {
    perror("epoll_create1");
    return 1;
  }

  struct epoll_event event;
  int ret;

  event.data.fd = fd;
  event.events = EPOLLION | EPOLLOUT;

  ret = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &event);
  if (ret) {
    perror("epoll_ctl");
    return 1;
  }

  close(epfd);
  
  return 0;
}
