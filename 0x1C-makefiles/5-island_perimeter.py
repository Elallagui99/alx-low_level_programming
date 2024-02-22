#!usr/bin/python3
"""define an island perimeter """


def island_perimeter(grid):
    """Return the perimiter of an island
    the grin represents water by 0 and land by 1
    grid is a list of integers
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size++
                if (j > 0 and grid[i][j - 1] == 1):
                    edges++
                if (i > 0 and grid[i - 1][j] == 1):
                    edges++
    return size * 4 - edges * 2
