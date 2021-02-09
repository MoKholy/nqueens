#include <iostream>
#include <cassert>
#include <stdlib.h> 
#define N 4 
#include <stdbool.h> 
#include <stdio.h> 

using namespace std;

void printSolution(int board[N][N]);

bool isSafe(int board[N][N], int row, int col);

bool solveNQUtil(int board[N][N], int col);

	
