main()
{
    int a,i,sum;
    for(i=1;i<=5;i++)
    {
        printf("Enter a number:",a);
        scanf("%d",&a);
        if(a<0)
            break;
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}
