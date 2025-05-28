from tkinter import *
from tkinter import messagebox

def hello():
    messagebox.showinfo("Hi", "HELLO WORLD")

win = Tk()
button = Button(win, text="Click", command=hello)
button.pack()
win.mainloop()
