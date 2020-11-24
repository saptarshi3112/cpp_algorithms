// path to knight tour.
#include <iostream>
using namespace std;

#define size 8

bool isSafe(int maze[size][size], int x, int y) {
  return x >= 0 && x < size && y >= 0 && y < size;
}

bool solve(int maze[size][size], int x, int y) {

	// start from the safe condition
	if (x*y == 64) {
		return true;
	}

	if (isSafe(maze, x, y)) {
		// go ahead
	}

	return false;
}

int main() {

  int maze[size][size];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      maze[i][j] = -1;
    }
  }

  // mark the first index as 1. as begin parse

  return 0;
}

