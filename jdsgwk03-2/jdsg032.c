#include <stdio.h>

struct jdsg
{
	int x;
	int y;
};

int main(void)
{
	struct jdsg A;
	scanf("%d %d", &A.x, &A.y);
	printf("jdsgwk?: %d-%d\n", A.x, A.y);
	return 0;
}
