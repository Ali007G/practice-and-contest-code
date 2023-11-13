/*
#include<stdio.h>

int main()
{
    long int Number;
    scanf("%ld", &Number);

    printf("We Love You. We %ld Are Here For You.",Number);
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char greetings[200];
    int i;
    scanf("%s", greetings);
    int count=0;
    for(i=0;greetings[i]!='\0';i++)
        {
        if(greetings[i]=='e')
        {
            count++;
        }
    printf("h");
    for(i=0;i<2*count;i++)
        {
        printf("e");
    }
    printf("y\n");
    return 0;
    }
}
*/
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i,count =0;
    int a=0;
    while(str[i]!='\0')
    {
        if(str[i]=='e')
         count++;
    }
    printf("h");
    for(int i=0;i<2*count;i++)
    {
        printf("e");
    }
    printf("y\n");
    return 0;
}
/*
#include <stdio.h>

int main() {
    char s[200]; // assuming maximum length of input is 100
    scanf("%s", s); // read the input string
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        { // iterate through each character in the string
        if (s[i] == 'e') { // check if the character is an 'e'
            count++; // if it is, increment the count variable
        }
    }
    printf("h");
    for (int i = 0; i < 2*count; i++) { // print the response string
        printf("e");
    }
    printf("y\n");
    return 0;
}
*/
