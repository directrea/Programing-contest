import io
from re import search
import sys
_INPUT = """\
4
0 0
1 3 2 3 0
2 0
3 0
"""
# sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, id, childs):
        self.id = id
        self.parent = -1
        self.depth = 0
        self.childs = childs
        self.type = ""


def setDepth(node, depth):
    node.depth = depth
    for child in node.childs:
        setDepth(nodes[child], depth+1)


def searchRoot(nodes):
    for node in nodes:
        if node.parent == -1:
            return node


def setType(nodes):
    for node in nodes:
        if node.parent == -1:
            node.type = "root"
        else:
            if len(node.childs):
                node.type = "internal node"
            else:
                node.type = "leaf"


def makeTree(nodes):
    for node in nodes:
        childs = node.childs
        for child in childs:
            nodes[child].parent = node.id
    setDepth(searchRoot(nodes), 0)
    setType(nodes)


N = int(input())
nodes = []
A = {}
for _ in range(N):
    ls = [int(i) for i in input().split()]
    A[ls[0]] = ls[2:]

for i in range(N):
    nodes.append(Node(i, A[i]))

makeTree(nodes)
for node in nodes:
    print("node %d: parent = %d, depth = %d, %s," %
          (node.id, node.parent, node.depth, node.type), node.childs)
