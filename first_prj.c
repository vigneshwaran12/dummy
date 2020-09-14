#include <stdio.h>

int main() {
#ifndef CHECKS
	char *p = "testing";
	printf("in if case...\n");
	fflush(stdout);
#else
	char p[10] = { 0 };
	printf("in else case...\n");
	fflush(stdout);
#endif
	//modify readonly memory
	*p = 'v';
	printf("%s\n", p);
	printf("%s\n", p);
	return 0;
}
