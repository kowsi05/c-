#include <stdio.h>
int main()
{
    int arr[50];
   
    int i, j,n,temp;

  
    printf("n value"); 
    scanf("%d", &n);

   
    printf("Elements ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
     
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

  for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;

}
