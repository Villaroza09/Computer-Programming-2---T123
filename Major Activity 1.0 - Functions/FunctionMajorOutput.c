#include <stdio.h>
#include <string.h>
void main()
{
   int customid, conut;
   float chag, surcharg=0, gramt,netamt;
   char connam[25];

   printf("Input Customer ID :");
   scanf("%d",&customid);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conut);
   if (conut <200 )
	chag = 1.20;
   else	if (conut>=200 && conut<400)
		chag = 1.50;
	else if (conut>=400 && conut<600)
			chag = 1.80;
		else
			chag = 2.00;
   gramt = conut*chag;
   if (gramt>300)
	surcharg = gramt*10/100.0;
   netamt = gramt+surcharg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO:                       :%d\n",customid);
   printf("unit Consumed:                       :%d\n",conut);
   printf("Amount Charges @Rs. %4.2f  per unit  :%8.2f\n",chag,gramt);
   printf("Surchage Amount:                     :%8.2f\n",surcharg);
   printf("Net Amount Paid By the Customer      :%8.2f\n",netamt);

}
