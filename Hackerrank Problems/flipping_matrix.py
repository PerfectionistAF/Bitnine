#
# Complete the 'flippingMatrix' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY matrix as parameter.
#
def flippingMatrix(matrix):
 # Write your code here
 '''solution = 0
 col_sum_list= [] ##find sum of each column
 row_sum_list= [] ##find sum of each row
 
 for row in matrix:
 row_sum_list.append(sum(row))
 
 num_cols = len(matrix[0])
 col_sum_list = [0] * num_cols
 
 for row in matrix:
 for j in range(num_cols):
 col_sum_list[j] += row[j]
 
 ## find index of max sum of column and of row then descend sort that
index
 max_col_index = col_sum_list.index(max(col_sum_list))
 max_row_index = row_sum_list.index(max(row_sum_list))
 
 matrix = sorted(matrix, key=lambda x: x[max_col_index],
 reverse=True)
 
 matrix = sorted(matrix, key=lambda x: x[max_row_index],
 reverse=True)
 solution = int(sum(matrix[0:num_cols/2][0:num_cols/2]))'''
 
 n = len(matrix) // 2
 solution = 0; ##SQUARE 2N X 2N matrix
 
 for i in range(0, n):
    for j in range(0, n):
        solution += max(
        matrix[i][j], #original
        matrix[i][(2*n) - j - 1], #flipped vertically
        matrix[(2*n) - i - 1][j], #flipped horizontally
        matrix[(2*n) - i - 1][(2*n) - j - 1] #flipped both ways
        )
 
 return solution