#include <iostream>

using namespace std;

int main()
{
    int a[40],i,j,x=0,y=0,z=0,z1=0,z2=0,z3=0,z4=0,z5=0,z6=0,z7=0;

    for(i=0;i<40;i++)
    {
        cin>>a[i];
        if(a[i]>80)
        {
            x++;
        }
        else if(a[i]>75)
        {
            y++;
        }
        else if(a[i]>70)
        {
            z++;
        }
        else if(a[i]>65)
        {
            z1++;
        }
        else if(a[i]>60)
        {
            z2++;
        }
        else if(a[i]>55)
        {
            z3++;
        }
        else if(a[i]>50)
        {
            z4++;
        }
        else if(a[i]>45)
        {
            z5++;
        }
        else if(a[i]>40)
        {
            z6++;
        }
        else
        {
            z7++;
        }
    }

    cout<<"A+ "<<x<<endl;
    cout<<"A "<<y<<endl;
    cout<<"A- "<<z<<endl;
    cout<<"B+ "<<z<<endl;
    cout<<"B "<<z<<endl;
    cout<<"B- "<<z<<endl;
    cout<<"C+ "<<z<<endl;
    cout<<"C "<<z<<endl;
    cout<<"D "<<z<<endl;
    cout<<"F "<<z<<endl;

    return 0;
}
// 96 49 89 47 61 44 71 38 96 43 48 84 34 60 93 26 41 34 93 92 62 84 43 77 69 91 68 45 43 60 99 28 99 26 97 30 32 29 54 68
