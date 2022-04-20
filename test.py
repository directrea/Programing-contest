def rate_allocate(rates, rate):
    SEP = 400
    MAX_ALLOCATE = 3200
    rate_sep = SEP
    idx = 0
    if MAX_ALLOCATE <= rate:
        rates[-1] += 1
        return
    while rate_sep <= MAX_ALLOCATE:
        if rate < rate_sep:
            rates[idx] += 1
            break
        idx += 1
        rate_sep += SEP


COLORS = 9
rates = [0 for _ in range(COLORS)]

for i in range(1, 4800):
    rate_allocate(rates, i)
print(rates)
