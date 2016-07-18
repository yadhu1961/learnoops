#include<stdio.h>

main(int argc,char **argv)
{
    if(argc < 3)
    {
        printf("Usage ./add_program value_one value_two\n");
        return;
    }
    //printf("Value of argv[0] %s\n",argv[0]);
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    printf("sum %d function\n",a+b);
    return;
}
