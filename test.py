import io
import sys

_INPUT = """\

"""
sys.stdin = io.StringIO(_INPUT)


def beBinary(num):
    bins = []
    for i in range(len(bin(num)) - 2):
        if (num & (1 << i)):
            bins.append(i)
    return bins


def main():
    num = 100
    print(beBinary(num))
    return


if __name__ == "__main__":
    main()