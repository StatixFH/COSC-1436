#include <stdio.h>
int main()
{
int paycode, idNum;
float pay, hourlySal, numHours, gross, taxCal, net, sales;

while (paycode != -1){

printf("Enter employee's ID number: ");
scanf("%d", &idNum);
printf("\nEnter employee's paycode (-1 to end): ");	
scanf("%d", &paycode);

  switch(paycode)
{
  case 1:
	printf("\n\nManager paycode selected\n");
	printf("\nEnter yearly salary: $");
	scanf("%f", &pay);
	
	gross = pay / 12;
	taxCal = gross * .08625;
	net = gross - taxCal;
	
	printf("\nID number: %d", idNum);
	printf("\nManager's weekly gross pay is $%0.2f", gross);
	printf("\nTaxes paid: $%0.2f", taxCal);
	printf("\nManager's weekly net pay is $%0.2f\n\n\n", net);
   break;
	
  case 2:
	printf("\n\nHourly worker paycode selected\n");
	printf("Enter hourly salary: $");
	scanf("%f", &hourlySal);
	printf("Enter total hours worked: ");
	scanf("%f", &numHours);
	
	if (numHours<=40)
		pay = hourlySal * numHours;
	else
		pay = hourlySal * 40 + (numHours - 40) * hourlySal * 1.5;
		
  gross = pay;
  taxCal = pay * .08625;
  net = pay - taxCal; 
  
  printf("\nID number: %d", idNum);
  printf("\nEmployee worked %0.2f hours", numHours);
  printf("\nEmployee's gross pay is $%0.2f", gross);
  printf("\nTaxes paid: $%0.2f", taxCal);
  printf("\nEmployee's weekly net pay is $%0.2f\n\n\n", net);
  break;

  case 3:
  	printf("\n\nCommission worker paycode selected\n");
  	printf("Enter gross weekly sales: ");
  	scanf("%f", &sales);
  	
  	gross = 250 + sales * 0.057;	
  	taxCal = gross * .08625;
    net = gross - taxCal;
    
    printf("\nID number: %d", idNum);
    printf("\nEmployee's gross pay is $%0.2f", gross);
    printf("\nTaxes paid: $%0.2f", taxCal);
    printf("\nEmployee's net pay is $%0.2f\n\n\n", net);
    break;

	}	
	
}
return 0;
	
}