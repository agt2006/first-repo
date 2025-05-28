import numpy as np
import pandas as pd

# Create a 2D NumPy array (like a table)
data = np.array([[10, 20, 30],
                 [40, 50, 60],
                 [70, 80, 90]])

# Create DataFrame from NumPy array
df = pd.DataFrame(data, columns=['A', 'B', 'C'])

# Display DataFrame
print(df)
