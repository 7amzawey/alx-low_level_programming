#!/usr/bin/python3
"""
this module is for defining the island_perimeter function
"""
def island_perimeter(grid):
    """this function will calculate the perimeter of the island which is 
    represneted by ones
    """
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j + 1] == 0:
                    per += 1
                if grid[i][j - 1] == 0:
                    per += 1
                if grid[i - 1][j] == 0:
                    per += 1
                if grid[i + 1][j] == 0:
                     per += 1
            else:
                pass
    return (per)
