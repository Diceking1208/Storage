#include <stdio.h>


int main()
{

	char screen[500];/*가로 : 30 세로 : 15 */
	
	int i = 0;
	while(i<450)
	{
		screen[i]='0';
		i=i+1;
	}
	screen[30]='\0';

	int a = 0;
	while(a<15)
	{
		screen[30]='\0';
		a=a+1;
		printf("%s\n",screen);
	}
	
	return 0;
}

