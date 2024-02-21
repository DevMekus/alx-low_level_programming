#!/usr/bin/python3
"""An Island Perimeter measuring function"""


def island_perimeter(grid):
    """Return the perimeter of an island.
    Arguments:
        grid (list): A list of list of integers
    Returns:
        The perimeter of the island defined in grid.
    """
   
    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for index in range(height):
        for j in range(width):
            if grid[index][j] == 1:
                size += 1
                if (j > 0 and grid[index][j - 1] == 1):
                    edges += 1
                if (index > 0 and grid[index - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
