import io
import sys
import queue
_INPUT = """\
\\//
"""
sys.stdin = io.StringIO(_INPUT)

S = input()
Q = queue()
pool = 0
for i, s in enumerate(S):
    print(i, s)
    if s == "\\":
        Q.push("\\")
    if s == "/":
        Q.get()
        pool += 0.5
