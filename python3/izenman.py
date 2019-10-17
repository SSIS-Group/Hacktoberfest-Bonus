import numpy as np

x = np.random.rand(100)

iqr = np.subtract(*np.percentile(x, [75, 25]))

izenman = (2 * iqr) / (100)**(1/3)

print(izenman)