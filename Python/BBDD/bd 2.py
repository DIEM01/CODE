import sqlite3
#creacion de campo clave 
from sqlite3.dbapi2 import Cursor
conexion = sqlite3.connect ("BD2")
#

cursor = conexion. cursor ()
cursor.execute (" CREATE TABLE PROD2 (CODART VARCHAR (4),NOMBREART VARCHAR (20), PRECIO INTGER, SECCION VARCHAR (10)) ") #solo se hace 1 vez 

'''
AUTO
cursor.execute (" CREATE TABLE PROD2 (ID INTERGER PRIMARY KEY AUTOINCREMENT  ,NOMBREART VARCHAR (20), PRECIO INTGER, SECCION VARCHAR (10)) ") 
prodos =[
    
    ("CAMISA", 23 ,"DEPORTES"),
    ("JARRÓN",10, "CERAMICA"),
    ("CAMINON",3, "JUEGUETERIA"),
    ("TRENN",53, "JUEGUETERIA")
] 

cursor.executemany("INSERT INTO PROD2 VALUES (NULL,?,?,?)", prodos)
'''
prodos =[
    
    ("AR01", "CAMISA", 23 ,"DEPORTES"),
    ("AR02","JARRÓN",10, "CERAMICA"),
    ("AR03","CAMINON",3, "JUEGUETERIA"),
    ("AR04","TRENN",53, "JUEGUETERIA")
] 


cursor.executemany("INSERT INTO PROD2 VALUES (?,?,?,?)", prodos)

conexion.commit ()
conexion.close ()

