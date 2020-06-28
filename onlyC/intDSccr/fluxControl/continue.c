#include <stdio.h>

int main()
{
	printf("Counting from 1 to 10\n");
	for(int i=1; i <= 10; i++)
	{
		if(i == 4) continue;
		if(i == 7) break;
		printf("%d ", i);
	}
	printf("\nSee the code to view the interruptions...\n");	
return 0;
}
