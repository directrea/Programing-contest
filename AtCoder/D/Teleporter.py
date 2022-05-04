import io
import sys


def beBinary(num):
    bins = []
    for i in range(len(bin(num)) - 2):
        if (num & (1 << i)):
            bins.append(i)
    return bins


def main():
    N, K = map(int, input().split())
    dp = [[0 for _ in range(N)] for _ in range(len(bin(K)) - 2)]
    dp[0] = [int(i) - 1 for i in input().split()]

    for i in range(len(dp) - 1):
        for j in range(len(dp[0])):
            dp[i + 1][j] = dp[i][dp[i][j]]
    Kbin = beBinary(K)
    idx = 0
    for m in Kbin:
        idx = dp[m][idx]
    print(idx + 1)
    return


if __name__ == "__main__":
    main()