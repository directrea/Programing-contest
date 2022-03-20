import io
import sys
from collections import deque
_INPUT = """\
5
1 2 3 4 5
3 2 4 1 5
"""
sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, id, parent=-1) -> None:
        self.id = id
        self.parent = parent
        self.child = [None, None]


N = int(input())
Preorder = [int(i)-1 for i in input().split()]
Inorder = [int(i)-1 for i in input().split()]


def restoreTree():
    # 根の決定
    pre_idx = 0
    root = Node(Preorder[pre_idx])
    # 次の要素
    pre_idx += 1
    pre_id = Preorder[pre_idx]
    node = Node(pre_id)
    node.parent = root
    # In内のrootのidxを取得
    in_root_idx = Inorder.index(root.id)
    # ノードがrootより右か左かどうか
    node_idx = Inorder.index(node.id)
    # 任意の条件で右か左に追加
    if node_idx < in_root_idx:
        root.child[0] = node
    else:
        root.child[1] = node
