#include<stdio.h>
main()
{
    int h,v,f;
    scanf("%d%d%d",&h,&v,&f);
    if(h>50 && v>60 && f>100)
    printf("%d",10);
    else if(h>50 && v>60)
    printf("%d",9);
    else if(v>60 && f>100)
    printf("%d",8);
    else if(h>50 && f>100)
    printf("%d",7);
    else if(h>50 || v>60 || f>100)
    printf("%d",6);
    else
    printf("%d",5);
}