def hari_ke_angka(n):
    hari = ['Senin', 'Selasa', 'Rabu', 'Kamis', 'Jumat', 'Sabtu', 'Minggu']
    if n < 1 or n > 7:
        return "Angka tidak valid. Masukkan angka antara 1 sampai 7."
    else:
        return hari[n-1]

angka = int(input("Masukkan angka antara 1 sampai 7: "))
print(hari_ke_angka(angka))