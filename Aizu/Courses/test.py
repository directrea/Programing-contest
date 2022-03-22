class Node():
    def __init__(self, key, parent=None) -> None:
        self.key = key
        self.parent = parent
        self.child = None


root = Node(1)

root.child = Node(2, root)

node = root.child
del node

del root.child
pass
