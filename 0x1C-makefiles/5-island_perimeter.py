#!/usr/bin/python3
"""
A function that returns the perimeter of an island
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of an island
    """

    height = 0
    width = 0
    if len(grid) > 0:
        """Getting the width"""
        y = len(grid)
        for i in range(y):
            if width > 1:
                break
            x = len(grid[i])
            for j in range(x):
                width += grid[i][j]
            if width <= 1:
                width = 0
            else:
                break

        """Getting the height"""
        x = len(grid[0])
        for i in range(x):
            if height > 1:
                break
            for j in range(y):
                height += grid[j][i]
            if height <= 1:
                height = 0
            else:
                break
    perimeter = 2 * (width + height)
    return perimeter
