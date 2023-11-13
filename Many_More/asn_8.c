/**
	Assignment - 8: Number Base Converter
	=====================================
	This program will convert a binary number to decimal and vice versa.

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

    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
  //  printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
     printf("Equivalent Binary Number is: %ld", decimal_to_binary());

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
	//long decimalToBinary(int decimalnum)
	long decimal_to_binary();
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

}

void binary_to_decimal()
{
	/// implement binary_to_decimal() here

}
