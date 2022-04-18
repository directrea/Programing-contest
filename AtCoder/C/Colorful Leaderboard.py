import io
import sys
_INPUT = """\
4
2100 2500 2700 2700

"""
sys.stdin = io.StringIO(_INPUT)


def rate_allocate(rates, rate):


COLORS = 9
rates = [0 for _ in range(COLORS)]
