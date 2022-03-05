# import io
# import sys
# _INPUT = """\
# 6
# 5 2 4 6 1 3
# """
# sys.stdin = io.StringIO(_INPUT)

n = int(input())
A = list(map(int, input().split()))


def selectionSort(A):
    exchange_cnt = 0
    minidx = 0
    for i in range(len(A)):
        minj = float("inf")
        for j in range(i, len(A)):
            if A[j] < minj:
                minj = A[j]
                minidx = j
        if i != minidx:
            exchange_cnt += 1
            A[i], A[minidx] = A[minidx], A[i]
    return exchange_cnt


exchange_cnt = selectionSort(A)
print(" ".join([str(n) for n in A]))
print("%d" % (exchange_cnt))
