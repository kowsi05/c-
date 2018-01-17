#include <stdio.h>
int main()
{
int m,n,i,num;

    printf("Enter the range:");
    scanf("%d%d",&m,&n);
    while(m<n)
    {
     num =0;
       for (i=2;i<=m/2;++i)

        {

               if (m % i == 0)
               {
               	num=1;
               	break;
               
               }
        }
          if(num==0)
           {
           	
            printf ("%d ", ++m);
              
              
            }

          return 0;      

} 
}


