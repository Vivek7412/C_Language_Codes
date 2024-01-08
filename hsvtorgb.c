#include<stdio.h>
void HSV_tO_RGB(double*r, double*g, double*b, double*h, double*s, double*v)
{
    double f,p,q,t;
    int i;
    if(s==0.0){
        *r=v;
        *g=v;
        *b=v;
    }
    else{
        if(
            h==360.0
        )
        h=0.0;
        h/60.0;
        i=floor(h);
        f=h-i;
        p=v*(1.0-s);
        q=v*(1.0-(s*f));
        t=v*(1.0-(s*(1.0-f)));
        switch (i)
        {
        case 0:*r=v; *g=t; b*=p;break;
        case 1:*r=q; *g=v; b*=p;break;
        case 2:*r=p; *g=v; b*=t;break;
        case 3:*r=p; *g=q; b*=v;break;
        case 4:*r=t; *g=p; b*=v;break;
        case 5:*r=v; *g=p; b*=q;break;
        /* constant-expression */
            /* code */
           
    }
}