#include<stdio.h>
void input_array(int n,int a[i])
{
for(int i=0;i<n;i++)
{
    printf("enter the element no %d\n",i);
    scanf("%d",&a[i]);
}
}
int sum_array(int n,int a[i])
{
    for(int i=0;i<n;i++)
    {
        newsum=previous sum+a[i];
        previous sum=newsum;
    }
    return newsum;
}
int output(int n,int a[n],int sum)
{
    int i;
    for(int i=0;i<n-1,i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d=%d\n",a[i],sum);
    
}
int main()
{
int n;
int a[n];
int sum;
n=input();
input_array(n,a);
sum=sum_array(n,a);
output(n,a,sum);
}
