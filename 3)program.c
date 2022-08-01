int main()
{
    int arr1[3][3],i,j;
    printf("Enter the first matrix elements\n ");
    for(i=0;i<3;i++)
    {
        printf("Enter the %d row of matrix\n",i+1);
        for(j=0;j<3;j++)
          scanf("%d",&arr1[i][j]);
    }
    printf("The transpose of a matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",arr1[j][i]);
        printf("\n");
    }
    getch();
    return 0;
}
