#include <stdio.h>

int main() {
  float gallons, miles, total_gallons, total_miles, mpg, total_mpg;
  total_gallons = 0;
  total_miles = 0;

	printf( "Enter the gallons used, (-1 to end): \n" );
    scanf( "%f", &gallons );
    
	while (gallons != -1) {
	printf( "Enter the miles driven: \n" );
	scanf( "%f", &miles );
	
	mpg = miles / gallons;
	printf( "MPG: %.2lf\n", mpg );
	
	total_gallons = total_gallons + gallons;
    total_miles = total_miles + miles;
   
	printf( "Enter the gallons used, (-1 to end): \n" );
    scanf( "%f", &gallons );
	} 	
		 
	total_mpg = total_miles / total_gallons;
	printf( "Average MPG: %.2lf\n", total_mpg );
	

	return 0;
}