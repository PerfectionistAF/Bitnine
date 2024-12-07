#
# Complete the 'findMedian' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#
def findMedian(arr):
 # Write your code here
    sortedArray = sorted(arr)
    array_length = len(arr)
    median = 0
    if array_length % 2 == 0:
        mid = array_length//2 ##even
        median = (sortedArray[mid] + sortedArray[mid - 1])/2
    #return median
    else:
        ##odd
        mid = int(array_length/2)
        median = sortedArray[mid]
    
    return median
