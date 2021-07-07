import sqlite3
conexion = sqlite3.connect ("BD")
#

cursor = conexion. cursor ()
#cursor.execute ("CREATE TABLE PRODUCTOS (NOMBRE_ART varchar (50), PRECIO INTEGER , SECCION varchar (20) )") #solo se hace 1 vez 

cursor.execute ("INSERT INTO Productos VALUES ('BALON', ' 15', 'DEPORTES')")
conexion.commit ()
conexion.close ()