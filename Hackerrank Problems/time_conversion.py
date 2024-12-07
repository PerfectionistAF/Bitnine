#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    period = str(s[-2:])
    hrs = int(s[0:2])
    if period == "AM":
        if hrs == 12:
            hrs = 0
    else:
        if period == "PM":
            if hrs != 12:
                hrs += 12
    
    new_time = f"{hrs:02}:{s[3:8]}"
    return str(new_time)
    
    '''if (hrs < 12) and s.find("PM"):
        new_hrs = int(s[0:2]) + 12
        new_time = str(new_hrs) + s[2:8]
        return str(new_time)
    elif (int(s[0:2])==12) and s.find("AM"):
        new_hrs = 00
        new_time = str(new_hrs) + s[2:8]
        return str(new_time)
    else:
        new_hrs = int(s[0:2])
        new_time = str(new_hrs) + s[2:8]
        return str(new_time)'''

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
