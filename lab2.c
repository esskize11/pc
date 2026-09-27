#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    double array[n];
    int i = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &array[i]);
    }

    int max_ind = 0;

    for (i = 1; i < n; i++)
    {
        if (fabs(array[max_ind]) < fabs(array[i]))
        {
            max_ind = i;
        }
    }

    printf("%d\n", max_ind + 1);

    double summ = 0;
    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (found == 1)
        {
            summ += array[i];
        }
        else if (array[i] > 0)
        {
            found = 1;
        }
    }

    printf("%lf\n", summ);

    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    double temp[n];
    int k = 0;

    for (i = 0; i < n; i++)
    {
        int integer_part = (int)array[i];

        if (integer_part >= a && integer_part <= b)
        {
            temp[k] = array[i];
            k++;
        }
    }

    for (i = 0; i < n; i++)
    {
        int integer_part = (int)array[i];

        if (integer_part < a || integer_part > b)
        {
            temp[k] = array[i];
            k++;
        }
    }

    for (i = 0; i < n; i++)
    {
        array[i] = temp[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%g ", array[i]);
    }

    return 0;
}
