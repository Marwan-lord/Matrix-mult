#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define ROWS 2
#define COLS 3


#define M 3
#define N 4
#define P 5


void matrix_mult(int c[M][P],
                 int a[M][N],
                 int b[N][P]);

int main()
{

    int a[ROWS][COLS];

    //printf("a[0][2] -> %d\n", a[0][2]);


    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("%d ", a[i][j]);
            
        }
    }


    int A[M][N] = {{1,2,3,4},{4,5,6,7},{8,9,10,11}};
    int B[N][P] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    int C[M][P] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

    matrix_mult(C,A,B);

    printf("\n\n\n");
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < P; j++)
        {
            printf("%d ", C[i][j]);
            
        }
    }






    return 0;
}
void matrix_mult(int c[M][P],
                 int a[M][N],
                 int b[N][P])
{

    for(int i=0; i < M; i++)
    {
        for(int j =0; j < P; j++)
        {
            c[i][j] = 0;
        }
    }

    for(int i=0; i < M; i++)
    {
        for(int j =0; j < P; j++)
        {
            for(int k =0; k < N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

}