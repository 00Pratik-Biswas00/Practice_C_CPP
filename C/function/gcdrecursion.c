#include <stdio.h>
int hcf(int n1, int n2);
int main() {
       int n1, n2;
       printf("Enter two positive integers: ");
       scanf("%d %d", &n1, &n2);
       printf("G.C.D of %d and %d is %d.\n", n1, n2, hcf(n1, n2));
       return 0;
}

int hcf(int n1, int n2) {
       if (n1 == 0)
              return n2; 
       else if (n2 == 0)
              return n1;
       else
              return hcf(n2, n1 % n2);
}