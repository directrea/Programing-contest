import io
import sys

# _INPUT = """\
# 5 3
# tokyo kanda akiba okachi ueno
# tokyo akiba ueno
# """
# sys.stdin = io.StringIO(_INPUT)

n, m = map(int, input().split())
station = list(map(str, input().split()))
express = set(list(map(str, input().split())))

for i in station:
    print('Yes' if i in express else 'No')
