#!/bin/python

import sys

time = raw_input().strip()
hr = time[0:2]
m = time[3:5]
s = time[6:8]
am = False
if time[8:10] == 'AM':
    am = True
if am and hr == '12':
    hr = '00'
elif not am and hr == '12':
    hr = '12'
elif not am:
    hr = int (hr) + 12
print str(hr) + time[2:8]