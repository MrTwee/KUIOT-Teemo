def main():
    s = set({1, 2, 3, 1, 2, 3})
    s1 = {1, 2, 3, 1, 2, 3}

    print(s)
    print(s1)
    s.add(7)
    print(s)
    s.remove(1)
    print(s)
    s.update({11, 12, 13})
    s.update({14, 15, 16})
    print(s)
    # s.clear()
    # print(s)
    # s2 = s.union(s1)
    # s3 = s.intersection(s1)
    # s4 = s.difference(s1)
    # s5 = s1.difference(s)
    s2 = s | s1
    s3 = s & s1
    s4 = s - s1
    s5 = s1 - s

    print(f"Union of s and s1: {s2}")
    print(f"합집합 S and S1: {s3}")
    print(f"차집합 S - S1: {s4}")
    print(f"차집합 S1 - S: {s5}")

if __name__ == '__main__':
    main()