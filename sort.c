#include <stdio.h>
int main()
{
    int a[50];
   
    int i, j,n,temp;

  
    printf("\nn value:"); 
    scanf("%d", &n);

   
    printf("Elements are: ");
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
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

  for(i=0; i<n; i++)
    {
        printf("\n%d\t", a[i]);
    }

    return 0;

}
