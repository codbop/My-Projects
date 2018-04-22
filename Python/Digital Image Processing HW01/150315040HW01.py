import numpy as np
from PIL import Image

width = 600
height = 400

array = [[0 for x in range(width)] for y in range(height)]

img = np.zeros((height, width), dtype=np.uint8)

xx, yy = np.mgrid[:height, :width]

circle = (xx - 200) ** 2 + (yy - 300) ** 2

for x in range(img.shape[0]):
    for y in range(img.shape[1]):
        intensity = circle[x][y]
        array[x][y] = intensity
        
img_min = np.amin(array)        
img_max = np.amax(array)

for x in range(img.shape[0]):
    for y in range(img.shape[1]):
        intensity = 255 * (array[x][y] - img_min) / (img_max - img_min)
        img[x][y] = intensity
    
Image.fromarray(img,'L').show()

Image.fromarray(img,'L').save('circle-bad.png','PNG')