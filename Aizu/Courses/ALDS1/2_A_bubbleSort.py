# import io
# import sys
# # _INPUT = """\
# # 5
# # 5 3 2 4 1
# # """
# # sys.stdin = io.StringIO(_INPUT)


def bubbleSort(A):
    swap_cnt = 0
    is_swap = 1
    while is_swap:
        is_swap = 0
        for i in range(1, len(A)):
            if A[i-1] > A[i]:
                A[i-1], A[i] = A[i], A[i-1]
                swap_cnt += 1
                is_swap = 1
    return swap_cnt


n = input()
A = list(map(int, input().split()))
swap_cnt = bubbleSort(A)
print(' '.join([str(n) for n in A]))

print("%d" % (swap_cnt))
