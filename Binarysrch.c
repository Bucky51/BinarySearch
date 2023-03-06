#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a[25],i,n,key,mid,low,high;
    printf("\nEnter the n value:\n");
    scanf("%d",&n);
    printf("\n Enter %d elements:\n",n);
    for ( i = 0; i <n; i++)
    scanf("%d",&a[i]);
    printf("\n Enter the key value:\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while (low<=high)
    { 
    mid=(low+high)/2;
      if (key==a[mid])
      {
        printf("");
        getch();
      }
      if(key>a[mid])
      low=mid+1;
      else
      if(key<a[mid])
      high=mid-1;

    for ( i = 0; i < n; i++)
    {
      if(key==a[i])
      printf("\n Item found at %d ",i+1);
      }
      
       if(key==a[mid])
       exit(0);
    }
    printf("\n Item not found....\n");
    getch();    
}
    
