#include <stdio.h>
#include <math.h>

float calculateSD(float data[]);
int main()
{
    int i, n;
    float data[100], avg = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array.\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%f", &data[i]);
        avg += data[i];
    }

    avg /= 5;

    printf("The average of the numbers is: %f\n", avg);
    printf("Standard Deviation = %f", calculateSD(data));
    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i)
    {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
    {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}