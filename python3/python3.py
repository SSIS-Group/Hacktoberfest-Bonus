print("Hello World")

# Reading image meta-data (height width) from a directory of images
from os import listdir
from os.path import isfile, join
from PIL import Image
import os

path = "path/"
files = [f for f in listdir(path) if isfile(join(path, f))]
images = []
for filename in files:
    im = Image.open(path+filename)
    width, height = im.size 
    images.append({'filename': filename, 'width':width, 'height': height})
