def main():
    x_1 =np.random.randint(1, 100, 10)
    x_2 =np.random.randint(1, 100, 10)
    print(f"x_1 : {x_1}")
    print(f"x_2 : {x_2}")
    print(f"x_1 > x_2: {x_1 > x_2}")
    print(x_2)
    print(x_1 > x_2)
    print((x_1 > x_2).all())
    print((x_1 > 100).any())
    print((x_1 > x_2).any())
    print((x_1 > 0))
    print((x_1 > 0).all())

if __name__ == "__main__":

