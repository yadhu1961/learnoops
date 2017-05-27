#include<stdio.h>
#include<stdlib.h>

void print_help()
{
    printf("\n\nRun program in the following format\n");
	printf("*******************************************************\n\n");
    printf("./binary count\n\n");
	printf("*******************************************************\n\n");
	exit(-1);
}

void print_contents(int *ptr,int len)
{
	int loop_count = 0;
	for(loop_count = 0;loop_count < len;loop_count++)
		printf("value[%d] = %d\n",loop_count,ptr[loop_count]);
}


int main(int argc, char *argv[])
{

/*    if(argc < 2)
        print_help();
*/
	int mem_count = 10;//atoi(argv[1]);
	int i= 0; //This is used in all loop declarations.
	printf("count received %d\n",mem_count);

	int *from = (int *)malloc(mem_count * sizeof(int));
	int *to   = (int *)malloc(mem_count * sizeof(int));

	int count = (mem_count + 7) / 8;
	
	//Here, I am gonna fill the poor memory block with random values.
	for(i = 0;i<mem_count;i++)
		from[i] = rand();
	printf("contents of from \n");
	print_contents(from,10);

	printf("contents of to \n");
	print_contents(to,10);

	for(i = 0;i<mem_count;i++)
	{
		to[i] = from[i];
	}


	printf("contents of from \n");
	print_contents(from,10);
	
	printf("contents of to \n");
	print_contents(to,10);
	return 0;
}
