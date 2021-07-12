from tkinter import *
raiz = Tk()
myframe = Frame(raiz, width = 100, height = 180)
raiz.geometry("350x400")
raiz.resizable(0,0)
myframe.pack()
raiz.title("CRUD PERSONAS")
cuadroaclasificar = StringVar()
milable1 = Label(myframe , text = "Registros")
milable1.grid(row = 1,column = 1)
milable2 = Label(myframe , text = "           ID : ")
milable2.grid(row = 2,column = 1)
milable3 = Label(myframe , text="Nombre : ")
milable3.grid(row = 3,column = 1)
milable4 = Label(myframe , text = "     Apellido Paterno : ")
milable4.grid(row=  4,column = 1)
milable5 = Label(myframe , text = "    Apellido materno      ")
milable5.grid(row=  5,column = 1)
milable6 = Label(myframe , text = "      Contraseña  ")
milable6.grid(row=  6,column = 1)
milable7 = Label(myframe , text = "      Dirección   ")
milable7.grid(row=  7,column = 1)


cuadroaclasificar = Entry(myframe, textvariable=cuadroaclasificar )
cuadroaclasificar.grid(row = 5,column=2)
cuadroaclasificar.config (justify = "right")
def window (): 
       raiz.destroy() 
def borrar():
    res = ""
    milable4.config(text = res)
    ''''
boton1 =Button(myframe, text = "Reiniciar", width = 10,command=borrar)
boton1.grid(row = 8, column = 1)
boton2 =Button(myframe, text = "Clasificar", width = 10)
boton2.grid(row = 6, column = 1)
boton3 =Button(myframe, text = "Salir", width = 10, command=window)
boton3.grid(row = 8, column = 2)'''
raiz.mainloop() 