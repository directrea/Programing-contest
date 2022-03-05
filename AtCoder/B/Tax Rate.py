import io
from re import M
import sys
_INPUT = """\
1079


"""
sys.stdin = io.StringIO(_INPUT)


def taxRate(money, rate):
    m = money/rate
    return m


m = int(input())
print(taxRate(m, 1.08))
