#!/usr/bin/python3

""" a function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Calculate the perimeter of the island"""
    # making the value which will geting returned
    perimeter = 0
    column = len(grid)
    row = len(grid[0])
    for a in range(column):
        for b in range(row):
            if grid[a][b] == 1:
                perimeter += 4
                if b and grid[a][b - 1] == 1:
                    perimeter -= 2
                if a and grid[a - 1][b] == 1:
                    perimeter -= 2

    return perimeter
