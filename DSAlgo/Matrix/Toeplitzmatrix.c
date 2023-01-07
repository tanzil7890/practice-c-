#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int *A;
    int n;
};

void Set (struct Matrix *m, int i, int j, int y)
{
    if (i <= j)
    {
        m->A[j - i] = y;
    }
    if (i > j)
    {
        m->A[m->n + i - j - 1] = y;
    }
}

int Get (struct Matrix m, int i, int j)
{
    if (i <= j)
    {
        return m.A[j - i];
    }
    if (i > j)
    {
        return m.A[m.n + i - j - 1];
    }
    return 0;
}

void Display (struct Matrix m)
{
    int i, j;

    printf ("\nMatrix is: \n");

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
           if (i <= j)
           {
              printf ("%d ", m.A[j - i]);
           }
           else if (i > j)
           {
              printf ("%d ", m.A[m.n + i - j - 1]);
           }
           else
           {
              printf ("0 ");
           }
        }
        printf ("\n");
    }
}

int main ()
{
    struct Matrix M;
    int i, j, y;

    printf ("Enter Dimension of Matrix: ");
    scanf ("%d", &M.n);
    M.A = (int *) malloc ((2 * M.n - 1) * sizeof (int));

    printf ("Enter all the elements of the matrix:\n");
    for (i = 1; i <= M.n; i++)
    {
        for (j = 1; j <= M.n; j++)
        {
            scanf ("%d", &y);
            Set (&M, i, j, y);
        }
    }

    Display (M);
}