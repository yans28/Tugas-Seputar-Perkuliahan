def tampilkan_data(nim_list):
    for index, nim in enumerate(nim_list):
        print(f"Index: {index} NIM: {nim}")

def hitung_rata_rata(nim_list):
    total = sum(nim_list)
    rata_rata = total / len(nim_list)
    return rata_rata

nim_list = [3, 1, 2, 3, 1, 0, 5, 0, 5]
# Panggil fungsi tampilkan_data untuk menampilkan data per index
tampilkan_data(nim_list)

# Panggil fungsi hitung_rata_rata untuk menghitung nilai rata - rata dari data list ( nim )
rata_rata = hitung_rata_rata(nim_list)
print(f"Nilai rata-rata: {rata_rata}")