import io
import sys

_INPUT = """\

"""
sys.stdin = io.StringIO(_INPUT)


def beBinary(num):
    maxbin = 0
    for i in range(32):
        if ((1 << i) < num):
            maxbin = i
        else:
            break

    bins = []
    for i in range(maxbin+1)[::-1]:
        if (num & (1 << i)):
            bins.append(1)
        else:
            bins.append(0)
    return bins


def main():
    for i in range(10):
        print(beBinary(i))
    return


if __name__ == "__main__":
    main()