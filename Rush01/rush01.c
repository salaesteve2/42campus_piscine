#define N 4
#include <stdio.h>

int sudoku(int matrix [N][N], int i, int j)
{
    int a;
    
    a = 1;
    while (j - a >= 0)
    {
        if(matrix[i][j] == matrix[i][j - a])
            return 1;
        a++;
    }
    a = 1;
    while(i - a >= 0)
    {
        if(matrix[i][j] == matrix[i - a][j])
            return 1;
        i++;
    }
    return 0;
}

int ft_row_solution(int matrix[N][N], int rowxleft, int rowxright, int row)
{
    int count = 1;
    int max;
    int i = 0;
    max = matrix[row][i];
    while (i < 4)
    {
        if (max < matrix[row][i + 1])
        {
            count++;
            max = matrix[row][i + i];
        }
        i++;
    }
    if (count != rowxleft)
        return (1);
    i = 3;
    max = matrix[row][i];
    count = 1;
    while (i > 0)
    {
        if (max < matrix[row][i - 1])
        {
            count++;
            max = matrix[row][i - 1];
        }
        i--;
    }
    if (count != rowxright)
        return (1);
    return (0);
}

int ft_col_solution(int matrix[N][N], int colup, int coldown, int col)
{
    int    count = 1;
    int    max;
    int j = 0;

    max = matrix[col][0];
    while (j < 4)
    {
        if (max < matrix[col][j+1])
        {
            count++;
            max = matrix[col][j+1];
        }
        j++;
    }
    if (count != colup)
        return (1);
    j = 3;
    max = matrix[col][3];
    count = 1;
    while (j > 0)
    {
        if (max < matrix[col][j+1])
        {
            count++;
            max = matrix[col][j+1];
        }
        j--;
    }
    if (count != coldown)
        return (1);

    return (0);
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

int    ft_is_solution(int matrix [N][N], int col1up, int col1down,int col2up, int col2down, int col3up,int col3down,int col4up, int col4down,int row1left, int row1right,int row2left, int row2right, int row3left, int row3right, int row4left,int row4right )
{
    if (ft_row_solution(matrix, row1left, row1right, 0) == 1)
        return (1);
    if (ft_row_solution(matrix, row2left, row2right, 1) == 1)
        return (1);
    if (ft_row_solution(matrix, row3left, row3right, 2) == 1)
        return (1);
    if (ft_row_solution(matrix, row4left, row4right, 3) == 1)
        return (1);
    if (ft_col_solution(matrix, col1up, col1down, 0) == 1)
        return (1);
    if (ft_col_solution(matrix, col2up, col2down, 1) == 1)
        return (1);
    if (ft_col_solution(matrix, col3up, col3down, 2) == 1)
        return (1);
    if (ft_col_solution(matrix, col4up, col4down, 3) == 1)
        return (1);
    return (0);
}

void ft_rush(int matrix[N][N],int i , int j, int aux,int col1up, int col1down,int col2up, int col2down, int col3up,int col3down,int col4up, int col4down,int row1left, int row1right,int row2left, int row2right, int row3left, int row3right, int row4left,int row4right)
{
    if((i == N-1   && j == N-1) && ft_is_solution(matrix,col1up, col1down,col2up,col2down,col3up,col3down,col4up,col4down,row1left,row1right,row2left, row2right, row3left, row3right, row4left,row4right))
    {
        printM(matrix);
    }
    else
    {
            if (sudoku(matrix, i, j) == 0)
            {
                matrix[i][j] = aux;

                if(aux == 4)
                {
                    aux = 1;
                }
                while (i < 4 && aux < 4)
                {
                    while (j < 4 && aux < 4)
                    {
                        j++;
                        ft_rush(matrix, i, j,aux + 1, col1up, col1down, col2up, col2down, col3up, col3down, col4up, col4down,row1left,row1right, row2left, row2right, row3left, row3right, row4left, row4right);
                    }
                    j = 0;
                    i++;
                }
            }
        }
}
int main()
{
    int matriz  [N][N] = {{0, 0, 0, 0},
                        {0, 0, 0, 0}, 
                        {0, 0, 0, 0}, 
                        {0, 0, 0, 0}};

    ft_rush(matriz,0,0,1,4, 3 ,2, 1, 1, 2, 2, 2, 4 ,3 ,2 ,1 ,1 ,2 ,2 ,2);
}