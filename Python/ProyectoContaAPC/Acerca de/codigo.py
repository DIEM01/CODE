#Se requiere del interprete de Python en su versión 3.x para poder leer este codigo.
#Autor: Ivan Flores Moran 

from tkinter import *
raiz = Tk()
myframe = Frame(raiz, width = 500, height = 380)
raiz.resizable(0,0)
myframe.pack()
raiz.title(":v")
cuadroaclasificar = StringVar()
milable1 = Label(myframe , text = "Clasificación de los elementos de estados financieros")
milable1.grid(row = 1,column = 1)
milable1 = Label(myframe , text = "           Resultados : ")
milable1.grid(row = 1,column = 2)
milable2 = Label(myframe , text="Elemento a clasificar : ")
milable2.grid(row = 5,column = 1)
milable3 = Label(myframe , text = "     La clasificación es : ")
milable3.grid(row=  7,column = 1)
milable4 = Label(myframe , text = "           ")
milable4.grid(row = 7,column = 2) 
cuadroaclasificar = Entry(myframe, textvariable=cuadroaclasificar )
cuadroaclasificar.grid(row = 5,column=2)
cuadroaclasificar.config (justify = "right")
def result():
        ac = "Activo a corto plazo."
        aclp = "Activo a largo plazo."
        pcp = "Pasivo a corto plazo."
        plp = "Pasivo a largo plazo."
        ccc = "Capital contable contribuido."
        ccg = "Capital contable ganado."
        ci = "Este concepto no es valido."
        if cuadroaclasificar.get().lower() == ("caja")or cuadroaclasificar.get().lower()==("fondo de caja")or cuadroaclasificar.get().lower()==("bancos")or cuadroaclasificar.get().lower()==("instrumentos financieros")or cuadroaclasificar.get().lower()==("clientes")or cuadroaclasificar.get().lower()==("documentos por cobrar")or cuadroaclasificar.get().lower()==("deudores diversos")or cuadroaclasificar.get().lower()==("funcionarios y empleados")or cuadroaclasificar.get().lower()==("iva acreditable") or cuadroaclasificar.get().lower()==("iva por acreditar") or cuadroaclasificar.get().lower()==("iva a favor")or cuadroaclasificar.get().lower()==("anticipos de impuestos") or cuadroaclasificar.get().lower()==("inventarios") or cuadroaclasificar.get().lower()==("mercancías en tránsito")or cuadroaclasificar.get().lower()==("anticipo a proveedores") or cuadroaclasificar.get().lower()==("papelerías y útiles")or cuadroaclasificar.get().lower()==("propaganda y publicidad") or cuadroaclasificar.get().lower()==("muestras y literaturas medicas")or cuadroaclasificar.get().lower()==("primas de seguros y finanzas")or cuadroaclasificar.get().lower()==("rentas pagadas por anticipado")or cuadroaclasificar.get().lower()==("intereses pagados por anticipado"):
            milable4.config(text = ac)
        elif cuadroaclasificar.get().lower() == ("terrenos")or cuadroaclasificar.get().lower()==("edificios")or cuadroaclasificar.get().lower()==("maquinaria")or cuadroaclasificar.get().lower()==("mobiliario y equipo de oficina")or cuadroaclasificar.get().lower()==("muebles y enseres")or cuadroaclasificar.get().lower()==("equipo de transporte")or cuadroaclasificar.get().lower()==("equipo de entrega y reparto")or cuadroaclasificar.get().lower()==("equipo de cómputo")or cuadroaclasificar.get().lower()==("inmuebles no utilizados") or cuadroaclasificar.get().lower()==("otros") or cuadroaclasificar.get().lower()==("derechos de autor")or cuadroaclasificar.get().lower()==("patentes") or cuadroaclasificar.get().lower()==("marcas y nombres comerciales") or cuadroaclasificar.get().lower()==("inversiones preoperativas")or cuadroaclasificar.get().lower()==("franquicias") or cuadroaclasificar.get().lower()==("inversiones de constitución")or cuadroaclasificar.get().lower()==("fondos a largo plazo") or cuadroaclasificar.get().lower()==("cuentas por cobrar a largo plazo")or cuadroaclasificar.get().lower()==("depósitos en garantías")or cuadroaclasificar.get().lower()==("pagos anticipados a largo plazo")or cuadroaclasificar.get().lower()==("crédito mercantil"):
            milable4.config (text = aclp)
        elif cuadroaclasificar.get().lower() == ("proveedores")or cuadroaclasificar.get().lower()==("acreedores diversos")or cuadroaclasificar.get().lower()==("documentos por pagar")or cuadroaclasificar.get().lower()==("acreedores bancarios")or cuadroaclasificar.get().lower()==("anticipo a clientes")or cuadroaclasificar.get().lower()==("dividendos por pagar")or cuadroaclasificar.get().lower()==("iva trasladado")or cuadroaclasificar.get().lower()==("iva por trasladar")or cuadroaclasificar.get().lower()==("iva a pagar") or cuadroaclasificar.get().lower()==("impuestos y derechos por pagar") or cuadroaclasificar.get().lower()==("impuestos y derechos retenidos por enterar")or cuadroaclasificar.get().lower()==("impuesto sobre la renta (isr)por pagar") or cuadroaclasificar.get().lower()==("participación de los trabajadores en las utilidades (ptu)por pagar") or cuadroaclasificar.get().lower()==("utilidades por pagar (ptu)")or cuadroaclasificar.get().lower()==("rentas cobradas por anticipado"): 
          milable4.config (text = pcp)
        elif cuadroaclasificar.get().lower() == ("acreedores bancarios a largo plazo")or cuadroaclasificar.get().lower()==("documentos por pagar a largo plazo")or cuadroaclasificar.get().lower()==("acreedores hipotecarios a largo plazo")or cuadroaclasificar.get().lower()==("obligaciones en circulación")or cuadroaclasificar.get().lower()==("rentas cobradas por anticipado a largo plazo")or cuadroaclasificar.get().lower()==("intereses cobrados por anticipado a largo plazo"): 
          milable4.config (text = plp)
        elif cuadroaclasificar.get().lower() == ("capital social")or cuadroaclasificar.get().lower()==("aportaciones para futuros aumentos de capital")or cuadroaclasificar.get().lower()==("prima en venta de acciones"): 
          milable4.config (text = ccc)
        elif cuadroaclasificar.get().lower() == ("utilidades acumuladas")or cuadroaclasificar.get().lower()==("pérdidas acumuladas")or cuadroaclasificar.get().lower()==("reservas")or cuadroaclasificar.get().lower()==("efectos de la inflación"): 
          milable4.config (text = ccg)
        else:
          milable4.config (text=ci) 
def window (): 
       raiz.destroy() 
def borrar():
    res = ""
    milable4.config(text = res)
boton1 =Button(myframe, text = "Reiniciar", width = 10,command=borrar)
boton1.grid(row = 8, column = 1)
boton2 =Button(myframe, text = "Clasificar", width = 10, command= result)
boton2.grid(row = 6, column = 1)
boton3 =Button(myframe, text = "Salir", width = 10, command=window)
boton3.grid(row = 8, column = 2)
raiz.mainloop() 