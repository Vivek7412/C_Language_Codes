main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("Result:PASS");
        per=(m1+m2+m3+m4+m5)/5.0;
        if(per>=60)
            printf("\nFirst Division");
        else
            if(per>=50)
            printf("\nSecond Division");
        else
            printf("\nThird Division");
    }
    else
    {
        printf("Result:FAIL");
    }
    return 0;
}
