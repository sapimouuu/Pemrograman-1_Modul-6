a = input()
b = input()

if len(a) != len(b):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    star = 0
    pagar = 0
    
    for i in range(len(a)):
        if a[i] == ' ' and b[i] == ' ':
            print(" ", end="")
        elif a[i] == b[i]:
            print("*", end="")
            star += 1
        else:
            print("#", end="")
            pagar += 1
            
    print()
    print(f"* = {star}")
    print(f"# = {pagar}")
    
    if star >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")