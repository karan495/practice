#include<stdio.h>
#include<conio.h>
void selection(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
              t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
         }
       }
}

void main()
{
    int a[100],n,i;
    clrscr();
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    selection(a,n);
    printf("now array is");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    getch();
}




