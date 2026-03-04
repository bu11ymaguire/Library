#include "libr.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning(disable:4996) 

int main()
{
	char username[100] = "User";
	printf("<<µµ¼­°ü>>\n");
	int m;
	for (;;)
	{
		menu(&m,username);
		if ((m == 4&&strcmp(username,"User")==0)||(m==5&&strcmp(username,"User")!=0))
		{
			break;
		}
		
	}
	return 0;
}