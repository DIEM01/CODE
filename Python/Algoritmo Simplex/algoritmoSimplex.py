import multiprocessing
import numpy as numpy
import time
from tkinter import *
import tkinter as tk
from tkinter import messagebox as MessageBox
from tkinter import messagebox
raiz = Tk()
myframe = Frame(raiz, width = 700, height = 760)
raiz.geometry("700x760")
raiz.resizable(0,0)
myframe.pack()
raiz.title("Metodo Simplex")


cuad_clasi = IntVar() 
cuad_vari = IntVar()
cuad_ecua = IntVar()
cuad_ecua_nom1 =  IntVar()
cuad_coe_1_4 = IntVar ()
cuad_coe_1= IntVar ()
cuad3 = IntVar()
cuad4= IntVar() 
cuad1 = IntVar()
cuad2 =IntVar()
cuadineq = IntVar()
cuadvaldesg = IntVar ()
cuadmaxmin = IntVar()
cuadZ1 = IntVar()
cuadZ2= IntVar()
cuad5 = IntVar()
cuadZ3 = IntVar()
cuadZ4 = IntVar()
cuadZ5 = IntVar()
label1 = Label(myframe , text = "Ingresa el número de restricciones")
label1.place(x = 10, y = 10)   
cuad_clasi_proble = Entry(myframe, textvariable=cuad_clasi )
cuad_clasi_proble.place(x = 10, y = 35)
cuad_clasi_proble.config (justify = "right")
constraints = int(cuad_clasi_proble.get())
label1 = Label(myframe , text = "Ingresa el número de variables")
label1.place(x = 10, y = 55)  
label1 = Label(myframe , text = "Resultado", font=("Arial", 11))
label1.place(x = 300, y = 20)
  
cuad_clasi_vari = Entry(myframe, textvariable=cuad_vari )
cuad_clasi_vari.place(x = 10, y = 80)
cuad_clasi_vari.config (justify = "right")
coeffs = int(cuad_clasi_vari.get())

def window (): 
       raiz.destroy() 
def terminateProgram():
    import sys

    sys.exit()

    
