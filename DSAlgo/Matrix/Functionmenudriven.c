#include <stdio.h>
#include <stdlib.h>

int* CreateMatrix (int *B, int n)
{
    printf ("Enter non-zero elements of Diagonal Matrix:\n");
    for (int k = 0; k < n; k++)
    {
        scanf ("%d", &B[k]);
    }
}

void SetElement (int *B, int y, int i, int j)
{
    if (i == j)
        B[i - 1] = y;
}

void GetElement (int *B, int i, int j)
{
    if (i == j)
        printf ("%d ", B[i - 1]);
    else
        printf ("0 ");
}

void DisplayMatrix (int *B, int n)
{
    printf ("Matrix is: \n");
    for (int r = 0; r < n; r++)
    {
       for (int c = 0; c < n; c++)
       {
         if (r == c)
         {
             printf ("%d ", B[r]);
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
    int n, ch, y, i, j;

    printf ("Enter Dimension of Matrix: ");
    scanf ("%d", &n);
    int *B = (int *) malloc (n * sizeof (int));

    do
    {
        printf ("\n1. Create Matrix\n");
        printf ("2. Get Matrix Element\n");
        printf ("3. Set Matrix Element\n");
        printf ("4. Display Matrix\n");
        printf ("0. Exit\n\n");

        printf ("Enter choice: ");
        scanf ("%d", &ch);

        switch (ch)
        {
         case 1:
             CreateMatrix (B, n);
             break;

         case 2:
             printf ("Enter Indices: \n");
             scanf ("%d%d", &i, &j);
             GetElement (B, i, j);
             break;

         case 3:
             printf ("Enter row, column and element:\n");
             scanf ("%d%d%d", &i, &j, &y);
             SetElement (B, y, i, j);
             break;
        
         case 4:
             DisplayMatrix (B, n);
             break;
        
         printf ("Enter choice: ");
         scanf ("%d", &ch);
        }
    }
    while (ch > 0);
    return 0;
}