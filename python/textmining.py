from collections import defaultdict, OrderedDict

def main():
    text = TD

    word_count = defaultdict(lambda: 0)
    for word in text.split():
        word_count[word] += 1
    print(word_count)
    for i, v in OrderedDict(sorted(word_count.items(), key=lambda t: t[1], reverse=True)).items():
        print(i, v)

if __name__ == '__main__':
    main()