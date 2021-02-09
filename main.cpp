#include <iostream>
#include <cassert>
#include <stdlib.h>
#include "function1.h"
main(int argc, char** args)
{
	int size = (argc > 1) ? atoi(args[1]) : 8;
	int count = 0;
	bool lines[size];
	bool diag1[size * 2];
	bool diag2[size * 2];

	// Initialize to false
	for (int i = 0; i < size; i++)
		lines[i] = false;
	for (int i = 0; i < size * 2; i++)
		diag1[i] = diag2[i] = false;

	// Search
	cout << "Started search" << endl;
	rec(size, 0, lines, diag1, diag2, count);
	cout << size << "-Queens: " << count << endl;
}