def main():
    constraints = int(cuad_clasi_proble.get())#numero de ecuaciones
    coeffs = int(cuad_clasi_vari.get())#numero de variables 
    method = SimplexMethod()
    matrix = method.generateMatrix(coeffs, constraints)

    for cons in range(constraints):
        if (constraints == 2 or 3 or 4 or 5) and (coeffs == 2):

            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 en la ecuacion 1 ")
            label2.place(x= 10 , y=100)  
            cuad_coe_1 = Entry(myframe, textvariable= cuad1)
            cuad_coe_1.place(x = 10, y =  125)
            cuad_coe_1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 2 de la ecuacion 1" )
            label2.place(x= 10 , y=150)  
            cuad_coe_2 = Entry(myframe, textvariable= cuad2)
            cuad_coe_2.place(x = 10, y =  175)
            cuad_coe_2.config (justify = "right")
            
            # para todas 
            label2 = Label(myframe , text = "Para <= ingresa  1, para >= ingresa 2" )
            label2.place(x= 10 , y=400)  
            cuad_coe_desg = Entry(myframe, textvariable= cuadineq)
            cuad_coe_desg.place(x = 10, y =  425)
            cuad_coe_desg.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el valor de la desigualdad " )
            label2.place(x= 10 , y=450)  
            cuad_coe_val_desg = Entry(myframe, textvariable= cuadvaldesg)
            cuad_coe_val_desg.place(x = 10, y =  475)
            cuad_coe_val_desg.config (justify = "right")
            label2 = Label(myframe , text = "Para Maximizar ingresa 1, para minimizar ingresa 2" )
            label2.place(x= 10 , y=500)  
            cuad_coe_max_min= Entry(myframe, textvariable= cuadmaxmin)
            cuad_coe_max_min.place(x = 10, y =  525)
            cuad_coe_max_min.config (justify = "right")
            
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 de la ecuacion objetivo" )
            label2.place(x= 10 , y=550)  
            cuad_coe_Z1 = Entry(myframe, textvariable= cuadZ1)
            cuad_coe_Z1.place(x = 10, y = 575 )
            cuad_coe_Z1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 2 de la ecuacion objetivo" )
            label2.place(x= 10 , y=600)  
            cuad_coe_Z2= Entry(myframe, textvariable= cuadZ2)
            cuad_coe_Z2.place(x = 10, y =  625)
            cuad_coe_Z2.config (justify = "right")
            cons+1
        elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 1):
            label2 = Label(myframe , text ="Ingresa el coeficiente numero 1 en la ecuacion 1 ")
            label2.place(x= 10 , y=100)  
            cuad_coe_1 = Entry(myframe, textvariable= cuad1)
            cuad_coe_1.place(x = 10, y =  125)
            cuad_coe_1.config (justify = "right")
            label2 = Label(myframe , text = "Para <= ingresa  1, para >= ingresa 2" )
            label2.place(x= 10 , y=400)  
            cuad_coe_desg = Entry(myframe, textvariable= cuadineq)
            cuad_coe_desg.place(x = 10, y =  425)
            cuad_coe_desg.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el valor de la desigualdad " )
            label2.place(x= 10 , y=450)  
            cuad_coe_val_desg = Entry(myframe, textvariable= cuadvaldesg)
            cuad_coe_val_desg.place(x = 10, y =  475)
            cuad_coe_val_desg.config (justify = "right")
            label2 = Label(myframe , text = "Para Maximizar ingresa 1, para minimizar ingresa 2" )
            label2.place(x= 10 , y=500)  
            cuad_coe_max_min= Entry(myframe, textvariable= cuadmaxmin)
            cuad_coe_max_min.place(x = 10, y =  525)
            cuad_coe_max_min.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 de la ecuacion objetivo" )
            label2.place(x= 10 , y=550)  
            cuad_coe_Z1 = Entry(myframe, textvariable= cuadZ1)
            cuad_coe_Z1.place(x = 10, y = 575 )
            cuad_coe_Z1.config (justify = "right")
            cons+1
        elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 3):
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 en la ecuacion")
            label2.place(x= 10 , y=100)  
            cuad_coe_1 = Entry(myframe, textvariable= cuad1)
            cuad_coe_1.place(x = 10, y =  125)
            cuad_coe_1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 2 de la ecuacion" )
            label2.place(x= 10 , y=150)  
            cuad_coe_2 = Entry(myframe, textvariable= cuad2)
            cuad_coe_2.place(x = 10, y =  175)
            cuad_coe_2.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 3 de la ecuacion" )
            label2.place(x= 10 , y=200)  
            cuad_coe_3 = Entry(myframe, textvariable= cuad3)
            cuad_coe_3.place(x = 10, y =  225)
            cuad_coe_3.config (justify = "right")
            # para todas 
            label2 = Label(myframe , text = "Para <= ingresa  1, para >= ingresa 2" )
            label2.place(x= 10 , y=400)  
            cuad_coe_desg = Entry(myframe, textvariable= cuadineq)
            cuad_coe_desg.place(x = 10, y =  425)
            cuad_coe_desg.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el valor de la desigualdad " )
            label2.place(x= 10 , y=450)  
            cuad_coe_val_desg = Entry(myframe, textvariable= cuadvaldesg)
            cuad_coe_val_desg.place(x = 10, y =  475)
            cuad_coe_val_desg.config (justify = "right")
            label2 = Label(myframe , text = "Para Maximizar ingresa 1, para minimizar ingresa 2" )
            label2.place(x= 10 , y=500)  
            cuad_coe_max_min= Entry(myframe, textvariable= cuadmaxmin)
            cuad_coe_max_min.place(x = 10, y =  525)
            cuad_coe_max_min.config (justify = "right")
            
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 de la ecuacion objetivo" )
            label2.place(x= 10 , y=550)  
            cuad_coe_Z1 = Entry(myframe, textvariable= cuadZ1)
            cuad_coe_Z1.place(x = 10, y = 575 )
            cuad_coe_Z1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 2 de la ecuacion objetivo" )
            label2.place(x= 10 , y=600)  
            cuad_coe_Z2= Entry(myframe, textvariable= cuadZ2)
            cuad_coe_Z2.place(x = 10, y =  625)
            cuad_coe_Z2.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 3 de la ecuacion objetivo" )
            label2.place(x= 10 , y=650)  
            cuad_coe_Z3= Entry(myframe, textvariable= cuadZ2)
            cuad_coe_Z3.place(x = 10, y =  675)
            cuad_coe_Z3.config (justify = "right")
            cons+1            
        elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 4):
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 en la ecuacion")
            label2.place(x= 10 , y=100)  
            cuad_coe_1 = Entry(myframe, textvariable= cuad1)
            cuad_coe_1.place(x = 10, y =  125)
            cuad_coe_1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 2 de la ecuacion" )
            label2.place(x= 10 , y=150)  
            cuad_coe_2 = Entry(myframe, textvariable= cuad2)
            cuad_coe_2.place(x = 10, y =  175)
            cuad_coe_2.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 3 de la ecuacion" )
            label2.place(x= 10 , y=200)  
            cuad_coe_3 = Entry(myframe, textvariable= cuad3)
            cuad_coe_3.place(x = 10, y =  225)
            cuad_coe_3.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 4 de la ecuacion" )
            label2.place(x= 10 , y=250)  
            cuad_coe_4 = Entry(myframe, textvariable= cuad4)
            cuad_coe_4.place(x = 10, y =  275)
            cuad_coe_4.config (justify = "right")
            # para todas 
            label2 = Label(myframe , text = "Para <= ingresa  1, para >= ingresa 2" )
            label2.place(x= 10 , y=400)  
            cuad_coe_desg = Entry(myframe, textvariable= cuadineq)
            cuad_coe_desg.place(x = 10, y =  425)
            cuad_coe_desg.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el valor de la desigualdad " )
            label2.place(x= 10 , y=450)  
            cuad_coe_val_desg = Entry(myframe, textvariable= cuadvaldesg)
            cuad_coe_val_desg.place(x = 10, y =  475)
            cuad_coe_val_desg.config (justify = "right")
            label2 = Label(myframe , text = "Para Maximizar ingresa 1, para minimizar ingresa 2" )
            label2.place(x= 10 , y=500)  
            cuad_coe_max_min= Entry(myframe, textvariable= cuadmaxmin)
            cuad_coe_max_min.place(x = 10, y =  525)
            cuad_coe_max_min.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 de la ecuacion objetivo" )
            label2.place(x= 10 , y=550)  
            cuad_coe_Z1 = Entry(myframe, textvariable= cuadZ1)
            cuad_coe_Z1.place(x = 10, y = 575 )
            cuad_coe_Z1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 2 de la ecuacion objetivo" )
            label2.place(x= 10 , y=600)  
            cuad_coe_Z2= Entry(myframe, textvariable= cuadZ2)
            cuad_coe_Z2.place(x = 10, y =  625)
            cuad_coe_Z2.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 3 de la ecuacion objetivo" )
            label2.place(x= 10 , y=650)  
            cuad_coe_Z3 = Entry(myframe, textvariable= cuadZ1)
            cuad_coe_Z3.place(x = 10, y = 675 )
            cuad_coe_Z3.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 4 de la ecuacion objetivo" )
            label2.place(x= 10 , y=700)  
            cuad_coe_Z4= Entry(myframe, textvariable= cuadZ2)
            cuad_coe_Z4.place(x = 10, y =  725)
            cuad_coe_Z4.config (justify = "right")
            cons+1
        elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 5):
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 en la ecuacion")
            label2.place(x= 10 , y=100)  
            cuad_coe_1 = Entry(myframe, textvariable= cuad1)
            cuad_coe_1.place(x = 10, y =  125)
            cuad_coe_1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 2 de la ecuacion" )
            label2.place(x= 10 , y=150  )
            cuad_coe_2 = Entry(myframe, textvariable= cuad2)
            cuad_coe_2.place(x = 10, y =  175)
            cuad_coe_2.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 3 de la ecuacion" )
            label2.place(x= 10 , y=200)  
            cuad_coe_3 = Entry(myframe, textvariable= cuad3)
            cuad_coe_3.place(x = 10, y =  225)
            cuad_coe_3.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 4 de la ecuacion" )
            label2.place(x= 10 , y=250)  
            cuad_coe_4 = Entry(myframe, textvariable= cuad4)
            cuad_coe_4.place(x = 10, y =  275)
            cuad_coe_4.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficeinte numero 5 de la ecuacion" )
            label2.place(x= 10 , y=300)  
            cuad_coe_5 = Entry(myframe, textvariable= cuad5)
            cuad_coe_5.place(x = 10, y =  325)
            cuad_coe_5.config (justify = "right")
            # para todas 
            label2 = Label(myframe , text = "Para <= ingresa  1, para >= ingresa 2" )
            label2.place(x= 10 , y=400)  
            cuad_coe_desg = Entry(myframe, textvariable= cuadineq)
            cuad_coe_desg.place(x = 10, y =  425)
            cuad_coe_desg.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el valor de la desigualdad " )
            label2.place(x= 10 , y=450)  
            cuad_coe_val_desg = Entry(myframe, textvariable= cuadvaldesg)
            cuad_coe_val_desg.place(x = 10, y =  475)
            cuad_coe_val_desg.config (justify = "right")
            label2 = Label(myframe , text = "Para Maximizar ingresa 1, para minimizar ingresa 2" )
            label2.place(x= 10 , y=500)  
            cuad_coe_max_min= Entry(myframe, textvariable= cuadmaxmin)
            cuad_coe_max_min.place(x = 10, y =  525)
            cuad_coe_max_min.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 1 de la ecuacion objetivo" )
            label2.place(x= 10 , y=550)  
            cuad_coe_Z1 = Entry(myframe, textvariable= cuadZ1)
            cuad_coe_Z1.place(x = 10, y = 575 )
            cuad_coe_Z1.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 2 de la ecuacion objetivo" )
            label2.place(x= 10 , y=600)  
            cuad_coe_Z2= Entry(myframe, textvariable= cuadZ2)
            cuad_coe_Z2.place(x = 10, y =  625)
            cuad_coe_Z2.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 3 de la ecuacion objetivo" )
            label2.place(x= 10 , y=650)  
            cuad_coe_Z3 = Entry(myframe, textvariable= cuadZ3)
            cuad_coe_Z3.place(x = 10, y = 675 )
            cuad_coe_Z3.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 4 de la ecuacion objetivo" )
            label2.place(x= 10 , y=700)  
            cuad_coe_Z4= Entry(myframe, textvariable= cuadZ4)
            cuad_coe_Z4.place(x = 10, y =  725)
            cuad_coe_Z4.config (justify = "right")
            label2 = Label(myframe , text = "Ingresa el coeficiente numero 5 de la ecuacion objetivo" )
            label2.place(x= 10 , y=700)  
            cuad_coe_Z5= Entry(myframe, textvariable= cuadZ5)
            cuad_coe_Z5.place(x = 10, y =  725)
            cuad_coe_Z5.config (justify = "right")
            cons+1
     
        
        
        
        def objectiveFunction(coeffs):
            if (constraints == 2 or 3 or 4 or 5) and (coeffs == 2):
                eq = ''
                z1 = ''
                z1 += cuad_coe_Z1.get() + ','
                eq += z1 + cuad_coe_Z2.get () + ','
                eq += '0'
                return eq
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 1):
                eq = ''
                eq += cuad_coe_Z1.get() + ','
                eq += '0'
                return eq
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 3):
                eq = ''
                z1 = ''
                z2=''
                z1 += cuad_coe_Z1.get() + ','
                z2 += z1 + cuad_coe_Z2.get () + ','
                eq += z2 + cuad_coe_Z3.get()+ ','
                eq += '0'
                return eq
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 4):
                eq = ''
                z1 = ''
                z2=''
                z3=''
                z1 += cuad_coe_Z1.get() + ','
                z2 += z1 + cuad_coe_Z2.get () + ','
                z3 += z2 + cuad_coe_Z3.get()+ ','
                eq += z3 + cuad_coe_Z4.get()+ ','
                eq += '0'
                return eq
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 5):
                eq = ''
                z1 = ''
                z2=''
                z3=''
                z4=''
                z1 += cuad_coe_Z1.get() + ','
                z2 += z1 + cuad_coe_Z2.get () + ','
                z3 += z2 + cuad_coe_Z3.get() + ','
                z4 += z3 + cuad_coe_Z4.get() + ','
                eq += z4 +cuad_coe_Z5.get () + ','
                eq += '0'
                return eq
              
        
        def en_guardar():
            if (constraints == 2 or 3 or 4 or 5) and (coeffs == 2):
                c1 = ''
                eq = ''
                messagebox.showinfo("Ecuación", "Las variables se han guardado correctamente. Ingresa la sigiente ecuación")
                c1 += cuad_coe_1.get() + ','
                eq += c1 + cuad_coe_2.get() + ','
                
                ineq = int(cuad_coe_desg.get())
                if ineq == 1:
                    eq += 'LTE,'
                elif ineq == 2:
                    eq += 'GTE,'
                else:
                    terminateProgram()
                eq += cuad_coe_val_desg.get()
                method.constraint(matrix, eq)
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 1):
                eq = ''
                messagebox.showinfo("Ecuación", "Las variables se han guardado correctamente. Ingresa la sigiente ecuación")
                eq += cuad_coe_1.get() + ','

                ineq = int(cuad_coe_desg.get())
                if ineq == 1:
                    eq += 'LTE,'
                elif ineq == 2:
                    eq += 'GTE,'
                else:
                    terminateProgram()
                eq += cuad_coe_val_desg.get()
                method.constraint(matrix, eq)               
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 3):  
                c1 = ''
                eq = ''
                c2= ''
                messagebox.showinfo("Ecuación", "Las variables se han guardado correctamente. Ingresa la sigiente ecuación")
                c1 += cuad_coe_1.get() + ','
                c2 += c1 + cuad_coe_2.get() + ','
                eq += c2 + cuad_coe_3.get() + ','
                ineq = int(cuad_coe_desg.get())
                if ineq == 1:
                    eq += 'LTE,'
                elif ineq == 2:
                    eq += 'GTE,'
                else:
                    terminateProgram()
                eq += cuad_coe_val_desg.get()
                method.constraint(matrix, eq)    
                
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 4):
                c1 = ''
                eq = ''
                c2= ''
                c3= ''
                messagebox.showinfo("Ecuación", "Las variables se han guardado correctamente. Ingresa la sigiente ecuación")
                c1 += cuad_coe_1.get() + ','
                c2 += c1 + cuad_coe_2.get() + ','
                c3 += c2 + cuad_coe_3.get() + ','
                eq += c3 + cuad_coe_4.get() + ','
                ineq = int(cuad_coe_desg.get())
                if ineq == 1:
                    eq += 'LTE,'
                elif ineq == 2:
                    eq += 'GTE,'
                else:
                    terminateProgram()
                eq += cuad_coe_val_desg.get()
                method.constraint(matrix, eq) 
            elif (constraints == 2 or 3 or 4 or 5) and (coeffs == 5): 
                c1 = ''
                eq = ''
                c2= ''
                c3= ''
                c4= ''
                messagebox.showinfo("Ecuación", "Las variables se han guardado correctamente. Ingresa la sigiente ecuación")
                c1 += cuad_coe_1.get() + ','
                c2 += c1 + cuad_coe_2.get() + ','
                c3 += c2 + cuad_coe_3.get() + ','
                c4 += c3 + cuad_coe_4.get() + ','
                eq += c4 + cuad_coe_5.get() + ','
                ineq = int(cuad_coe_desg.get())
                if ineq == 1:
                    eq += 'LTE,'
                elif ineq == 2:
                    eq += 'GTE,'
                else:
                    terminateProgram()
                eq += cuad_coe_val_desg.get()
                method.constraint(matrix, eq)  
                
                
                                   
        boton2 =Button(myframe, text = "Guardar", width = 10,command=en_guardar)
        boton2.place(x = 500, y = 660)       
            
            
        def obj ():
            method.objective(matrix, objectiveFunction(coeffs))
            objType = int(cuad_coe_max_min.get())
            if objType < 1 or objType > 2:
                terminateProgram()
            else:
                if objType == 2:
                    print(method.minimization(matrix))
                else:
                    print(method.maximization(matrix))
                    
    boton3 =Button(myframe, text = "Resultado", width = 10,command=obj)
    boton3.place(x = 500, y = 700)          

