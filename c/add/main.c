#include <stdio.h>
#include "add.h"

int main(int argc,char *argv[])
{
    int result = 0;
    if(argc < 3)
    {
        printf("Usage ./add first_number second_number\n");
        return;
    }

    result = add(atoi(argv[1]), atoi(argv[2]));
    printf("value of the sum %d\n",result);
    return 0;
}
