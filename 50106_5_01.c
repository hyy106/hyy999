#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="3+4";
	int left=str[0]-'0';
	int right=str[2]-'0';
	int res=left+right;
	printf("res=%d\n",res);
}