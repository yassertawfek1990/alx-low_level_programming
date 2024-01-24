#!/usr/bin/python3
"""Define function"""


def island_perimeter(grid):
    """Returns island.

    0 and land 1.

    Args:
        grid: An island.
    Return:
        The grid.
    """
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0
    for x in range(h):
        for c in range(w):
            if grid[x][c] == 1:
                s += 1
                if (c > 0 and grid[x][c - 1] == 1):
                    e += 1
                if (x > 0 and grid[x - 1][c] == 1):
                    e += 1
    return s * 4 - e * 2
