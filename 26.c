#include <stdio.h>
int main()
{
    int a[50];
   
    int i, j,n,temp;

  
    printf("n value"); 
    scanf("%d", &n);

   
    printf("Elements ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
     
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = arr[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

  for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;

}
