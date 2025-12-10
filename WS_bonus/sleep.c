#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2) {
    fprintf(2, "Usage: sleep ticks\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if (n < 0) {
    fprintf(2, "sleep: negative ticks\n");
    exit(1);
  }

  sleep(n);
  exit(0);
}

