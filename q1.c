#include <stdio.h>

int main(void)
{
	int A = 38;
	printf("A = %d\n", A);

	double B = 3.8;
	printf("B = %.1f\n", B);

	float C = 3.7f;
	printf("C = %.1ff\n", C);
}

/*
    %d denotes placing a decimal integer into the print function

    %f denotes placing a floating point (%lf is the same but for doubles)

    %.1f is the same as %f except it tells it to only display one significant figure

    \n is the newline... you placed your newlines in some weird places in the above code.

*/ 