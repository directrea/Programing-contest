import io
import sys
_INPUT = """\
5
0 1 4
1 2 3
2 -1 -1
3 -1 -1
4 -1 -1
"""
sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, id, child):
        self.id = id
        self.parent = -1
        self.child = child


def makeTree(nodes):
    for node in nodes:
        child = node.child
        for c in child:
            if c != -1:
                nodes[c].parent = node.id


def printNodes(nodes):
    for node in nodes:
        print("id %d: parent = %d," %
              (node.id, node.parent), node.child)


pro_ary = []


def preOrder(root, nodes):
    pro_ary.append(root.id)
    child = root.child
    if child[0] != -1:
        preOrder(nodes[child[0]], nodes)
    if child[1] != -1:
        preOrder(nodes[child[1]], nodes)


in_ary = []


def inOrder(root, nodes):
    child = root.child
    if child[0] != -1:
        inOrder(nodes[child[0]], nodes)
    in_ary.append(root.id)
    if child[1] != -1:
        inOrder(nodes[child[1]], nodes)


post_ary = []


def postOrder(root, nodes):
    child = root.child
    if child[0] != -1:
        postOrder(nodes[child[0]], nodes)
    if child[1] != -1:
        postOrder(nodes[child[1]], nodes)
    post_ary.append(root.id)


def searchRoot(nodes):
    for node in nodes:
        if node.parent == -1:
            return node


N = int(input())
A = {}
for _ in range(N):
    ls = [int(i) for i in input().split()]
    A[ls[0]] = ls[1:]
# print(A)

nodes = []
for i in range(N):
    nodes.append(Node(i, A[i]))

makeTree(nodes)
# printNodes(nodes)
root = searchRoot(nodes)
print("Preorder")
preOrder(root, nodes)
print("", *pro_ary)
print("Inorder")
inOrder(root, nodes)
print("", *in_ary)
print("Postorder")
postOrder(root, nodes)
print("", *post_ary)
