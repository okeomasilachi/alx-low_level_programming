import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
a = 66
b = -76
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
