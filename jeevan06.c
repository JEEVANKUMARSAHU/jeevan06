#include <stdio.h>

int sod(int x);

int main()

{

    int n;
    printf("Input number: ");

    scanf("%d", &n);

    printf("Sum of digits: %d", sod(n));
}

int sod(int x)

{

    if (x == 0)

        return 0;

    else

        return (x % 10) + sod(x / 10);
}
