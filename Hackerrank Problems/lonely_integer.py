#!/bin/python3

import math
import os
import random
import re
import sys
from array import array
#
# Complete the 'lonelyinteger' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def lonelyinteger(a):
    # Write your code here
    '''Using XOR (^):
    1) XOR of a number with itself is 0 (e.g., x ^ x = 0).
    2) XOR of a number with 0 is the number itself (e.g., x ^ 0 = x).
    3) By XORing all numbers in the array, duplicates cancel out, leaving only the
    unique element.'''
    
    sortedA = sorted(a)  ##unnecessary time cmplexity
    #lonelyInteger = list(set(sortedA))  ##returns list
    #lonelyInteger = sortedA[0];
    lonelyInteger = 0
    for i in range(0,len(sortedA)):
        #if lonelyInteger != sortedA[i]:
        lonelyInteger ^= sortedA[i]
        #else:
        #    continue
    
    return lonelyInteger
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = lonelyinteger(a)

    fptr.write(str(result) + '\n')

    fptr.close()
