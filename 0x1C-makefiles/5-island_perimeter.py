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
    for my_list in grid:
        for cell in my_list:
            if not isinstance(cell, int):
                raise TypeError("elements of grid should be integers")
            else:
                if cell > 0:
                    cnt += 1
    return "{}".format(2 * (1 + cnt))
