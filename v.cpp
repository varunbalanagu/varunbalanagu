#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4f",area);
}
