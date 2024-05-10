#include <iostream>

// Fungsi untuk melakukan Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        // Temukan indeks elemen terkecil di dalam array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar elemen terkecil dengan elemen pertama yang belum diurutkan
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;

    // Meminta pengguna untuk memasukkan panjang array
    std::cout << "Masukkan panjang array: ";
    std::cin >> n;

    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Elemen " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Menampilkan array sebelum diurutkan
    std::cout << "\nArray sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Memanggil fungsi selectionSort untuk mengurutkan array
    selectionSort(arr, n);

    // Menampilkan array setelah diurutkan
    std::cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
