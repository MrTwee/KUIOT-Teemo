from collections import deque
from collections import OrderedDict

def main():
    deque_list = deque()
    for i in range(5):
        deque_list.append(i)
    print(deque_list)
    deque_list.appendleft(10)
    print(deque_list)
    deque_list.pop()
    print(deque_list)
    deque_list.popleft()
    print(deque_list)

    d = OrderedDict()
    d['x'] = 100
    d['y'] = 200
    d['z'] = 300
    d['l'] = 500

    for k, v in OrderedDict(sorted(d.items(),key=sort_by_key)).items():
        print(k, v)

    


    #Counter
    text = list("gallahad")
    c = Counter(text)
    print(c)

    # namedtuple
    Point = namedtuple('Point', ['x', 'y'])
    p = Point(x=11, y=22)
    print(p)
    print(p.x, p.y)
    
if __name__ == '__main__':
    main()