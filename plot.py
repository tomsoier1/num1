import matplotlib.pyplot as plt
import numpy

file = open("fael.txt").read().split("LINE")

f1 = [float(i.split(" ")[1]) for i in file[0].split("\n")[:-1]] 
f2 = [float(i.split(" ")[1]) for i in file[1].split("\n")[1:-1]] 

fd1 = numpy.array(f1)
fdd1 = numpy.arange(0, len(f1), 1)
print(len(f1), len(f2))
fd2 = numpy.array(f2)
fdd2 = numpy.arange(0, len(f2), 1)

plt.figure(1)
plt.plot(fd1, fd2)

plt.figure(2)
plt.plot(fd2, fdd2)

plt.show ()
