#include <stdio.h>


/* print Celsius-Fahrenheit table */
main()
{
	int cels;
	
	printf("CELS | FAHRENHEIT\n");
	for (cels = 300; cels >= 0; cels = cels - 20)
		printf("%4i %9.0f\n", cels, (9.0/5.0)*cels+32);
}
