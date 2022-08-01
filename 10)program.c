int main()
{
    int arr1[3][3],i,j,r=0,v=0,e=-1;
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
           if(arr1[i][j]==1)
              r++;
        if(r>v)
        {
            v=r;
            e=i;
        }
    }
    if(e==-1)
      printf("The no row of matrix has 1 element");
    else
        printf("The %d row has maximum number of 1's ",e+1);
    getch();
    return 0;
}
