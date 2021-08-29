import math
ni = input("insert un numero")
operdator = input("inserte una operacion")
t = operdator
if t == "+":
    na = input("inserta otro numero")
    nx = float(ni)
    ny = float(na)
    xd = (nx, ny)
    print (math.fsum(xd))
elif t == "-":
    na = input("inserta otro numero")
    nx = float(ni)
    ny = float(na)
    xd = (nx - ny)
    print (xd)
elif t == "*":
    na = input("inserta otro numero")
    nx = float(ni)
    ny = float(na)
    xd = (nx * ny)
    print (xd)
elif t == "/":
    na = input("inserta otro numero")
    nx = float(ni)
    ny = float(na)
    xd = (nx / ny)
    print (xd)