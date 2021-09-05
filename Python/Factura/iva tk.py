from tkinter import *
import tkinter as tk
from tkinter import ttk#librerías para la interfaz grafica
raiz = Tk()
myframe = Frame(raiz, width = 515, height = 580)
raiz.geometry("515x580")
raiz.resizable(0,0)#Bloqueo para modificar el tamaño de la interfaz
raiz.iconbitmap("ic.ico")
myframe['bg'] = 'gray77'
raiz['bg'] = 'gray77'
myframe.pack()
raiz.title("Factura ")
imagen = PhotoImage(file="datos.png")#imagen de los datos superiores 
Imagen_2 =Label(myframe, image=imagen)
Imagen_2.place(x=0, y=0)# Lugar que se localiza la imagen 

#variables para la cantidad de productos
c111 = IntVar()
c222 = IntVar()
c333 = IntVar()
c444 = IntVar()
c555 = IntVar()
c666 = IntVar()
c777 = IntVar()
c888 = IntVar()
c999 = IntVar()
c101010 = IntVar()

#variables para el precio de los productos 
c1111 = IntVar()
c2222 = IntVar()
c3333 = IntVar()
c4444 = IntVar()
c5555 = IntVar()
c6666 = IntVar()
c7777 = IntVar()
c8888 = IntVar()
c9999 = IntVar()
c10101010 = IntVar()

#Texto de los títulos 
m1w = Label(myframe , text = "Factura")#Texto de Factura
m1w.place(x = 10, y = 100, )#Lugar donde se encuantra el texto
m1w.config (bg ='gray77',fg ='black',font=("Arial black",22))#Color, color de texto, tipo de letra y tamaño de letra 
m1 = Label(myframe , text = "No.")
m1.place(x = 10, y = 150)
m1.config (bg ='gray77',fg ='black')
m2 = Label(myframe , text="Descripción")
m2.place(x = 60, y = 150)
m2.config (bg ='gray77',fg ='black')
m3 = Label(myframe , text = "Cantidad")
m3.place(x = 250, y = 150)
m3.config (bg ='gray77',fg ='black')
m4 = Label(myframe , text = "Precio")
m4.place(x = 320, y = 150)
m4.config (bg ='gray77',fg ='black')
m5 = Label(myframe , text = "Total")
m5.place(x = 370, y = 150)
m5.config (bg ='gray77',fg ='black')
m6 = Label(myframe , text = "Total con IVA")
m6.place(x = 435, y = 150)
m6.config (bg ='gray77',fg ='black')
m6r = Label(myframe , text = "Total  $")
m6r.place(x = 375, y = 520)
m6r.config (bg ='gray77',fg ='black')
m6t = Label(myframe , text = "Total con IVA(16%)  $")
m6t.place(x = 300, y = 540)
m6t.config (bg ='gray77',fg ='black')

#$ y No. 
n = int (150)
l = int (0)
for i in range  (10):
    n = n +30
    l=l+1
    m0q = Label(myframe , text = "$")
    m0q.place(x = 360, y = n)
    m0q.config (bg ='gray77',fg ='black')
    m0q = Label(myframe , text = "$")
    m0q.place(x = 425, y = n)
    m0q.config (bg ='gray77',fg ='black')
    m0qp = Label(myframe , text = l)
    m0qp.place(x = 10, y = n)
    m0qp.config (bg ='gray77',fg ='black')

