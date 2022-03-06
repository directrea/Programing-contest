import io
import sys
_INPUT = """\
5 100
p1 150
p2 80
p3 200
p4 350
p5 20
"""
sys.stdin = io.StringIO(_INPUT)


class Queue():
    def __init__(self, arg_size) -> None:
        self.arg_size = arg_size
        self.items = [None]*arg_size
        self.head = 0
        self.tail = 0

    def isEmpty(self):
        result = True if self.head == self.tail else False
        return result

    def enqueue(self, item):
        self.tail += 1
        tail = self.tail % self.arg_size
        self.items[tail] = item

    def dequeue(self):
        if self.isEmpty():
            return None
        self.head += 1
        head = self.head % self.arg_size
        result = self.items[head]
        return result


class RoundRobine(Queue):
    def __init__(self, arg_size):
        self.processes = Queue(arg_size)
        self.times = Queue(arg_size)

    def RoundRobine(self, quantam):
        sum_ms = 0
        while not self.times.isEmpty():
            p = self.processes.dequeue()
            t = self.times.dequeue()
            for i in range(1, quantam+1):
                sum_ms += 1
                t -= 1
                if t == 0:
                    print("%s %d" % (p, sum_ms))
                    break
            if t > 0:
                self.processes.enqueue(p)
                self.times.enqueue(t)


N, Q = map(int, input().split())

pes = []
for _ in range(N):
    p = list(map(str, input().split()))
    pes.append([p[0], int(p[1])])

SIZE = N
rb = RoundRobine(SIZE)

for p in pes:
    rb.processes.enqueue(p[0])
    rb.times.enqueue(p[1])

rb.RoundRobine(Q)
