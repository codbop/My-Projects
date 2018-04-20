#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x = 1, a = 1;

    while( x <= 1000000000 ){
        if( x == a * 100000000 ){
            printf("%ld\n", x);
            a = a + 1;
        }
        x = x + 1;
    }
    return 0;
}
