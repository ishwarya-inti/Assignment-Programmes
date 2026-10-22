 #include<stdio.h>
int main()
{
int a,b,c;
printf("enter your age");
scanf("%d",&a);
if(21<=a && a<=60)
{
printf("enter your salary");
scanf("%d",&b);
if(b>=25000)
{
printf("enter your credit score");
scanf("%d",&c);
if(c>=700)
printf("Loan approved");
else
printf("Loan rejected: credit score below 700");
}
else
printf("Loan rejected: salary below ₹25000");
}
else
printf("Loan rejected: age is not 21 to 60");
printf("\nend of programme");
}
