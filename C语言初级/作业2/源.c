#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcde";
	char* p1 = arr1;
	char* p2 = arr2;
	int ret = strlen(arr2);
	int i = 1;
	while (*p1 != '\0' && *p2 != '\0')
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else
		{
			p1 = arr1 + i;
			p2 = arr2;
			i++;
		}
	}
	if (*p2 == '\0')
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}