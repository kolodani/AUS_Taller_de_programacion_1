#include <stdio.h>
#include <stdlib.h>

int main() {
  system("/bin/date");
  printf("Sizeof de int %d\n", (int)sizeof(int));
  printf("Sizeof de short int %d\n", (int)sizeof(short int));
  printf("Sizeof de long int %d\n", (int)sizeof(long int));
  printf("Sizeof de long long int %d\n", (int)sizeof(long long int));
  printf("Sizeof de char %d\n", (int)sizeof(char));
  printf("Sizeof de float %d\n", (int)sizeof(float));
  printf("Sizeof de double %d\n", (int)sizeof(double));
  printf("Sizeof de long double %d\n", (int)sizeof(long double));

  return 0;
}

