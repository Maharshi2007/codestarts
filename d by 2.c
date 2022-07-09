#include<stdio.h>
#include<math.h>
// 1 - even number
// 0 - odd number
int main()  {
    int number;
    printf("enter a number :");
    scanf("%d", &number);
    printf("%d", number % 2 == 0);
    return 0;
}