import pandas as pd

df = pd.read_csv("products.csv")

df["Unit Total"] = df["Price"] * df["Quantity"]

df['Total'] = df["Unit Total"].cumsum()

df.to_csv("finally.csv", index=False)
