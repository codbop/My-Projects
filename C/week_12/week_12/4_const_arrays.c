#include <stdio.h>
#include <stdlib.h>

void tryToModifyArray(const int []);

int main()
{
    int a[3] = {10, 20, 30};

    tryToModifyArray(a);

    printf("%d %d %d",a[0],a[1],a[2]);

    return 0;
}

void tryToModifyArray(const int b[])
{
    b[0] = 40;
    b[1] = 50;
    b[2] = 60;
}
