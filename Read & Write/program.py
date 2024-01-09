# Definisi fungsi baca file
def baca_file(nama_file):
    with open(nama_file, 'r') as file:
        isi_file = file.read()
    return isi_file

# Definisi fungsi tulis file
def tulis_file(nama_file, isi_file):
    with open(nama_file, 'w') as file:
        file.write(isi_file)

# Meminta nama file dari user
nama_file = input("Masukkan nama file (NIM).txt: ")
print("")

# Membaca file dan menampilkan isi file
isi_file = baca_file(nama_file)
print("Isi file:", isi_file)

# Mengubah isi file menjadi huruf besar
isi_file_besar = isi_file.upper()

# Menulis file yang sudah diubah
tulis_file(nama_file, isi_file_besar)

# Membaca file lagi dan menampilkan isi file
isi_file_lagi = baca_file(nama_file)
print("\nIsi file setelah diubah:", isi_file_lagi)


print("")