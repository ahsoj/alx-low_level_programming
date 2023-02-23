#!/usr/bin/python3


def island_perimeter(grid):
    """
        grid: Listint
        0: represent a water zone
        1: represent a land zone
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0
    
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i-1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2

