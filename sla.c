#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
  if ((strcmp(argv[1], "--help") == 0))
    printf("--daniel: Mostra as informações sobre Daniel.\n--exit: sai do "
           "programa.\n");
  else {
    if ((strcmp(argv[1], "--daniel") == 0))
      printf("lindo\n");

    else {
      if ((strcmp(argv[1], "--exit") == 0))
        exit(1);
      else if (argv[1] == NULL)
        printf("Opção invalida.");
    }
  }
  return 0;
}
