#include <stdio.h>
int main()
{
  int arr[10],max=arr[0],i;
  printf("\n enter the 10 elements");
  for(i=0;i<10;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=1;i<10;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
    }
 printf("%d",max);
 return 0;
}
