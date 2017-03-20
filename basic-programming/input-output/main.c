#include <stdio.h>

int main() {
	// init variables
	int N;
	char S[16];

	// read from STDIN
	scanf("%d", &N);
	scanf("%s", S);

	// write to STDOUT
	printf("%d\n", N * 2);
	printf("%s\n", S);

	return 0;
}
