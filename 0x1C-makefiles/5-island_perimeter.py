#!/usr/bin/python3
"""A function that that returns the perimeter of the island
described in grid."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers.
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j + 1 < width and grid[i][j + 1] == 1:
                    edges += 1
                if i + 1 < height and grid[i + 1][j] == 1:
                    edges += 1
    return size * 4 - edges * 2
