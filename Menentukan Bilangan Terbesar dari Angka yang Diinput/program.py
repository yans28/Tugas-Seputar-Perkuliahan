def get_max(a, b):
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return "Bilangan-bilangan tersebut sama."

a = int(input("Masukkan bilangan pertama: "))
b = int(input("Masukkan bilangan kedua: "))

print("Bilangan terbesar adalah: ", get_max(a, b))