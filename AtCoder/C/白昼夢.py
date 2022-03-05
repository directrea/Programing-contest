
import re
import io
import sys

# _INPUT = """\
# dreamerer

# """
# sys.stdin = io.StringIO(_INPUT)

s = input()

s = s[::-1]
ary = ['dreamer', 'eraser', 'dream', 'erase']

for i in range(len(ary)):
    ary[i] = ary[i][::-1]
s = re.sub(ary[0]+'|'+ary[1]+'|'+ary[2]+'|'+ary[3], '', s)
if len(s) == 0:
    print('YES')
else:
    print('NO')
