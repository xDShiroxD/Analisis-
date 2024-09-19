#include <iostream>
#include "generateCases.cpp"
#include "SinglyLinkedList.cpp"
#include "BinarySearchTree.cpp"
#include "times.cpp"

int main() {
    const int N = 100; // Tamaño del arreglo de prueba
    int arr[N];

    // Generar diferentes casos de prueba
    generateBestCase(arr, N);
    std::cout << "A BubbleSort con el mejor caso le tomo: " << TiempoBubbleSort(arr, N) << " segundos" << std::endl;
    generateAverageCase(arr, N);
    std::cout << "A BubbleSort con el caso promedio le tomo: " << TiempoBubbleSort(arr, N) << " segundos" << std::endl;
    generateWorstCase(arr, N);
    std::cout << "A BubbleSort con el peor caso le tomo: " << TiempoBubbleSort(arr, N) << " segundos" << std::endl;

    generateBestCase(arr, N);
    std::cout << "A SelectionSort con el mejor caso le tomo: " << TiempoSelectionSort(arr, N) << " segundos" << std::endl;
    generateAverageCase(arr, N);
    std::cout << "A SelectionSort con el caso promedio le tomo: " << TiempoSelectionSort(arr, N) << " segundos" << std::endl;
    generateWorstCase(arr, N);
    std::cout << "A SelectionSort con el peor caso le tomo: " << TiempoSelectionSort(arr, N) << " segundos" << std::endl;

    generateBestCase(arr, N);
    std::cout << "A MergeSort con el mejor caso le tomo: " << TiempoMergeSort(arr, 0, N-1) << " segundos" << std::endl;
    generateAverageCase(arr, N);
    std::cout << "A MergeSort con el caso promedio le tomo: " << TiempoMergeSort(arr, 0, N-1) << " segundos" << std::endl;
    generateWorstCase(arr, N);
    std::cout << "A MergeSort con el peor caso le tomo: " << TiempoMergeSort(arr, 0, N-1) << " segundos" << std::endl;



    // Probar operaciones en estructuras de datos
    SinglyLinkedList list;
    auto tiempo1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        list.insert(rand() % 100);
    }
    auto tiempo2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = tiempo2 - tiempo1;
    std::cout << "Tiempo trascurrido insertando " << N << "elementos: " << elapsed.count() << std::endl;
    list.display();

    BinarySearchTree bst;
    for (int i = 0; i < 10; ++i) {
        bst.insert(rand() % 100);
    }
    std::cout << "Recorrido inorden del árbol BST: ";
    bst.inOrderTraversal();

    return 0;
}
