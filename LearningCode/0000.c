#include <stdio.h>
int main() {
      int i;
      for ( i = 1; i < 6; i ++) {
            if ( i % 2 != 0) {
                  printf("#");
                  continue;
            }
            printf("*");
      }
      printf("\n");

      return 0;
}
