#include<stdio.h>
#include<string.h>

char string[50], n;

void subset(int start, int count, int number)
{
int i, j;
if((count-start+1)==number)
{
	if(number==1)
	{
		for(i=0;i<n;i++)
		{printf("%c\n", string[i]);
		}
	}
	else
	{
		for(j=count;j<n;j++)
		{
			for(i=start;i<count;i++)
			printf("%c",string[i]);
			
		printf("%c\n",string[j]);
		}
		if(start!=n-number)
		subset(start+1,start+1,number);
	}
}
else
{subset(start,count+1,number);
}
}

int main()
{
int i, len;
printf("Enter the length of the string");
scanf("%d",&len);
printf("enter the string");
scanf("%s",string);
n=len;
printf("subsets are:\n");
for(i=1;i<=n;i++)
{
subset(0,0,i);
}
return 0;
}







