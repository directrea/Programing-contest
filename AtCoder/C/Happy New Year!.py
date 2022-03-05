import io
import sys
import numpy as np

# _INPUT = """\
# 923423423420220108
# """
# sys.stdin = io.StringIO(_INPUT)

n = int(input())

print(2 * int(format(n, 'b')))
