import sqlite3
from sqlite3.dbapi2 import Cursor
conexion = sqlite3.connect ("BD")
#

cursor = conexion. cursor ()
#cursor.execute ("CREATE TABLE PRODUCTOS (NOMBRE_ART varchar (50), PRECIO INTEGER , SECCION varchar (20) )") #solo se hace 1 vez 

#cursor.execute ("INSERT INTO Productos VALUES ('BALON', ' 15', 'DEPORTES')")
# insertar datos por una tupla 
""" prodos =[
    
    ("CAMISA",23, "DEPORTES"),
    ("JARRÓN",10, "CERAMICA"),
    ("CAMINON",3, "JUEGUETERIA")

] """
cursor.execute ("SELECT * FROM PRODUCTOS")

prod= cursor.fetchall()
print (prod)

#cursor.executemany("INSERT INTO PRODUCTOS VALUES (?,?,?)", prodos)
#creacion de campo clave  
conexion.commit ()
conexion.close ()

