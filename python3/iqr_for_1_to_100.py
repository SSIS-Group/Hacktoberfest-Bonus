import numpy as np

x = []

for i in range(0,101):
    x.append(i)

iqr = np.subtract(*np.percentile(x, [75,25]))

print(iqr)