import io
import sys

_INPUT = """\
4 3 2

"""
sys.stdin = io.StringIO(_INPUT)


def main():
    N, A, B = map(int, input().split())

    vec = [[None for _ in range(B * N)] for _ in range(A * N)]
    vec[0][0] = False
    for i in range(len(vec) - 1):
        for j in range(len(vec[0]) - 1):
            if abs(i - (i)) + abs(j - (j + 1)) == 1:
                vec[i][j + 1] = not vec[i][j]

    return


if __name__ == "__main__":
    main()