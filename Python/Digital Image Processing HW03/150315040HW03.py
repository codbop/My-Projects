import sys
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt

source = Image.open(sys.argv[1])
pixels = np.asarray(source)
pixels_1D = np.ravel(pixels)
pixels_1D.flags.writeable = True

s = source.histogram()
t = range(0,256,1)

plt.figure(figsize=(20,10))

plt.subplot(1,2,1)
plt.stem(t,s,'r-')
plt.xlabel('Intensities')
plt.ylabel('# of pixels')
plt.xlim((0,255))
plt.ylim((0,np.amax(s)))
plt.title('Histogram of the Input Image')

length = len(pixels_1D)

def setTotalFrequency(pixel):
    frequency = 0
    for y in range(pixels_1D[pixel]):
        frequency = frequency + s[y]
    return frequency    

for x in range(length):
    frequency = setTotalFrequency(x)
    pixels_1D[x] = (255*frequency)/length
    
source.putdata(pixels_1D)
s = source.histogram()                       

plt.subplot(1,2,2)
plt.stem(t,s,'r-') 
plt.xlabel('Intensities')
plt.ylabel('# of pixels')
plt.xlim((0,255))
plt.ylim((0,np.amax(s)))
plt.title('Histogram of the Hist.Eq. Image')
plt.savefig('histogram1 and histogram2.png')
source.save('Enhanced-Image.png', 'PNG')
