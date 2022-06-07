import io
import sys
_INPUT = """\
20
SRSRSSRSSSRSRRRRRSRR

"""
# sys.stdin = io.StringIO(_INPUT)

dir = "E"
point = [0, 0]

N = int(input())
for s in input():
    if s == "S":
        if dir == "W":
            point[0] -= 1
        elif dir == "N":
            point[1] += 1
        elif dir == "E":
            point[0] += 1
        else:
            point[1] -= 1
    else:
        if dir == "W":
            dir = "N"
        elif dir == "N":
            dir = "E"
        elif dir == "E":
            dir = "south"
        elif dir == "south":
            dir = "W"
print(*point)
