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
        printf("������ �Է��Ͻÿ�: ");
        scanf("%d", &a[i]);
    }
    x = average(a);
    printf("��հ��� %lf\n", x);
    printf("ǥ���������� %lf\n", standard(a, x));
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