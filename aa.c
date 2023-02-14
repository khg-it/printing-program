# include <stdio.h>

int main()
{
  for(int i=1;i<=5;i++)
  {
   for(int j=1;j<=i;j++)
   {
       if(i==1 || j==1)
       {
        printf("A");

       }
       else if( i==2 || j==2)
       {
        printf("B");

       }
              else if( i==3 || j==3)
       {
        printf("C");

       }
          else if( i==4 || j==4)
       {
        printf("D");

       }
          else if( i==5 || j==5)
       {
        printf("E");

       }


   }
         printf("\n");
  }
     return 0;
}
