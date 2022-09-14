import os
import qrcode

image = qrcode.make("https://www.youtube.com/watch?v=HSK2B3iJrKY")

image.save("qr.png","PNG")

os.system("open qr.png")