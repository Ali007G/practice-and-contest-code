/****************************************************
*	Assignment-7									*
*	============									*		*
*****************************************************/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 50000 /// constant

/**************** Global Variables ******************/
int t[SIZE];
int temp;
clock_t start, end;
double totalTime;

/**************** Function Prototyps ****************/
void bubbleSort(int a[]);
void bubbleSortImproved(int a[]);
void selectionSort(int a[]);

/***************** main() function *****************/
int main()
{
	int a[SIZE];
	int i;

	srand( time(0) );
	for(i=0; i<SIZE; i++)
		a[i] = (rand() % 10000) - 1000;

	bubbleSort(a);
	bubbleSortImproved(a);
	selectionSort(a);
	return 0;
}

/************** User-defined functions **************/
void bubbleSort(int a[])
{
	int i, j;

	printf("Bubble sort in progress. Please wait ...");
	start = clock();

	/// implement Bubble Sort Algorithm here
	for(i=0;i<a[i]-1; i++)
	{
	    for(j=0;j<a[i]-j-1;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
	end = clock();
	totalTime = (end - start) / (CLOCKS_PER_SEC * 1.0);
	printf("\nTime required for Bubble Sort: %.2lf seconds.\n\n", totalTime);
}

void bubbleSortImproved(int a[])
{
	int i, j, swap;

	printf("Bubble sort (improved) in progress. Please wait ...");
	start = clock();

	/// implement (Improved) Bubble Sort Algorithm here
	 for(i= a[i]-1;i>0;i--)
        {
            for(j=1;j<=i;j++)
            {
                if(a[j-1]>a[j])
                  {
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                  }
             }
        }
	end = clock();
	totalTime = (end - start) / (CLOCKS_PER_SEC * 1.0);
	printf("\nTime required for Improved Bubble Sort: %.4lf seconds.\n\n", totalTime);
}

void selectionSort(int a[])
{
	int i, j, pos;

	printf("Selection sort in progress. Please wait ...");
	start = clock();

	/// implement Selection Sort Algorithm here
	for(i=0;i<pos-1;i++)
{
    int j=i;
    for(j=i+1;j<pos;j++)
    {
        if(a[j]<a[j+1])
        {
            a[j+1]=j;
        }
    }
}
	end = clock();
	totalTime = (end - start) / (CLOCKS_PER_SEC * 1.0);
	printf("\nTime required for Selection Sort: %.4lf seconds.\n\n", totalTime);
}
