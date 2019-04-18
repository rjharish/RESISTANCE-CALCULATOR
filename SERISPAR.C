#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,Total;
int ch;
printf("Enter three resistor value in ohms:");
scanf("%f%f%f",&a,&b,&c);
Total=a+b+c;
printf("a=%7.3f,b=%7.3f,c=%7.3fohms\n",a,b,c);
printf("Equivalant seris resistance is %7.3f ohms\n",Total);
Total=1/(1/a+1/b+1/c);
printf("Equivalant parallel resistance is %7.3f ohms\n",Total);
getch();
}