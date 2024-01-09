def input_data():
    print("Masukkan nama anda: ")
    nama = input()

    print("Masukkan usia anda: ")
    usia = int(input())

    print("Masukkan jenis kelamin anda (L/P): ")
    jk = input()

    return nama, usia, jk

nama, usia, jk = input_data()
print("\nData yang anda masukkan: ")
print("Nama: ", nama)
print("Usia: ", usia)
print("Jenis Kelamin: ", jk)