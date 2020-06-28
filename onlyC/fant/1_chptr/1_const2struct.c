#include <stdio.h>

enum { red = 1, green, blue, black, violet, orange };
enum { small = 1, medium, large };

struct cup
{
	int size;
	int color;
};

int main(){
	struct cup c1, c2;

	c1.size		= small;
	c1.color	= green;

	c2.size		= large;
	c2.color	= orange;

	printf("cup 1 color %d\n", c1.color);
	printf("cup 2 size %d\n", c2.size);
}
