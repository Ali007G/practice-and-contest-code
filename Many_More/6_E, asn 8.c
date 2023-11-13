/**
	Assignment - 8: Number Base Converter
	=====================================
	This program will convert a binary number to decimal and vice versa.

	Prepared By: (Group - ##)
	------------------------
	1. Sadia Yeasmin(18)
	2. Suraiya Binte Farid(12)
	3. Shrestha Roy Chowdhuri(15)

	Date of Submission: 10/01/2023
	-------------------

**/

#include <stdio.h>
#include <math.h>

void decimal_to_binary();
void binary_to_decimal();


int main()
{
	int choice;

	printf("\tWelcome to Number Base Converter\n");
	printf("\t================================\n");

	do{
		printf("\n\n1. Decimal to Binary\n");
		printf("2. Binary to Decimal\n");
		printf("3. Exit\n");
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				decimal_to_binary();
				break;
			case 2:
				binary_to_decimal();
				break;
			default:
				return 0;
		}
	} while(1);

	return 0;
}


void decimal_to_binary()
{
	/// implement decimal_to_binary() here
	int decimal;
	printf("\n\nEnter a decimal number:");
	scanf("%d",&decimal);

	int binary[32];
    int i,j;

   for(i=0;decimal>0; )
   {
      binary[i++] = decimal%2;
      decimal/=2;
   }
   printf("\nEquivalent binary number is: ");
   for(j=i-1;j>=0;j--)
      printf("%d", binary[j]);

}

void binary_to_decimal()
{
	/// implement binary_to_decimal() here
    int i, binary, decimal=0, rem;
    printf("\nEnter a binary number: ");
    scanf("%d", &binary);

    for(i=0;binary!=0;i++)
    {
        rem=binary%10;
        binary=binary/10;
        decimal=decimal+(rem)*(pow(2,i));
    }
    printf("\nEquivalent binary number is: %d",decimal);
}
