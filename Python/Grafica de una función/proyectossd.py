from matplotlib import pyplot
from tkinter import *
import tkinter as tk
from tkinter import ttk#librerías para la interfaz grafica
raiz = Tk()
myframe = Frame(raiz, width = 300, height = 200)
raiz.geometry("300x200")
raiz.resizable(1,1)
myframe['bg'] = 'gray77'
raiz['bg'] = 'gray77'
myframe.pack()
raiz.title("Grafica de una función ")
c1 =tk.StringVar()
c2 = tk.StringVar()
c3 = tk.StringVar()
def salir():
    raiz.destroy()
def funcion():
    def f(x):
        return ((int (c1i.get())*1000/( x))  * 2)/365
    
    x = range(20, 70 )

    pyplot.plot(x, [f(i) for i in x])

    pyplot.axhline(0, color="black")    
    pyplot.axvline(0, color="black")

    pyplot.xlim(0, 100)
    pyplot.ylim(0,100)

    pyplot.savefig("Grafica.png")

    pyplot.show()


m1 = Label(myframe , text = "TBW")
m1.place(x = 10, y = 35)
m1.config (bg ='gray77',fg ='black')


c1i = Entry(myframe, textvariable=c1 )
c1i.place(x = 50, y = 30,  width = 50, height = 25)

b1 =Button(myframe, text = "Graficar", width = 10, command = funcion)#Botones, texto en el boton y funcion de llamada
b1.place(x = 30, y = 150)
b2 =Button(myframe, text = "Salir", width = 10, command= salir)
b2.place(x = 180, y = 150)
raiz.mainloop()