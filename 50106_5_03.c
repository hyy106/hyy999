#include<string.h>
int main()
{
	int i; 
	char str[]="2*2/4*1/1*2*3/2";
	int res=str[0]-'0';
	for(i=1;i<strlen(str);i++)
	{
		if(str[i]=='*')
		{
			int s=strExp[i+1]-'0';
			res=res*s;
			i++;
		}
		else if(str[i]=='/')
		{
			int s=str[i+1]-'0';
			res=res/s;
			i++;
		}
	}
	printf("res=%d",res);
	return 0;
}
