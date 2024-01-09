# Metode Ginput
from msvcrt import getch

def input_nilai():
    nilai = input("Masukkan nilai (1-100): ")
    while not 1 <= int(nilai) <= 100:
        print("Input salah!")
        nilai = input("Masukkan nilai (1-100): ")
    return nilai

print(input_nilai())