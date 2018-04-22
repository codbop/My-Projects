import sys
import numpy as np
from PIL import Image

source = Image.open(sys.argv[1])

def addpadding(source,pad):
    imarr = np.array(source)
    padimarr = np.zeros((imarr.shape[0]+2*pad,imarr.shape[1]+2*pad),dtype=np.uint8)
    padimarr[pad:padimarr.shape[0]-pad,pad:padimarr.shape[1]-pad]=imarr
    return padimarr

def setMedianValue(temparray, padsourcearr, row, column):
    temparray = createTempArray(temparray, padsourcearr, x, y)
    median = np.median(temparray)
    return median
    
def createTempArray(temparray, padsourcearr, row, column):
    count = 0
    for x in range(row-1,row+2):
        for y in range(column-1,column+2):
            temparray[count] = padsourcearr[x][y]
            count+=1
    return temparray        
    
padsourcearr = addpadding(source,1)
tempsourcearr = np.array(source)
tempsourcearr2 = np.zeros((tempsourcearr.shape[0],tempsourcearr.shape[1]),dtype=np.uint8)

for x in range(1,padsourcearr.shape[0]-1):
    for y in range(1,padsourcearr.shape[1]-1):
        temparray = np.zeros(9,dtype=np.uint8)
        median = setMedianValue(temparray, padsourcearr, x, y)
        tempsourcearr2[x-1][y-1] = median
        
tempsourcearr_1D = np.ravel(tempsourcearr2)
source.putdata(tempsourcearr_1D)

source.save('Noise Free Lena.png', 'PNG')