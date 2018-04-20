#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    char *names[3] = { "Emre", "Ilker", "Zeynep" };

    for(i=0; i<3; i++)
        printf("%s\n",names[i]);

    return 0;
}

