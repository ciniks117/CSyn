import pandas as pd
df1 = pd.read_csv("BrFalse.csv",names=['time','RPM','speed'])
df2 = pd.read_csv("BrFalse_Plot_Robust_Sat.csv", names=['time','rob'])
merged = df1.merge(df2, on='time', how='inner').fillna("")
merged.to_csv("merged.csv", index=False)
