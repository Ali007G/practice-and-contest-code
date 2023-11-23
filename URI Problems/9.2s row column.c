#include<stdio.h>
int main()
{
    int row,col,a[5][2];
    printf("\n");

    for(row=0;row<5;row++)
    {
        for(col=0;col<2;col++)
    {
        a[row][col]=row*col;
        printf("\t%d", a[row][col]);
    }
       printf("\n");

    }
}
/*
                   a[row][col]=row*col --->
when row=0,col=0,  [0][0] = 0*0     --->        0       output:    0   0
when row=0,col=1,  [0][1] = 0*1     --->        0                  0   1
when row=1,col=0,  [1][0] = 1*0     --->        0                  0   2
when row=1,col=1   [1][1] = 1*1     --->        1                  0   3
when row=2,col=0   [2][0] = 2*0     --->        0                  0   4
when row=2,col=1   [2][1] = 2*1     --->        2
continue...
*/
