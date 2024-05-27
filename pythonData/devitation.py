import os

import pandas as pd
import numpy as np
from scipy import stats
from statsmodels import robust

folder = "/Users/jinwoo/Desktop/KUIOT-Teemo/pythonData/data/"

def main():
    state = pd.read_csv(folder + "state.csv")
    print(f"미국주의 인구 표준 편차는 {state['Population'].std()}이다")
    iqr = state["Population"].quantile(0.75) - state["Population"].quantile(0.25)
    print(f"미국 주의 사분위범위(iqr)은 {iqr} 이다")
    mad = robust.scale.mad(state["Population"])
    print(f"미국 주의 MAD는 {mad}이다 ")

if __name__ == "__main__":
    main()