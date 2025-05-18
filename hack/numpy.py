import numpy

n, m = map(int, input().split())

data = []

for _ in range(n): data.append(list(map(int, input().split())))

array = numpy.array(data)

print(numpy.max(numpy.min(array, axis=1)))
