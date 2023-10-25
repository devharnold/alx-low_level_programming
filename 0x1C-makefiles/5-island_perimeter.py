#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A list of lists of integers representing the island grid.

    Returns:
    int: The perimeter of the island.

    Attributes:
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """

    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for a in range(rows):
        for b in range(cols):
            if grid[a][b] == 1:
                perimeter += 4  
                if a > 0 and grid[a - 1][b] == 1:
                    perimeter -= 2  
                if b > 0 and grid[a][b - 1] == 1:
                    perimeter -= 2 

    return perimeter
