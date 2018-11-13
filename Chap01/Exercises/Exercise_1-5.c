#include <stdio.h>				// includes information about standard library.
#define UPPER 300
#define LOWER 0
#define STEP 20

/*	print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version
*/
main()							// defines a function named main that receives
								// no argument values
{								// statements of main are enclosed in braces.
	float fahr;
	printf("Fahrenheit\tCelsius\n");
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3.0f \t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
