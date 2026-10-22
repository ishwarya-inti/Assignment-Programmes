#include<stdio.h>
void main()
{
int a,b;
printf("Enter ID number");
scanf("%d",&a);
if(a==101)
{
printf("Enter password");
scanf("%d",&b);
if(b==4321)
printf("Login successful");
else
printf("Incorrect password ");
}
else
printf("Incorrect ID");
printf("\nend of programme");
}
