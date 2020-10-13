#include <stdio.h>

int main(int argc, char** argv)
{
	int input;
	int a = 4440;
	int b = 78;

	puts("password:");
	scanf("%d", &input);

	b <<= 2;
	a -= b;
	a += 0x13c;

	if (input == a) puts("right!");
	else puts("wrong");
}
