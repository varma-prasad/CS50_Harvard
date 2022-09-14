import pyttsx3

engine = pyttsx3.init()
name =input("enter your name?")
engine.say(f"hello,{name}")
engine.runAndWait()