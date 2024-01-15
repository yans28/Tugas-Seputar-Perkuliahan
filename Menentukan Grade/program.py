print()


def grade_mahasiswa(nilai_tugas, nilai_absen, nilai_uts, nilai_uas):
    skor_nilai_akhir = (nilai_tugas * 0.15) + (nilai_absen * 0.05) + (nilai_uts * 0.35) + (nilai_uas * 0.45)

    if skor_nilai_akhir >= 90:
        grade = 'A'
    elif skor_nilai_akhir >= 85:
        grade = 'B+'
    elif skor_nilai_akhir >= 80:
        grade = 'B'
    elif skor_nilai_akhir >= 70:
        grade = 'C+'
    elif skor_nilai_akhir >= 60:
        grade = 'C'
    elif skor_nilai_akhir >= 50:
        grade = 'D'
    else:
        grade = 'E'

    return skor_nilai_akhir, grade


# Input nilai
nilai_tugas = float(input("Masukkan nilai tugas: "))
nilai_absen = float(input("Masukkan nilai absen: "))
nilai_uts = float(input("Masukkan nilai UTS: "))
nilai_uas = float(input("Masukkan nilai UAS: "))

# Hitung nilai akhir dan grade
nilai_akhir, grade = grade_mahasiswa(nilai_tugas, nilai_absen, nilai_uts, nilai_uas)

# Tampilkan hasil
print("Nilai Tugas:", nilai_tugas)
print("Nilai Absen:", nilai_absen)
print("Nilai UTS:", nilai_uts)
print("Nilai UAS:", nilai_uas)
print("Nilai Akhir:", nilai_akhir)
print("Grade:", grade)