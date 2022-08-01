#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j,c;
    //taking the input to first matrix
    printf("Enter the element in first matrix\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter %d row\n",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    //taking the input to second matrix
    printf("Enter the element in second matrix\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter %d row\n",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%3d",&arr2[i][j]);
        }
    }

     //calculating the product of matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=0;
            for(c=0;c<3;c++)
            arr3[i][j]+=arr1[i][c]*arr2[c][j];
        }
    }
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
     }
    getch();
    return 0;
}

