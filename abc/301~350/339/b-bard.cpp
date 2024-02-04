// いや解けないし、とー
#include <iostream>
#include <vector>

using namespace std;

enum Direction {
  UP,
  RIGHT,
  DOWN,
  LEFT
};

struct Grid {
  vector<char> cells;
  int width;
  int height;
};

Grid create_grid(int width, int height) {
  Grid grid;
  grid.width = width;
  grid.height = height;
  grid.cells.resize(width * height);
  for (int i = 0; i < width * height; i++) {
    grid.cells[i] = ' ';
  }
  return grid;
}

void set_position(Grid& grid, int x, int y) {
  grid.cells[x + y * grid.width] = 'X';
}

Direction turn(Direction direction) {
  switch (direction) {
    case UP:
      return RIGHT;
    case RIGHT:
      return DOWN;
    case DOWN:
      return LEFT;
    case LEFT:
      return UP;
  }
}

void move(Grid& grid, Direction direction) {
  int x = grid.cells[0] - 'X';
  int y = grid.cells[1] - 'X';
  switch (direction) {
    case UP:
      y--;
      break;
    case RIGHT:
      x++;
      break;
    case DOWN:
      y++;
      break;
    case LEFT:
      x--;
      break;
  }
  set_position(grid, x, y);
}

void simulate(Grid& grid, int n) {
  Direction direction = UP;
  for (int i = 0; i < n; i++) {
    grid.cells[grid.cells[0] - 'X'] = ' ';
    grid.cells[grid.cells[1] - 'X'] = 'X';
    direction = turn(direction);
    move(grid, direction);
  }
}

int main() {
  int width = 5;
  int height = 5;
  Grid grid = create_grid(width, height);
  set_position(grid, 0, 0);
  int n = 10;
  simulate(grid, n);
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      cout << grid.cells[i + j * width];
    }
    cout << endl;
  }
  return 0;
}