#Total para mostrar IVA 
ma11b11 =Label (myframe,text="")
ma11b11.place(x = 435, y = 180)
ma11b11.config (bg ='gray77',fg ='black')
ma22b22 =Label (myframe,text="")
ma22b22.place(x = 435, y = 210)
ma22b22.config (bg ='gray77',fg ='black')
ma33b33 =Label (myframe,text="")
ma33b33.place(x = 435, y = 240)
ma33b33.config (bg ='gray77',fg ='black')
ma44b44 =Label (myframe,text="")
ma44b44.place(x = 435, y = 270)
ma44b44.config (bg ='gray77',fg ='black')
ma55b55 =Label (myframe,text="")
ma55b55.place(x = 435, y = 300)
ma55b55.config (bg ='gray77',fg ='black')
ma66b66 =Label (myframe,text="")
ma66b66.place(x = 435, y = 330)
ma66b66.config (bg ='gray77',fg ='black')
ma77b77 =Label (myframe,text="")
ma77b77.place(x = 435, y = 360)
ma77b77.config (bg ='gray77',fg ='black')
ma88b88 =Label (myframe,text="")
ma88b88.place(x = 435, y = 390)
ma88b88.config (bg ='gray77',fg ='black')
ma99b99 =Label (myframe,text="")
ma99b99.place(x =435, y = 420)
ma99b99.config (bg ='gray77',fg ='black')
ma1010b1010 =Label (myframe,text="")
ma1010b1010.place(x = 435, y = 450)
ma1010b1010.config (bg ='gray77',fg ='black')

#Texto total y total con IVA ln 400
m23 =Label (myframe,text="")
m23.place(x = 430, y = 540)
m23.config (bg ='gray77',fg ='black')
m24 =Label (myframe,text="")
m24.place(x = 430, y = 520)
m24.config (bg ='gray77',fg ='black')

#Texto para mostrar el total sin IVA
ma1b1 =Label (myframe,text="")
ma1b1.place(x = 370, y = 180)
ma1b1.config (bg ='gray77',fg ='black')
ma2b2 =Label (myframe,text="")
ma2b2.place(x = 370, y = 210)
ma2b2.config (bg ='gray77',fg ='black')
ma3b3 =Label (myframe,text="")
ma3b3.place(x = 370, y = 240)
ma3b3.config (bg ='gray77',fg ='black')
ma4b4 =Label (myframe,text="")
ma4b4.place(x = 370, y = 270)
ma4b4.config (bg ='gray77',fg ='black')
ma5b5 =Label (myframe,text="")
ma5b5.place(x = 370, y = 300)
ma5b5.config (bg ='gray77',fg ='black')
ma6b6 =Label (myframe,text="")
ma6b6.place(x = 370, y = 330)
ma6b6.config (bg ='gray77',fg ='black')
ma7b7 =Label (myframe,text="")
ma7b7.place(x = 370, y = 360)
ma7b7.config (bg ='gray77',fg ='black')
ma8b8 =Label (myframe,text="")
ma8b8.place(x = 370, y = 390)
ma8b8.config (bg ='gray77',fg ='black')
ma9b9 =Label (myframe,text="")
ma9b9.place(x = 370, y = 420)
ma9b9.config (bg ='gray77',fg ='black')
ma10b10 =Label (myframe,text="")
ma10b10.place(x = 370, y = 450)
ma10b10.config (bg ='gray77',fg ='black')

#Cuadros de texto descripción 
c11i = Entry(myframe)
c11i.place(x = 60, y = 180,  width = 160, height = 20)
c22i = Entry(myframe)
c22i.place(x = 60, y = 210,  width = 160, height = 20)
c33i = Entry(myframe )
c33i.place(x = 60, y = 240,  width = 160, height = 20)
c44i = Entry(myframe )
c44i.place(x = 60, y = 270,  width = 160, height = 20)
c55i = Entry(myframe )
c55i.place(x = 60, y = 300,  width = 160, height = 20)
c66i = Entry(myframe )
c66i.place(x = 60, y = 330,  width = 160, height = 20)
c77i = Entry(myframe )
c77i.place(x = 60, y = 360,  width = 160, height = 20)
c88i = Entry(myframe )
c88i.place(x = 60, y = 390,  width = 160, height = 20)
c99i = Entry(myframe )
c99i.place(x = 60, y = 420,  width = 160, height = 20)
c1010i = Entry(myframe )
c1010i.place(x = 60, y = 450,  width = 160, height = 20)

#Funcion para salir 
def window (): 
       raiz.destroy()

