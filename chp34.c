#include <stdio.h>
int main()
{
    int Q,D=0;
    float R,T;
    printf ("enter quantity and rate");
    scanf ("%d%f",&Q,&R);
    if (Q>1000)
    D=10;

    T=(Q*R)-(Q*R*D/100);
    printf ("total expenses = rs. %f\n",T);

    return 0;
}
