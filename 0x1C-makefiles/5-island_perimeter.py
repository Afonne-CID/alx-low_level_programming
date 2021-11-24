#!/usr/bin/python3
"""Defines a function that returns the perimeter of the island
described in grid
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid

    Args:
        grid (list of list of int): A list of list of integers

    Raise:
        TypeError: If `grid` is not a list of lists of integers
        TypeError: If an element of `grid` is not an integer
    """
    if type(grid) is not list:
        raise TypeError("grid can only be a list of lists of int")
    if type(grid[0]) is not list:
        raise TypeError("grid should be a list of lists of int")

    cnt = 0
    breadth = 0
    tmp = 0
    for length in range(len(grid)):
        for w in range(len(grid[0])):
            if not isinstance(grid[length][w], int):
                raise TypeError("elements of grid should be integers")
            else:
                if grid[length][w] == 1:
                    cnt += 1
                if (w > 0 and grid[length][w] == 1):
                    if ((grid[length][w - 1] == 1)
                            and (grid[length + 1][w] == 1)
                            or (grid[length + 1][w - 1] == 1)):
                        tmp = length
                    if length == tmp:
                        breadth += 1
    if (cnt > 0 and breadth == 0):
        breadth = 1
    return "{}".format(2 * (breadth + cnt))
