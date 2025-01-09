#!/usr/bin/python

import tkinter
from tkinter import *

top = tkinter.Tk()
top.title("Simple GUI")
top.geometry("400x500")

ChatLog = Text(top, bd=0, bg="white", height="8", width="50", font="Arial",
ChatLog.config(state=DISABLED)

ChatLog.place(x=6,y=6, height=386, width=370)
Ch
top.mainloop()
