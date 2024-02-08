#include<stdio.h>
void sort(int *a, int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[j+1])
            {
                a[j]=temp;
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int prosto(int n)
{
    if(n<2)return 0;
    for(int i=1;i<n/2;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int cifri(int n)
{
    int amount=0;
    while(n)
    {
        amount++;
        n/=10;
    }
    return amount;
}
int vsichko(int *a,int n)
{
    int s=0,i;
    sort(a,n);
    for(i=1;i<n;i++)
    {
        if(prosto(i))s+=cifri(a[i]);
    }
    return s;
}
int main()
{
    int a[]={3,17,22,342,1024,2025,19,25,35,85};
    int n=sizeof(a);
    printf("broi cifri v prostite indexi v masiva: %d", vsichko(a,n));
    return 0;
}
