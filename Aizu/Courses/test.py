import io
import sys

_INPUT = """\
insert 8
insert 2
extract
insert 10
extract
insert 11
extract
extract
end
"""
sys.stdin = io.StringIO(_INPUT)

input = sys.stdin.readline
print(A)
