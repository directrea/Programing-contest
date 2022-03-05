import time


def isprime(n):
    for i in range(2, int(n)):
        if n % i == 0:
            return False
    return True


def isprimeHalf(n):
    for i in range(2, int(n/2)):
        if n % i == 0:
            return False
    return True


def isprimeOdd(n):
    for i in range(3, int(n/2), 2):
        if n % i == 0:
            return False
    return True


num = 104729
start_time = time.perf_counter()
print(isprime(num))
end_time = time.perf_counter()
print('愚直', end_time - start_time)

start_time = time.perf_counter()
print(isprimeHalf(num))
end_time = time.perf_counter()
print('半分', end_time - start_time)

start_time = time.perf_counter()
print(isprimeOdd(num))
end_time = time.perf_counter()
print('奇数', end_time - start_time)
