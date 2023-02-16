#include<string.h>
#include<stdio.h>
#include<assert.h>

void reverse(char * a,char *b)//������
{
	assert(a);
	assert(b);
	while (a < b)
	{
		char  tem = *a;
		*a = *b;
		*b = tem;
		a++;
		b--;
	}
}
void left_rotate(char* arr, int len,int k)//�ַ�������
{
	assert(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
int main()
{
	char arr[] = { "ABCDEF" };
	int len = strlen(arr);
	int k = 3;
	printf("%s\n", arr);
	left_rotate(arr, len,k);
	printf("%s\n", arr);
	return 0;
}
