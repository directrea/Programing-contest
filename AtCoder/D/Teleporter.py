import io
import sys

_INPUT = """\
4 5
3 2 4 1
"""
sys.stdin = io.StringIO(_INPUT)


def beBinary(num):
    maxbin = 0
    for i in range(32):
        if (num < (1 << i)):
            maxbin = i
        else:
            break

    bins = []
    for i in range(maxbin)[::-1]:
        if (num & (1 << i)):
            bins.append(1)
        else:
            bins.append(0)
    return bins


def main():
    N, K = map(int, input().split())
    dp = [[0 for _ in range(N)] for _ in range(32)]
    dp[0] = [int(i) - 1 for i in input().split()]

    for i in range(len(dp) - 1):
        for j in range(len(dp[0])):
            dp[i + 1][j] = dp[i][dp[i][j]]
    Kbin = beBinary(K)
    return


if __name__ == "__main__":
    main()