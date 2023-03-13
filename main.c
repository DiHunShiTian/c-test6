#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[4]= {1,0,-1,0};
    int y[4]= {0,1,0,-1};
    char a[20][20]= {0};//初始化
    int n;
    int c=-1,d=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            a[i][j]='B';//全部赋值 B

    for(int i=0; i<n; i++)

    {

        for(int j=0; j<n-i; j++)
        {

            c+=x[i%4];
            d+=y[i%4]; //先移动后赋值

            a[c][d]='T';

        }

    }

    for(int i=0; i<n; i++)
        puts(a[i]);

}
