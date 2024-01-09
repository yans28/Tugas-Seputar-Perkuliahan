def calculate_score():
    nilai_tugas = float(input("Masukkan Nilai Tugas: "))
    nilai_absen = float(input("Masukkan Nilai Absen: "))
    nilai_uts = float(input("Masukkan Nilai UTS: "))
    nilai_uas = float(input("Masukkan Nilai UAS: "))

    nilai_akhir = (nilai_absen * 5 / 100) + (nilai_tugas * 15 / 100) + (nilai_uts * 35 / 100) + (nilai_uas * 45 / 100)
    
    print("")
    print("Nilai Tugas: ", nilai_tugas)
    print("Nilai Absen: ", nilai_absen)
    print("Nilai UTS: ", nilai_uts)
    print("Nilai UAS: ", nilai_uas)
    print("Nilai Akhir: ", nilai_akhir)
    print("")

calculate_score()