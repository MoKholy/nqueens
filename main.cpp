#define N 4 
#include <stdbool.h> 
#include <stdio.h> 
#include "function1.h"
int main()
{
    int board[N][N] = { { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 } };

    if (solveNQUtil(board, 0) == false) {
        printf("Solution does not exist");
    }
    printSolution(board);
	return 0;
}