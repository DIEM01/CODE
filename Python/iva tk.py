  
from tkinter import *
import tkinter as tk



from tkinter import messagebox as MessageBox
raiz = Tk()
myframe = Frame(raiz, width = 1000, height = 700)
raiz.geometry("1000x700")
raiz.resizable(1,1)
myframe['bg'] = 'gray77'
raiz['bg'] = 'gray77'
myframe.pack()
raiz.title("El marvaz esta bien sabroso")

imagen = PhotoImage(file="datos.png")


Imagen_2 =Label(myframe, image=imagen)

Imagen_2.place(x=0, y=0)

c11 = StringVar()
c22 = StringVar()
c33 = StringVar()
c44 = StringVar()
c55 = StringVar()
c66 = StringVar()
c77 = StringVar()
c88 = StringVar()
c99 = StringVar()
c1010 = StringVar()
#texto cantidad
c111 = StringVar()
c222 = StringVar()
c333 = StringVar()
c444 = StringVar()
c555 = StringVar()
c666 = StringVar()
c777 = StringVar()
c888 = StringVar()
c999 = StringVar()
c101010 = StringVar()
#texto total

c1111 = StringVar()
c2222 = StringVar()
c3333 = StringVar()
c4444 = StringVar()
c5555 = StringVar()
c6666 = StringVar()
c7777 = StringVar()
c8888 = StringVar()
c9999 = StringVar()
c10101010 = StringVar()



#titulos
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
m6.place(x = 420, y = 150)
m6.config (bg ='gray77',fg ='black')

#numeros 
m0 = Label(myframe , text = "1")
m0.place(x = 10, y = 180)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "2")
m0.place(x = 10, y = 210)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "3")
m0.place(x = 10, y = 240)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "4")
m0.place(x = 10, y = 270)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "5")
m0.place(x = 10, y = 300)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "6")
m0.place(x = 10, y = 330)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "7")
m0.place(x = 10, y = 360)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "8")
m0.place(x = 10, y = 390)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "9")
m0.place(x = 10, y = 420)
m0.config (bg ='gray77',fg ='black')
m0 = Label(myframe , text = "10")
m0.place(x = 10, y = 450)
m0.config (bg ='gray77',fg ='black')


#total con iva


# cuadros de texto descripcion 
c11i = Entry(myframe, textvariable=c11 )
c11i.place(x = 60, y = 180,  width = 160, height = 20)
c22i = Entry(myframe, textvariable=c22 )
c22i.place(x = 60, y = 210,  width = 160, height = 20)
c33i = Entry(myframe, textvariable=c33 )
c33i.place(x = 60, y = 240,  width = 160, height = 20)
c44i = Entry(myframe, textvariable=c44 )
c44i.place(x = 60, y = 270,  width = 160, height = 20)
c55i = Entry(myframe, textvariable=c55 )
c55i.place(x = 60, y = 300,  width = 160, height = 20)
c66i = Entry(myframe, textvariable=c66 )
c66i.place(x = 60, y = 330,  width = 160, height = 20)
c77i = Entry(myframe, textvariable=c77 )
c77i.place(x = 60, y = 360,  width = 160, height = 20)
c88i = Entry(myframe, textvariable=c88 )
c88i.place(x = 60, y = 390,  width = 160, height = 20)
c99i = Entry(myframe, textvariable=c99 )
c99i.place(x = 60, y = 420,  width = 160, height = 20)
c1010i = Entry(myframe, textvariable=c1010 )
c1010i.place(x = 60, y = 450,  width = 160, height = 20)


#cuadors de txto cantidad

c111i = Entry(myframe, textvariable=c111 )
c111i.place(x = 250, y = 180,  width = 50, height = 20)
c222i = Entry(myframe, textvariable=c222 )
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

#cuadros precio

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



boton1 =Button(myframe, text = "Facturar", width = 10,)
boton1.place(x = 150, y = 500)



raiz.mainloop() 