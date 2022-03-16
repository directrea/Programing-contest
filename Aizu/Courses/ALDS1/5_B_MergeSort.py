def merge(A, L, M, R):
    global cnt, INF
    L_ary = A[L:M] + [INF]
    R_ary = A[M:R] + [INF]
    L_idx, R_idx = 0, 0
    for i in range(L, R):
        cnt += 1
        if L_ary[L_idx] <= R_ary[R_idx]:
            A[i] = L_ary[L_idx]
            L_idx += 1
        else:
            A[i] = R_ary[R_idx]
            R_idx += 1


def mergeSort(A, L, R):
    if L + 1 < R:
        mid = (L+R) // 2
        mergeSort(A, L, mid)
        mergeSort(A, mid, R)
        merge(A, L, mid, R)


n = int(input())
INF = 10**9
A = [int(i) for i in input().split()]
cnt = 0
mergeSort(A, 0, len(A))
print(*A)
print(cnt)
