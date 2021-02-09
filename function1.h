#include <iostream>
#include <cassert>
#include <stdlib.h>     /* atoi */

using namespace std;


void rec(int size, int x, bool* lines, bool* diag1, bool* diag2, int& count) {
	if (x == size) {
		// Solution is known here
		count++;
		return;
	}

	for (int y = 0; y < size; y++) {
		// If position threatened, go to next
		if (lines[y] || diag1[y + x] || diag2[y - x + size])
			continue;

		// position queen
		lines[y] = true;
		diag1[y + x] = true;
		diag2[y - x + size] = true;

		// search for next queen
		rec(size, x + 1, lines, diag1, diag2, count);

		// deposition queen
		lines[y] = false;
		diag1[y + x] = false;
		diag2[y - x + size] = false;
	}
}