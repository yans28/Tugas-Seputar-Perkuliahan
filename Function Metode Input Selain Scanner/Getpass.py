# Metode getpass
import getpass

def input_sandi():
    sandi = getpass.getpass("Masukkan sandi: ")
    return sandi

print(input_sandi())