import numpy as np

def main():
    test_array = np.array([1, 2, 3, 4], dtype=np.int8)
    print(type(test_array))
    print(test_array)
    print(test_array.dtype)
    print(test_array.shape)
    print(test_array.ndim)
    print(test_array.size)
    for i in test_array:
        print(i)

if __name__ == "__main__":
    main()