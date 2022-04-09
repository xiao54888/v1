#include<stdio.h>
#include<string.h>
main() 
{
	char str[] = "2+2*3+2/2-1";
	char str1[] = "1+2+2+1+2+5+4-1-3+4-8";
	char str2[] = "2*2/4*1/1*2*3/2";
	int a = str[0]-'0', i, b = 0;
	int c = str1[0] - '0', d = str2[0] - '0';
	for (i = 1; i < strlen(str1); i++)
	{
		switch (str1[i])
		{
		case '+': c = c + (str1[i + 1] - '0'); break;
		case '-': c = c - (str1[i + 1] - '0'); break;
		}
	}
	for (i = 1; i < strlen(str2); i++)
	{
		switch (str2[i])
		{
		case '*': d = d * (str2[i + 1] - '0'); break;
		case '/': d = d / (str2[i + 1] - '0'); break;
		}
	}
	for (i = 1; i < strlen(str); i++)
	{
		switch (str[i])
		{
		

		case '*': b = b+(str[i - 1] - '0') * (str[i + 1] - '0'); break;
		case '/': b = b+(str[i - 1] - '0') / (str[i + 1] - '0'); break;
		}
	}
	for (i = 1; i < strlen(str);i++ )
	{
		switch(str[i])
		{
		case '+': if (str[i + 2] == '*' || str[i + 2] == '/')
		{
			
		}
				else
		{
			a = a + (str[i + 1] - '0');
			
		}
		case '-': if (str[i + 2] == '*' || str[i + 2] == '/')
		{
			
		}
				else
		{
			a = a - (str[i + 1] - '0');
		
		}
		}
	}
	printf("V1=%d,V2=%d,V3=%d\n",c,d,a+b);
}
