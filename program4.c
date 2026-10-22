 #include<stdio.h>
int main()
{
int a,b;
printf("\nenter order amount and membership type");
scanf("%d%d",&a,&b);
if(a>=500)
{
if(b==1)
printf("\nthe final amount is %.2f",a-(a*0.1));
else
printf("\nthe final amount is %d",a);
}
else
{
printf("\nthe final amount is %d",a+50);
}
printf("\nend of programme");
}
