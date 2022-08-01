int main()
{
    int arr1[3][3],i,j,sum;
    printf("Enter the first matrix elements\n ");
    for(i=0;i<3;i++)
    {
        printf("Enter the %d row of matrix\n",i+1);
        for(j=0;j<3;j++)
          scanf("%d",&arr1[i][j]);
    }
    sum+=arr1[2][0]+arr1[1][1]+arr1[0][2];
    printf("The right diagonal sum is %d",sum);

    getch();
    return 0;
}
