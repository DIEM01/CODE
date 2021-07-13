from tkinter import *
import sqlite3 
raiz = Tk()
myframe = Frame(raiz, width = 800, height = 300)
raiz.geometry("300x270")
raiz.resizable(0,0)
myframe.pack()
raiz.title("CRUD PERSONAS")
cuadroaclasificar = StringVar()
milable1 = Label(myframe , text = "Registros")
milable1.place(x = 5, y = 5)

milable2 = Label(myframe , text = "ID:")
milable2.place(x = 107, y = 30)


milable3 = Label(myframe , text="Nombre:")
milable3.place(x = 75, y = 60)

milable4 = Label(myframe , text = "Apellido Paterno:")
milable4.place(x = 32, y = 90)
milable5 = Label(myframe , text = "Apellido Materno:")
milable5.place(x = 29, y = 120)
milable6 = Label(myframe , text = "Contraseña:")
milable6.place(x = 62, y = 150)
milable7 = Label(myframe , text = "Dirección:")
milable7.place(x = 72, y = 180)

"""
cuadroaclasificar = Entry(myframe, textvariable=cuadroaclasificar )
cuadroaclasificar.grid(row = 5,column=2)
cuadroaclasificar.config (justify = "right")"""


def window (): 
       raiz.destroy() 
def borrar():
    res = ""
    milable4.config(text = res)
    
boton1 =Button(myframe, text = "Create", width = 6)
boton1.place(x = 10, y = 240)
boton2 =Button(myframe, text = "Read", width = 6)
boton2.place(x = 80, y = 240)
boton3 =Button(myframe, text = "Update", width = 6)
boton3.place(x = 150, y = 240)
boton4 =Button(myframe, text = "Delete", width = 6)
boton4.place(x = 220, y = 240)

raiz.mainloop() 