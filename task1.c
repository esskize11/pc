printf("x\tF\n");

int wholeA = (int)a;
int wholeB = (int)b;
int wholeC = (int)c;

int result1 = wholeA | wholeB;
int result2 = result1 & wholeC;

while (x <= xk)
{
    if (x < 0.6 && b + c != 0)
    {
        F = a * x * x + b * b + c;
    }
    else if (x > 0.6 && b + c == 0)
    {
        F = (x - a) / (x - c);
    }
    else
    {
        F = x / c + c / a;
    }

    if (result2 != 0)
    {
        printf("%.2f\t%.2f\n", x, F);
    }
    else
    {
        printf("%.2f\t%d\n", x, (int)F);
    }

    x = x + dx;
}

return 0;
}
