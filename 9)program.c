int main()
{
    int arr1[3][3],i,j,r=0,t=0;
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
        if(arr1[i][j]==0)
             r++;
        else
            t++;
    }
    if(r>t)
        printf("The matrix is sparse matrix");
    else
        printf("The matrix is not sparse matrix");
    getch();

    return 0;
}
