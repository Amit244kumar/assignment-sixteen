int main()
{
    int arr1[3][3],i,j,sum=0;
    printf("Enter the first matrix elements\n ");
    for(i=0;i<3;i++)
    {
        printf("Enter the %d row of matrix\n",i+1);
        for(j=0;j<3;j++)
          scanf("%d",&arr1[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        if(i>0)
        {
            if(j>=0&&j<=i-1)
              printf("%3d",arr1[i][j]);
          else
            printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
