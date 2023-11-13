#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int count = 0;

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='e')
            count++;
    }
    printf("h");
    for(int j=0;j<count*2;j++)
    {
        printf("e");
    }
    printf("y");
}
/*
#include <iostream>
using namespace std;
int main(void)
{
    string in;
    int count = 0;
    cin >> in;
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == 'e') count++;
    }
    cout << "h";
    for (int j = 0; j < count * 2; j++)
    {
        cout << "e";
    }
    cout << "y";
}

*/
