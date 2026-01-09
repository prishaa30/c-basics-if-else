#include <stdio.h>

int main(){
   int a, b, c, largest;

   printf("Enter any three numbers:");
   scanf("%d %d %d", &a, &b, &c);

    largest = a;   // assume a is largest

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    printf("%d is the largest", largest);

    return 0;
}
