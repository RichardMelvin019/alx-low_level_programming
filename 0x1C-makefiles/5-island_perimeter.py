#!/usr/bin/python3
"""Script that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    for row in range(rows):
        for column in range(columns):
            # only if Cell has value(land)
            if grid[row][column]:
                # if it's first row or previous cell in that row is water(0)
                if (row - 1 < 0 or grid[row - 1][column] == 0):
                    perimeter += 1
                # if it's last row or next cell in that row is water(0)
                if (row + 1 >= rows or grid[row + 1][column] == 0):
                    perimeter += 1
                # if first column or previous cell in that column is water(0)
                if (column - 1 < 0 or grid[row][column - 1] == 0):
                    perimeter += 1
                # if last column or next cell in that column is water(0)
                if (column + 1 >= columns or grid[row][column + 1] == 0):
                    perimeter += 1
    return perimeter
