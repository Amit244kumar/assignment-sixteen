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
            sum+=arr1[i][j];
    }
    printf("The sum of matrix %d",sum);
    getch();
    return 0;
}
