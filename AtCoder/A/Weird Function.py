import io
import sys

# _INPUT = """\
# 10
# """
# sys.stdin = io.StringIO(_INPUT)

t = int(input())


def f(x): return x*x + 2*x+3


f_t = f(t)
f_t_t = f_t+t
ff_t_t = f(f_t_t)
ff_t = f(f_t)
ans = f(ff_t_t + ff_t)

print(ans)
