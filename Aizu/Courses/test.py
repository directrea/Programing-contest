def rec(n):
    if n == 10:
        return "yes"
    return rec(n + 1)


print(rec(0))