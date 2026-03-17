def reversa():
    print("Por favor ingresa una palabra:")
    base = input("")
    cuentas = 1
    if "Loco" in base or "loco" in base:
        x = 6
        while x > 0:
            locos = ["Espera dijiste loco?","Yo estuve loco una vez","Me metieron en un cuarto","En un cuarto con colchones","Un cuarto con colchones y ratas","Y las ratas me volvieron LOCO..."]
            for loco in locos:
                print(loco)
                loco = loco.split()
                for mini in loco:
                    if 'loco' in mini or 'Loco' in mini or 'LOCO' in mini:
                        cuentas +=1
            print("Wow!, esos fueron", cuentas, "locos... \nBueno con ese", cuentas + 1)
            x = x - 1  
        return
    tam = len(base) - 1
    butt = base[tam]
    while tam > 0:
        tam = tam - 1
        butt = butt + base[tam]
        
    print("Esta es la palabra reversa:")
    print(butt)

reversa()