import io
import sys
# _INPUT = """\
# 5 100
# p1 150
# p2 80
# p3 200
# p4 350
# p5 20
# """
# sys.stdin = io.StringIO(_INPUT)


class Queue():
    def __init__(self, arg_size) -> None:
        self.items = [None]*arg_size
        self.head = 0
        self.tail = 0

    def isEmpty(self):
        result = True if self.head == self.tail else False
        return result

    def push(self, item):
        self.tail += 1
        self.items[self.tail] = item

    def pop(self):
        if self.isEmpty():
            return None
        self.head += 1
        result = self.items[self.head]
        return result


class RoundRobine(Queue):
    def __init__(self, arg_size):
        self.processes = Queue(arg_size)
        self.times = Queue(arg_size)

    def RoundRobine(self, quantam):
        sum_ms = 0
        while not self.times.isEmpty():
            p = self.processes.pop()
            t = self.times.pop()
            for i in range(1, quantam+1):
                sum_ms += 1
                t -= 1
                if t == 0:
                    print("p%d %d" % (p, sum_ms))
                    break
            if t > 0:
                self.processes.push(p)
                self.times.push(t)


N, Q = map(int, input().split())

pes = []
for _ in range(N):
    p = list(map(str, input().split()))
    pes.append([int(p[0][1:]), int(p[1])])

SIZE = 2000
rb = RoundRobine(SIZE)

for p in pes:
    rb.processes.push(p[0])
    rb.times.push(p[1])

rb.RoundRobine(Q)
