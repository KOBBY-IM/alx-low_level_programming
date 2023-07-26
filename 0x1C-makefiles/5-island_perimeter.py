#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """Calculates the perimeter of the island described in grid.

    Args:
        grid: A list of lists of integers representing the island.

    Returns:
        The perimeter of the island.
    """

    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1

    return perimeter
