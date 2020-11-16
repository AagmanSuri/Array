#include <stdio.h>
#include <stdlib.h>
//this is the Multi-dimension

int main()
{     int i,j;
      int *b[3];
      b[0]= (int *)malloc(4*sizeof(int));
      b[1]= (int *)malloc(4*sizeof(int));
      b[2]= (int *)malloc(4*sizeof(int));
    for(i=0;i<3;i++)
    {    printf("Enter the elements for %d row",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }


}
