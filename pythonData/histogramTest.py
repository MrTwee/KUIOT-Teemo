import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from statsmodels import robust


def main():
    folder = "/Users/jinwoo/Desktop/KUIOT-Teemo/pythonData/data/"
    state = pd.read_csv(folder + "state.csv")
    binnedPopulation = pd.cut(state["Population"], 10)
    binnedPopulation.value_counts()
    print(binnedPopulation)
    print(binnedPopulation.value_counts())

    # plt.hist(state["Population"], bins= 10)
    # plt.show()
    # state["Population"].plot.hist(bins= 10)
    # ax1 = state["Population"].plot.hist(bins=10)
    # plt.show()

    ax = state["Muder.Rate"].plot.hist(density=True, xlim=[0, 12], bins = range(1, 12))

if __name__ == "__main__":
    main()

