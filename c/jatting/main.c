#include<stdio.h>
#include<string.h>
int main(int argc,void **argv[])
{
	struct Test {
	char buffer[10];
	char buffer2[10];// = "AAAAAAAAAAAAAAAAAAAAA";
	}test;

	//struct Test *test = (struct Test*)malloc(sizeof(Test));


	strcpy(test.buffer2,"AAAAAAAAAA");

	sprintf(test.buffer,"%s",argv[1]);
	printf(test.buffer2);
	//int *p = a;
	//coding from cell phone
	//printf("%d\t%d\t%d\t%d\t\n",*p,1[a],a,p);
	return 0;
}
