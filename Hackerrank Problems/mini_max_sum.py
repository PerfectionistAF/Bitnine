#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    minSumArray = sorted(arr) ##sort ascending
    maxSumArray = sorted(arr, reverse = True) ##sort descending
    print(sum(minSumArray[0:4]), sum(maxSumArray[0:4]))

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
