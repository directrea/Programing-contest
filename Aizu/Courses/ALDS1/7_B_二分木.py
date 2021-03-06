import io
import sys
_INPUT = """\
9
0 1 4
1 2 3
2 -1 -1
3 -1 -1
4 5 8
5 6 7
6 -1 -1
7 -1 -1
8 -1 -1
"""
# sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, id, child) -> None:
        self.id = id
        self.parent = -1
        self.child = child


def getSibling(node):
    if node.parent == -1:
        return -1
    else:
        parent_node = nodes[node.parent]
        for parent_node_child in parent_node.child:
            if parent_node_child != node.id and parent_node_child != -1:
                sibling_node = nodes[parent_node_child]
                return sibling_node.id
        return -1


def getDepth(node):
    depth_cnt = 0
    while node.parent != -1:
        depth_cnt += 1
        node = nodes[node.parent]
    return depth_cnt


def getDegree(node):
    degree_cnt = 0
    for child in node.child:
        if child != -1:
            degree_cnt += 1
    return degree_cnt


def getHeight(node, height):
    child = node.child
    if child[0] != -1:
        left = getHeight(nodes[child[0]], height+1)
    else:
        left = height
    if child[1] != -1:
        right = getHeight(nodes[child[1]], height+1)
    else:
        right = height
    return left if left > right else right


def makeTree(nodes):
    for node in nodes:
        child = node.child
        if child[0] != -1:
            nodes[child[0]].parent = node.id
        if child[1] != -1:
            nodes[child[1]].parent = node.id


def printNodes(nodes):
    for node in nodes:
        if node.parent == -1:
            type = "root"
        else:
            child = node.child
            if child[0] == -1 and child[1] == -1:
                type = "leaf"
            else:
                type = "internal node"
        print("node %d: parent = %d, sibling =  %d, degree =  %d, depth = %d, height = %d, %s" %
              (node.id, node.parent, getSibling(node), getDegree(node), getDepth(node), getHeight(node, 0), type))
        # print(node.id, node.parent, node.child)


N = int(input())
A = {}
for i in range(N):
    ls = [int(i) for i in input().split()]
    A[ls[0]] = ls[1:]
nodes = []
for i in range(N):
    nodes.append(Node(i, A[i]))
makeTree(nodes)
printNodes(nodes)
