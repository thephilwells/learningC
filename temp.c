#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("\nFAHR | CELSIUS\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%4.0f %9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