#Funcion para calcular el total, total con iva y conversion de decimal a binario y de binario a decimal     
def total():
    a1 = int (c111i.get())#Recopila la informacion de los cuadros de texto
    b1 = int (c1111i.get())

    binarioa1 = format(a1, "b")#Lo convierte a binario
    enteroa1 = int (binarioa1,2) #De binario a decimal 
    binariob1 = format(b1, "b")#Lo convierte a binario
    enterob1 = int (binariob1,2) #De binario a decimal 
    a1b1 = enteroa1 * enterob1#Multiplica el precio por la cantidad para sacar el total
    c1 = a1b1 *0.16+a1b1#Se multiplica el total por 0.16 y se suma el total para sacar el total con iva
    ma11b11.config (text = c1)#El texto se configura para mostrar el total y total con IVA
    ma1b1.config (text = a1b1)

    a2 = int  (c222i.get())
    b2 = int (c2222i.get())
    binarioa2 = format(a2, "b")
    enteroa2 = int (binarioa2,2)
    binariob2 = format(b2, "b")
    enterob2 = int (binariob2,2)
    a2b2 = enteroa2 * enterob2
    c2 = a2b2 *0.16+a2b2
    ma22b22.config (text = c2)
    ma2b2.config (text = a2b2)

    a3 = int  (c333i.get())
    b3= int  (c3333i.get())
    binarioa3 = format(a3, "b")
    enteroa3 = int (binarioa3,2)
    binariob3 = format(b3, "b")
    enterob3 = int (binariob3,2)
    a3b3 = enteroa3 * enterob3
    c3 = a3b3 *0.16+a3b3
    ma33b33.config (text = c3)
    ma3b3.config (text = a3b3)
    a4 = int  (c444i.get())
    b4 = int  (c4444i.get())

    binarioa4 = format(a4, "b")
    enteroa4 = int (binarioa4,2)
    binariob4 = format(b4, "b")
    enterob4 = int (binariob4,2)
    a4b4 = enteroa4 * enterob4
    c4 = a4b4 *0.16+a4b4
    ma44b44.config (text = c4)
    ma4b4.config (text = a4b4)

    a5 = int  (c555i.get())
    b5 = int  (c5555i.get())
    binarioa5 = format(a5, "b")
    enteroa5 = int (binarioa5,2)
    binariob5 = format(b5, "b")
    enterob5 = int (binariob5,2)
    a5b5 = enteroa5 * enterob5
    c5 = a5b5 *0.16+a5b5
    ma55b55.config (text = c5)
    ma5b5.config (text = a5b5)

    a6 = int  (c666i.get())
    b6 = int (c6666i.get())
    binarioa6 = format(a6, "b")
    enteroa6 = int (binarioa6,2)
    binariob6 = format(b6, "b")
    enterob6 = int (binariob6,2)
    a6b6 = enteroa6 * enterob6
    c6 = a6b6 *0.16+a6b6
    ma66b66.config (text = c6)
    ma6b6.config (text = a6b6)

    a7 = int  (c777i.get())
    b7 = int  (c7777i.get())
    binarioa7 = format(a7, "b")
    enteroa7 = int (binarioa7,2)
    binariob7 = format(b7, "b")
    enterob7 = int (binariob7,2)
    a7b7 = enteroa7 * enterob7
    c7 = a7b7 *0.16+a7b7
    ma77b77.config (text = c7)
    ma7b7.config (text = a7b7)

    a8 = int  (c888i.get())
    b8 = int (c8888i.get())
    binarioa8 = format(a8, "b")
    enteroa8 = int (binarioa8,2)
    binariob8 = format(b8, "b")
    enterob8 = int (binariob8,2)
    a8b8 = enteroa8 * enterob8
    a8b8 = a8 * b8
    c8 = a8b8 *0.16+a8b8
    ma88b88.config (text = c8)
    ma8b8.config (text = a8b8)

    a9 = int  (c999i.get())
    b9 = int  (c9999i.get())
    binarioa9 = format(a9, "b")
    enteroa9 = int (binarioa9,2)
    binariob9 = format(b9, "b")
    enterob9 = int (binariob9,2)
    a9b9 = enteroa9 * enterob9
    c9 = a9b9 *0.16+ a9b9
    ma99b99.config (text = c9)
    ma9b9.config (text = a9b9)

    a10 = int  (c101010i.get())
    b10 = int  (c10101010i.get())
    binarioa10 = format(a10, "b")
    enteroa10 = int (binarioa10,2)
    binariob10 = format(b10, "b")
    enterob10 = int (binariob10,2)
    a10b10 = enteroa10 * enterob10
    c10 = a10b10 *0.16+a10b10
    ma1010b1010.config (text = c10)
    ma10b10.config (text = a10b10)

    
    r2 =c1+c2+c3+c4+c5+c6+c7+c8+c9+c10    #Se suman los productos para sacar el total con IVA
    m23.config(text = r2)
    r1 = a1b1 + a2b2 + a3b3 + a4b4 + a5b5 + a6b6 + a7b7 + a8b8 + a9b9 + a10b10  #Se suma para sacar el total de todos los productos  
    m24.config(text = r1)

