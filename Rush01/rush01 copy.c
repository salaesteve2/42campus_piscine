#define N 4
#include <stdio.h>

int ft_columnas(int matrix [N][N])
{
    int i = 1;
    int a = 0;
    int b = 0;
    int j = 0;
   while(a < 4)
   {
       while(b < 4)
        {
            if(matrix[i][j] == matrix[b][j] && b != i)
            {
                return 1;
            }
            if(b == 3 && i != 3)
            {
                i++;
                b = 0;
            }
            b++;
        }
        a++;
        b = 0;
        j++;
   }
    return 0;
}

int ft_filas(int matrix [N][N])
{
    int i = 0;
    int j = 1;
    int b = 0;
    int a = 0;

    while(a < 4)
    {
        while (b < 4)
        {
            if(matrix[i][j] == matrix[i][b] && b != j)
            {
                return 1;
            }
            if(b == 3 && j != 3)
            {
                j++;
                b = 0;
            }
            b++;
        }
        i++;
        b = 0;
        a++;
    }
    
    return 0;
}
void printM(int matrix[N][N])
{
    for(int i =0;i<N; i++){
        for(int j=0; j<N; j++){
            printf("\t%d\t",matrix[i][j]);
            }
            printf("\n");
    }
    printf("\n");
}

void ft_generate_4_corner_up_left(int matrix[N][N],int col1up,int row1left)
{
    int a = 0;
    int i = 0;
    int j = 0;
    int s = 1;
    if(col1up == 4 && row1left == 4)
    {
        while(a < 4)
        {
            matrix[i][j] = s;
            s++;
            i++;
            a++;
        }
        a = 0;
        s = 1;
        i = 0;
        while(a < 4)
        {
            matrix[i][j] = s;
            s++;
            j++;
            a++;
        }
    }
}

void ft_generate_4_corner_down_letf(int matrix[N][N],int col1down,int row4left)
{
    int a = 0;
    int i = 3;
    int j = 0;
    int s = 1;
    if(col1down == 4 && row4left == 4)
    {
        while(a < 4)
        {
            matrix[i][j] = s;
            s++;
            a++;
            i--;
        }
        a = 0;
        s = 4;
        j = 3;
        i = 3;
        while(a < 4)
        {
            matrix[i][j] = s;
            s--;
            j--;
            a++;
        }
    }
}

void ft_reset_array(int matrix[N][N])
{
    int i;
    int j;

    i = 0;
    while(i < 4)
    {
        j = 0;
        while(j < 4)
        {
            matrix[i][j] = 0;
            j++;
        }
        i++;
    }
}

void ft_rush(int matrix[N][N],int col1up, int col1down,int col2up, int col2down, int col3up,int col3down,int col4up, int col4down,int row1left, int row1right,int row2left, int row2right, int row3left, int row3right, int row4left,int row4right)
{
    
    ft_reset_array(matrix);
    //ft_generate_4_corner_up_left(matrix,col1up,row1left);
    ft_generate_4_corner_down_letf(matrix,col1down,row4left);
    printM(matrix);
    if(ft_filas(matrix) == 0 && ft_columnas(matrix) == 0)
    {
        printM(matrix);
    }
}

int main()
{
    int matriz  [N][N];/*= {{1, 2, 3, 4}, 
                         {2, 3, 4, 1}, 
                         {3, 4, 1, 2}, 
                         {4, 1, 2, 3}};*/

    ft_rush(matriz,4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4);
}