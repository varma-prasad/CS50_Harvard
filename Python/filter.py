from PIL import Image,ImageFilter

before = Image.open("filter.jpg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out.bmp")