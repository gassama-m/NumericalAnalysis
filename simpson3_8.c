#include <stdio.h>

double simpson3h_8(double x[], double y[], int length_arrays, double a, double b, double n)
{
    if (n == 0)
    {
        printf("n sinfira esit olmamali\n");
        return 0;
    }

    double h = (b - a) / n, result = 0;
    double jump = (length_arrays - 1) / n;
    result = y[0] + y[length_arrays - 1];
    for (int i = jump; i <= length_arrays - 1 - jump; i += jump)
    {
        if (i % 3 == 0)
            result += 2 * y[i];
        else
            result += 3 * y[i];
    }
    result *= (3 * h) / 8;

    return result;
}
int main()
{
    double x[] = {0, 0.1, 0.2, 0.3, 0.4}, y[] = {1, 0.9975, 0.9900, 0.9776, 0.8604};
    int len = 5;

    printf("%.5lf", simpson3h_8(x, y, len, 0, 0.4, 4));
    return 0;
}