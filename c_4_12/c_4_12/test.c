
#include <stdio.h>
//���1-100�������
int main()
{
	int i = 1;
	while ( i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ",i);
		i++;
	}
	return 0;
}