#Cuadros de texto de cantidad de productos
c111i = Entry(myframe, textvariable=c111 )
c111i.place(x = 250, y = 180,  width = 50, height = 20)
c222i = Entry(myframe, textvariable=c222, )
c222i.place(x = 250, y = 210,  width = 50, height = 20)
c333i = Entry(myframe, textvariable=c333)
c333i.place(x = 250, y = 240,  width = 50, height = 20)
c444i = Entry(myframe, textvariable=c444 )
c444i.place(x = 250, y = 270,  width = 50, height = 20)
c555i = Entry(myframe, textvariable=c555 )
c555i.place(x = 250, y = 300,  width = 50, height = 20)
c666i = Entry(myframe, textvariable=c666 )
c666i.place(x = 250, y = 330,  width = 50, height = 20)
c777i = Entry(myframe, textvariable=c777 )
c777i.place(x = 250, y = 360,  width = 50, height = 20)
c888i = Entry(myframe, textvariable=c888 )
c888i.place(x = 250, y = 390,  width = 50, height = 20)
c999i = Entry(myframe, textvariable=c999 )
c999i.place(x = 250, y = 420,  width = 50, height = 20)
c101010i = Entry(myframe, textvariable=c101010 )
c101010i.place(x = 250, y = 450,  width = 50, height = 20)

#cuadros de texto de precio de los productos 
c1111i = Entry(myframe, textvariable=c1111 )
c1111i.place(x = 320, y = 180,  width = 35, height = 20)
c2222i = Entry(myframe, textvariable=c2222 )
c2222i.place(x = 320, y = 210,  width = 35, height = 20)
c3333i = Entry(myframe, textvariable=c3333)
c3333i.place(x = 320, y = 240,  width = 35, height = 20)
c4444i = Entry(myframe, textvariable=c4444 )
c4444i.place(x = 320, y = 270,  width = 35, height = 20)
c5555i = Entry(myframe, textvariable=c5555 )
c5555i.place(x = 320, y = 300,  width = 35, height = 20)
c6666i = Entry(myframe, textvariable=c6666 )
c6666i.place(x = 320, y = 330,  width = 35, height = 20)
c7777i = Entry(myframe, textvariable=c7777 )
c7777i.place(x = 320, y = 360,  width = 35, height = 20)
c8888i = Entry(myframe, textvariable=c8888 )
c8888i.place(x = 320, y = 390,  width = 35, height = 20)
c9999i = Entry(myframe, textvariable=c9999 )
c9999i.place(x = 320, y = 420,  width = 35, height = 20)
c10101010i = Entry(myframe, textvariable=c10101010 )
c10101010i.place(x = 320, y = 450,  width = 35, height = 20)
#botones
b1 =Button(myframe, text = "Facturar", width = 10,command=total)#Botones, texto en el boton y funcion de llamada
b1.place(x = 150, y = 530)#lugar del boton 
b2 =Button(myframe, text = "Salir", width = 10, command=window)
b2.place(x = 50, y = 530)

raiz.mainloop() #bucle para mantener la ventana abierta