/****************************************************
*	Assignment-7									*
*	============									*				*
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

	for(i=0; i<SIZE; i++)
		a[i] = (rand() % 10000) - 1000;

	bubbleSortImproved(a);

	for(i=0; i<SIZE; i++)
		a[i] = (rand() % 10000) - 1000;

	selectionSort(a);

	return 0;
}


/************** User-defined functions **************/
void bubbleSort(int a[])
{
	int i,j;

	printf("Bubble sort in progress. Please wait ...");
	start = clock();

	/// implement your Bubble Sort Algorithm here

	for(i=0;i<SIZE-1;i++)
    {
        for(j=0;j<SIZE-1;j++)
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
	int count = 1;
	printf("Bubble sort (improved) in progress. Please wait ...");
	start = clock();

	/// implement your (Improved) Bubble Sort Algorithm here

	for(i=0;i<SIZE;i++)
    {
        count = 0;
        for(j=0;j<SIZE-i-1;j++)
        {
            if(a[j]>a[j + 1])
                {
                    swap = a[j];
                    a[j] = a[j+1];
                    a[j+1] = swap;
                    count = 1;
                }
        }
        if(count!= 1)
            break;
    }

	end = clock();
	totalTime = (end - start) / (CLOCKS_PER_SEC * 1.0);
	printf("\nTime required for Improved Bubble Sort: %.4lf seconds.\n\n", totalTime);
}

void selectionSort(int a[])
{
	int i,j,pos;

	printf("Selection sort in progress. Please wait ...");
	start = clock();

	/// implement your Selection Sort Algorithm here

	for(i=0;i<SIZE-1;i++)
    {
        pos=i;
        for(j=i+1;j<SIZE;j++)
        {
            if(a[pos]>a[j])
                pos=j;
        }
        if(pos!= i)
        {
        temp = a[i];
        a[i] =  a[pos];
        a[pos] = temp;
        }
    }

	end = clock();
	totalTime = (end - start) / (CLOCKS_PER_SEC * 1.0);
	printf("\nTime required for Selection Sort: %.4lf seconds.\n\n", totalTime);
}

