#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    double gpa;
    double gpa1;
    scanf("%d", &a);
	scanf("%d", &b);
    scanf("%lf", &gpa);
    scanf("%lf", &gpa1);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f", gpa+gpa1, gpa-gpa1);
    return 0;
}
