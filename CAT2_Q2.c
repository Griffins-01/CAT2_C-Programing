/*
NAME:GRIFFINS NYAMWANGE NYANDUSI
REGNO:PA106/G/28742/25
DESCRIPTION:
*/

#include<stdio.h>

int main(){
	float hours,wage,netpay,grosspay,taxes;
	
	printf("Enter hours worked this week	");
	scanf("%f",&hours);
	printf("Enter hourly wage	");
	scanf("%f",&wage);
	
	if(hours<=40) grosspay=hours*wage;
	else 
	grosspay=(40*wage)+((hours-40)*wage*1.5);

    if(grosspay<=600) taxes=grosspay*0.15;
    
    else
    	taxes=(600*0.15)+((grosspay-600)*0.20);
    
    netpay=grosspay-taxes;
	
printf("\nGross pay:%.2f",grosspay);
printf("\nTaxes:%.2f",taxes);
printf("\nNetpey:%.2f\n",netpay);
	

	return 0;
}