#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define PRINTR(w) printf(" w = %.2f\n", w);

#define TASK1
#define TASK2
#define LOGIC

int main() {
  float x, z, w;
  char ch;

  do {
    puts("Input x:");
    scanf("%f", &x);

    puts("Input z:");
    scanf("%f", &z);

#ifdef TASK1
    puts("\n w = max(x,z) * min(x+z, x*z)");
    w = MAX(x, z) * MIN(x + z, x * z);
    PRINTR(w);
#endif

#ifdef TASK2
    puts("\nw = MIN(|x - z|, z)");
    w = MIN(ABS(x - z), z);
    PRINTR(w);
#endif

#ifdef LOGIC
    puts("\nLOGIC CHECK:");
    printf("5 < z < 10 : %s\n", (z > 5 && z < 10) ? "TRUE" : "FALSE");
    printf("z <= 5 OR z >= 10 : %s\n", (z <= 5 || z >= 10) ? "TRUE" : "FALSE");
#endif

    while ((ch = getchar()) != '\n' && ch != EOF)
      ;

    puts("\nRepeat? y/n");
    ch = getchar();

    while ((getchar()) != '\n')
      ;
  } while (ch == 'y' || ch == 'Y');

  return 0;
}
