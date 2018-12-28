#include <stdio.h>
#include <stdlib.h>
#include <sys/epoll.h>
#include <unistd.h>
#define MAX_EVENTS 64

int main()
{
  struct epoll_event *events;
  int nr_events, i, epfd;

  epfd = epoll_create1(0);
  
  events = malloc(sizeof(struct epoll_event)*MAX_EVENTS);
  if (!events) {
    perror("malloc");
    return 1;
  }

  nr_events = epoll_wait(epfd, events, MAX_EVENTS, -1);
  if (nr_events < 0) {
    perror("epoll_wait");
    free(events);
    return 1;
  }

  for (i = 0; i < nr_events; i++) {
    printf("event = %d on fd = %d\n", events[i].events,events[i].data.fd);
  }

  free(events);
  close(epfd);

  return 0;
}
