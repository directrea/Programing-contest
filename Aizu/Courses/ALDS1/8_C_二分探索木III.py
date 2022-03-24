import io
import sys
_INPUT = """\
43
insert 30
insert 17
insert 88
insert 53
insert 5
insert 20
insert 18
insert 28
insert 27
insert 60
print
find -1
find 2
find 3
find 4
find 5
find 6
find 10
find 17
find 28
find 29
find 30
find 31
find 50
find 51
find 52
find 53
find 54
find 60
find 88
find 89
insert 2000000000
insert 55
insert 63
insert -1
insert 8
print
delete 53
delete 2000000000
delete 20
delete 5
delete 8
print
"""
sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, key, parent=None) -> None:
        self.key = key
        self.parent = parent
        self.left = None
        self.right = None


class BinaryTree():
    def __init__(self):
        self.T = None
        self.len = 0

    def insert(self, key):
        if self.len == 0:
            self.T = Node(key)
            self.len += 1
        else:
            node = self.T
            while True:
                if key < node.key:
                    if node.left == None:
                        new_node = Node(key, node)
                        node.left = new_node
                        self.len += 1
                        return
                    else:
                        node = node.left
                else:
                    if node.right == None:
                        new_node = Node(key, node)
                        node.right = new_node
                        self.len += 1
                        return
                    else:
                        node = node.right

    def find(self, key):
        node = self.T
        if node == None:
            return None
        while True:
            if key == node.key:
                return node
            elif key < node.key:
                if node.left != None:
                    node = node.left
                else:
                    return None
            else:
                if node.right != None:
                    node = node.right
                else:
                    return None

    def cnt_child(self, node):
        cnt_child = 0
        left = node.left
        right = node.right
        if left != None:
            cnt_child += 1
        if right != None:
            cnt_child += 1
        return cnt_child

    def delete(self, key, node=None):
        if node:
            pass
        else:
            node = self.find(key)
        if node:
            parent = node.parent
            cnt_child = self.cnt_child(node)
            match cnt_child:
                case 2:
                    child = node.right
                    node.key = child.key
                    self.delete(key, child)
                case 1:
                    child = None
                    if node.left:
                        child = node.left
                    else:
                        child = node.right
                    if child.key < parent.key:
                        parent.left = child
                        child.parent = parent
                    else:
                        parent.right = child
                        child.parent = parent
                case 0:
                    if parent and node.key < parent.key:
                        parent.left = None
                    else:
                        parent.right = None

    def inOrder(self, root=None):
        if root == None:
            root = self.T
        if root.left != None:
            self.inOrder(root.left)
        print("", root.key, end="")
        if root.right != None:
            self.inOrder(root.right)

    def preOrder(self, root=None):
        if root == None:
            root = self.T
        print("", root.key, end="")
        if root.left != None:
            self.preOrder(root.left)
        if root.right != None:
            self.preOrder(root.right)

    def print(self):
        self.inOrder()
        print()
        self.preOrder()
        print()


I_L = sys.stdin.read().splitlines()
bt = BinaryTree()
for i in range(len(I_L)):
    if i:
        ls = I_L[i].split()
        if ls[0] == "insert":
            bt.insert(int(ls[1]))
        elif ls[0] == "find":
            ans = "yes" if bt.find(int(ls[1])) else "no"
            print(ans)
        elif ls[0] == "delete":
            bt.delete(int(ls[1]))
        else:
            bt.print()
    else:
        N = int(I_L[i])
