#include <stdio.h>
#include <math.h>
#define SIZE 10
double average(int array[]);
double standard(int array[], double average);
int main(void)
{
    int a[SIZE] = { 0 };
    int i;
    double x;
    for (i = 0; i < SIZE; i++)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &a[i]);
    }
    x = average(a);
    printf("평균값은 %lf\n", x);
    printf("표준편차값은 %lf\n", standard(a, x));
    return 0;
}
double average(int array[])
{
    double sum = 0;
    int i;
    for (i = 0; i < SIZE; i++)
    {
        sum += (double)array[i];
    }
    return sum / SIZE;
}
double standard(int array[], double average)
{
    double sum = 0;
    int i;
    for (i = 0; i < SIZE; i++)
    {
        sum += (((double)array[i] - average) * ((double)array[i] - average));
    }
    return sqrt((double)sum / SIZE);
}