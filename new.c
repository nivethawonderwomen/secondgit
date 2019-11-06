nclude<stdio.h>
#include<string.h>
	void main()
		{
char c[100];
printf("Enter your char\n");
scanf("%s",c);
char d[100];
printf("Enter char to copy\n");
scanf("%s",d);
printf("\n%s\n",c);
strcpy(c,d);
printf("\n string copy is %s\n",d);
													
													
}