class SimplexMethod:
    def generateMatrix(self, variables, constants):
        table = numpy.zeros((constants + 1, variables + constants + 2))
        return table

    def roundNextRow(self, t):
        minim = min(t[:-1, -1])
        if minim >= 0:
            return False
        return True

    def RoundNext(self, t):
        lengthRow = len(t[:, 0])
        minim = min(t[lengthRow - 1, :-1])
        if minim >= 0:
            return False
        return True

    def locateaNegativeRows(self, t):
        lengthColumn = len(t[0, :])
        minim = min(t[:-1, lengthColumn - 1])
        if minim <= 0:
            y = numpy.where(t[:-1, lengthColumn - 1] == minim)[0][0]
        else:
            y = None
        return y

    def locateNegatives(self, t):
        lengthRow = len(t[:, 0])
        minim = min(t[lengthRow - 1, :-1])
        if minim <= 0:
            z = numpy.where(t[lengthRow - 1, :-1] == minim)[0][0]
        else:
            z = None
        return z

    def locatePivotR(self, t):
        to = []
        r = self.locateaNegativeRows(t)
        row = t[r, :-1]
        minim = min(row)
        c = numpy.where(row == minim)[0][0]
        column = t[:-1, c]
        for x, y in zip(column, t[:-1, -1]):
            if x ** 2 > 0 and y / x > 0:
                to.append(y / x)
            else:
                to.append(15000)
        loc = to.index(min(to))
        return [loc, c]

    def locatePivot(self, t):
        if self.RoundNext(t):
            allRecords = []
            negative = self.locateNegatives(t)
            for i, b in zip(t[:-1, negative], t[:-1, -1]):
                if b / i > 0 and i ** 2 > 0:
                    allRecords.append(b / i)
                else:
                    allRecords.append(15000)
            loc = allRecords.index(min(allRecords))
            return [loc, negative]

    def pivot(self, row, col, matrix):
        lengthRow = len(matrix[:, 0])
        lengthColumn = len(matrix[0, :])
        t = numpy.zeros((lengthRow, lengthColumn))
        pivotRow = matrix[row, :]
        if matrix[row, col] ** 2 > 0:
            e = 1 / matrix[row, col]
            r = pivotRow * e
            for i in range(len(matrix[:, col])):
                k = matrix[i, :]
                c = matrix[i, col]
                if list(k) == list(pivotRow):
                    continue
                else:
                    t[i, :] = list(k - r * c)
            t[row, :] = list(r)
            zz = 100
            for i in range(len(t)):
                vall= ([format(val, '.2f') for val in t[i]])
                label1 = Label(myframe , text = vall)
                label1.place(x = 300, y = zz)
                zz=zz+25
            return t
        else:
            print('No se puede usar de pivote este elemento.')

            
    def conversion(self, equation):
        equation = equation.split(',')
        if 'LTE' in equation:
            lte = equation.index('LTE')
            del equation[lte]
            equation = [float(a) for a in equation]
            return equation
        if 'GTE' in equation:
            gte = equation.index('GTE')
            del equation[gte]
            equation = [float(a) * -1 for a in equation]
            return equation

    def convertMinimum(self, t):
        t[-1, :-2] = [-1 * a for a in t[-1, :-2]]
        t[-1, -1] = -1 * t[-1, -1]
        return t

    def generateVariable(self, t):
        lengthColumn = len(t[0, :])
        lengthRow = len(t[:, 0])
        va = lengthColumn - lengthRow - 1
        variables = []
        for w in range(va):
            variables.append('x' + str(w + 1))
        return variables

    def addConstants(self, t):
        lengthRow = len(t[:, 0])
        e = []
        for i in range(lengthRow):
            to = 0
            for q in t[i, :]:
                to += q ** 2
            if to == 0:
                e.append(to)
        if len(e) > 1:
            return True
        return False

    def constraint(self, t, equation):
        if self.addConstants(t) == True:
            lengthColumn = len(t[0, :])
            lengthRow = len(t[:, 0])
            v = lengthColumn - lengthRow - 1
            k = 0
            while k < lengthRow:
                checkRow = t[k, :]
                to = 0
                for b in checkRow:
                    to += float(b ** 2)
                if to == 0:
                    row = checkRow
                    break
                k += 1
            equation = self.conversion(equation)
            d = 0
            while d < len(equation) - 1:
                row[d] = equation[d]
                d += 1
            row[-1] = equation[-1]
            row[v + k] = 1
        else:
            print('RESTRICCION NO AGREGADA.')

    def objectiveAdd(self, t):
        lengthRow = len(t[:, 0])
        e = []
        for x in range(lengthRow):
            to = 0
            for y in t[x, :]:
                to += y ** 2
            if to == 0:
                e.append(to)
        if len(e) != 1:
            return False
        return True

    def objective(self, t, equation):
        if self.objectiveAdd(t) == True:
            equation = [float(n) for n in equation.split(',')]
            lengthRow = len(t[:, 0])
            row = t[lengthRow - 1, :]
            a = 0
            while a < len(equation) - 1:
                row[a] = equation[a] * -1
                a += 1
            row[-2] = 1
            row[-1] = equation[-1]
        else:
            print('Agrega restricciones antes de la funcion objetivo.')

    def maximization(self, t):
        while self.roundNextRow(t) == True:
            t = self.pivot(self.locatePivotR(t)[0], self.locatePivotR(t)[1], t)
        while self.RoundNext(t) == True:
            t = self.pivot(self.locatePivot(t)[0], self.locatePivot(t)[1], t)
        lengthColumn = len(t[0, :])
        lengthRow = len(t[:, 0])
        var = lengthColumn - lengthRow - 1
        x = 0
        valu = {}
        for x in range(var):
            column = t[:, x]
            su = sum(column)
            m = max(column)
            if float(su) == float(m):
                loc = numpy.where(column == m)[0][0]
                valu[self.generateVariable(t)[x]] = t[loc, -1]
            else:
                valu[self.generateVariable(t)[x]] = 0
        valu['Maximo'] = t[-1, -1]

        label55 = Label(myframe , text = valu)
        label55.place(x = 300, y = 60)
        return valu

    def minimization(self, t):
        t = self.convertMinimum(t)
        while self.roundNextRow(t) == True:
            t = self.pivot(self.locatePivotR(t)[0], self.locatePivotR(t)[1], t)
        while self.RoundNext(t) == True:
            t = self.pivot(self.locatePivot(t)[0], self.locatePivot(t)[1], t)
        lengthColumn = len(t[0, :])
        lengthRow = len(t[:, 0])
        var = lengthColumn - lengthRow - 1
        x = 0
        val = {}
        for x in range(var):
            column = t[:, x]
            su = sum(column)
            m = max(column)
            if float(su) == float(m):
                loc = numpy.where(column == m)[0][0]
                val[self.generateVariable(t)[x]] = t[loc, -1]
            else:
                val[self.generateVariable(t)[x]] = 0
                val['Minimo'] = t[-1, -1] * -1
                
        label66 = Label(myframe , text = val)
        label66.place(x = 300, y = 60)
        return val
def clear_labels_and_entries():
    ty = 100
    jj= 60
    for i in range (20):
        
 
        label1 = Label(myframe , text = "                                                                                                                                                                                        ")
        label1.place(x = 10, y = ty)
        ty = ty + 25
    for  i in range (25):
        label1 = Label(myframe , text = "                                                                                                   ")
        label1.place(x = 10, y = ty)
        ty =ty +25
    for  i in range (40):
        label1 = Label(myframe , text = "                                                                                                                            ")
        label1.place(x = 300, y = jj)
        jj =jj +10
boton1 =Button(myframe, text = "Crear", width = 10,command=main)
boton1.place(x = 400, y = 660)
boton5 =Button(myframe, text = "Salir", width = 10, command=window)
boton5.place(x = 400, y = 700)
boton10 =Button(myframe, text = "Reiniciar", width = 10, command=clear_labels_and_entries)
boton10.place(x = 450, y = 620)

boto =Button(myframe, text = "Resultado", width = 10)
boto.place(x = 500, y = 700)  
                                   
boton2 =Button(myframe, text = "Guardar", width = 10)
boton2.place(x = 500, y = 660)      
raiz.mainloop() 