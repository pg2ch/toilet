#include <stdio.h>

int main(int a, char **b) {
	if(a>=10) return 0;
	printf("pero pero.\n");
	fflush(stdout);
	return main(a+1, b);
}

