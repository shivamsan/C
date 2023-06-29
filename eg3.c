#include<stdio.h>
void main()
{
    int x,y,z,a,b,c,d,e,f,g,ans;

    printf("\n enter numbers \n");

    scanf( "%d%d%d%d%d%d%d%d%d%d", &x, &y,&z,&a,&b,&c,&d,&e,&f,&g);
    ans = a+b+c+d+e+f+g+x+y+z;
    printf("\n addition = %d",ans);
}
