#include <stdio.h>

int main()
{
  /* manual file lock sc */
  /* void flockfile(FILE *stream); */
  /* void funlockfile(FILE *stream); */
  /* int ftrylockfile(FILE *stream); */

  FILE *stream  = fopen("treasure", "w");
  flockfile(stream);

  fputs("List of treasure:\n", stream);
  fputs("    (1) 500 ggold coins\n", stream);
  fputs("    (2) Wonderfully ornate dishware\n", stream);

  funlockfile(stream);

  /* for other Threads no disturb */
  return 0;
}
