from tkinter import *
import tkinter as tk
import sqlite3 
raiz = Tk()
myframe = Frame(raiz, width = 800, height = 300)
raiz.geometry("280x210")
raiz.resizable(0,0)
myframe['bg'] = '#49A'
raiz['bg'] = '#49A'
myframe.pack()
raiz.title("CRUD PERSONAS")






Mymenu = tk.Menu(raiz)  
filemenu = tk.Menu(Mymenu, tearoff=0) 
Mymenu.add_cascade(label='BBDD', menu=filemenu)
filemenu.add_command(label='Crear')
filemenu.add_separator()
filemenu.add_command(label='Salir')
raiz.config(menu=Mymenu)  


editmenu = tk.Menu(Mymenu, tearoff=0)   
Mymenu.add_cascade(label='CRUD', menu=editmenu)   
editmenu.add_command(label='Crear')
editmenu.add_command(label='Leer')
editmenu.add_command(label='Actualizar')
editmenu.add_command(label='Eliminar')

editmenu = tk.Menu(Mymenu, tearoff=0)   
Mymenu.add_cascade(label='Edición', menu=editmenu)   
editmenu.add_command(label='Borrar datos')

editmenu = tk.Menu(Mymenu, tearoff=0)   
Mymenu.add_cascade(label='Acerca de', menu=editmenu)   
editmenu.add_command(label='Licencia ')



ca = StringVar()

m2 = Label(myframe , text = "ID:")
m2.place(x = 107, y = 10)
m2.config (bg ='#49A',fg ='white')
m3 = Label(myframe , text="Nombre:")
m3.place(x = 75, y = 40)
m3.config (bg ='#49A',fg ='white')
m4 = Label(myframe , text = "Apellido Paterno:")
m4.place(x = 32, y = 70)
m4.config (bg ='#49A',fg ='white')
m5 = Label(myframe , text = "Apellido Materno:")
m5.place(x = 29, y = 100)
m5.config (bg ='#49A',fg ='white')
m6 = Label(myframe , text = "Contraseña:")
m6.place(x = 62, y = 130)
m6.config (bg ='#49A',fg ='white')


ca = Entry(myframe, textvariable=ca )
ca.place(x = 140, y = 10)

c1 = Entry(myframe, textvariable=ca )
c1.place(x = 140, y = 40)

c2 = Entry(myframe, textvariable=ca )
c2.place(x = 140, y = 70)

c3 = Entry(myframe, textvariable=ca )
c3.place(x = 140, y = 100)

c4 = Entry(myframe, textvariable=ca )
c4.place(x = 140, y = 130)










def window (): 

       raiz.destroy() 
def borrar():
    res = ""
    m4.config(text = res)
    
b1 =Button(myframe, text = "Create", width = 6)
b1.place(x = 10, y = 170)

b2 =Button(myframe, text = "Read", width = 6)
b2.place(x = 80, y = 170)

b3 =Button(myframe, text = "Update", width = 6)
b3.place(x = 150, y = 170)

b4 =Button(myframe, text = "Delete", width = 6)
b4.place(x = 220, y = 170)

raiz.mainloop() 