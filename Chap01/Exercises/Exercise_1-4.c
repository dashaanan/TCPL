#include <stdio.h>				// includes information about standard library.

/*	print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version
*/
main()							// defines a function named main that receives
								// no argument values
{								// statements of main are enclosed in braces.
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;					/* lower limit of temperature table */
	upper = 300;				/* upper limit */
	step = 20;					/* step size */ 

	fahr = lower;
	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper)
	{
		fahr = ((9.0 / 5.0) * celsius) + 32;
		printf("  %3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
