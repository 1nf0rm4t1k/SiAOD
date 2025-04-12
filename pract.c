#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <string.h>

// void SelectSort(int a[], int n, int *C, int *M) {
//     *C = 0;
//     *M = 0;
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             (*C)++;
//             if (a[j] < a[min_idx]) {
//                 min_idx = j;
//             }
//         }
//             (*M)+= 3;
//             int temp = a[min_idx];
//             a[min_idx] = a[i];
//             a[i] = temp;
//     }
// }

// void UpSelectSort(int a[], int n, int *C, int *M){
//     *C = 0;
//     *M = 0;
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             (*C)++;
//             if (a[j] < a[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         if(min_idx != i){
//             (*M) += 3;
//             int temp = a[min_idx];
//             a[min_idx] = a[i];
//             a[i] = temp;
//         }
//     }
// }

// void BubbleSort(int arr[], int n, int *C, int *M) {
//     int temp;
//     *C = 0;
//     *M = 0;
    
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             (*C)++;
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 (*M)+=3;
//             }
//         }
//     }
// }

// void ShakerSort(int arr[], int n, int *C, int *M) {
//     int left = 0;
//     int right = n - 1;
//     int last;
    
//     *M = 0;
//     *C = 0;

//     while (left < right) {
//         last = left;

//         for (int i = left; i < right; i++) {
//             (*C)++;
//             if (arr[i] > arr[i + 1]) {
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//                 (*M) += 3;
//                 last = i;
//             }
//         }
//         right = last;

//         for (int i = right; i > left; i--) {
//             (*C)++;
//             if (arr[i - 1] > arr[i]) {
//                 int temp = arr[i-1];
//                 arr[i-1] = arr[i];
//                 arr[i] = temp;
//                 (*M) += 3;
//                 last = i;
//             }
//         }
//         left = last;
//     }
// }

// void InsertSort(int a[], int n, int *C, int *M) {
//     int key, j;
//     *C = 0;
//     *M = 0;
//     for (int i = 1; i < n; i++) {
//         key = a[i];
//         j = i - 1;
//         (*C)++;
//         while (j >= 0 && key < a[j]) {
//             (*C)++;
//             a[j + 1] = a[j];
//             (*M)++;
//             j--;
//         }
//         if(j >= 0){
//             (*C)++;
//         }
//         a[j + 1] = key;
//         (*M)++;
//     }
// }

// void ShellSort(int arr[], int n, int* C, int* M) {
//     int gap = 1;
//     *C = 0;
//     *M = 0;
    
//     for (int i = 1; i < log2(n)-1; i++) {
//         gap = 2 * gap + 1;
//     }
    
//     while (gap >= 1) {
//         for (int i = gap; i < n; i++) {
//             int temp = arr[i];
//             (*M)++;
//             int j = i;
            
//             (*C)++;
//             while (j >= gap && arr[j - gap] > temp) {
//                 (*M)++;
//                 arr[j] = arr[j - gap];
//                 j -= gap;
                
//                 if (j >= gap) {
//                     (*C)++;
//                 }
//             }
            
            
//                 (*M)++;
//                 arr[j] = temp;
            
//         }
//         gap--;
//         gap /= 2;
//     }
// }

    // void binarySearch_v1(int arr[], int size, int target) {
    //     int left = 0;
    //     int right = size - 1;
    //     int cnt = 0;
    //     int mid;

    //     while (left <= right) {
    //         mid = left + (right-left) / 2;
    //         cnt++;
    //         if (arr[mid] == target) {
    //             printf(" %3i ", cnt);
    //             return;
    //         }
    //         cnt++;
    //         if (arr[mid] < target) {
    //             left = mid + 1;
    //         } else {
    //             right = mid - 1;
    //         }
    //     }
    //     printf("Element not found");
    // }

    // void binarySearch_v2(int arr[], int size, int target) {
    //     int left = 0;
    //     int right = size - 1;
    //     int cnt = 0;
    //     int mid;

    //     while (left < right) {
    //         mid = left + (right-left) / 2;
    //         cnt++;
    //         if (arr[mid] < target) {
    //             left = mid + 1;
    //         } else {
    //             right = mid;
    //         }
    //     }
    //     cnt++;
    //     if(arr[left] == target){
    //         printf(" %3i ", cnt);
    //     }else{
    //         printf("Element not found");
    //     }
    // }

void FillInc(int a[], int n){
    for (int i=0; i<n;i++){
        a[i]=1+i;
    }
}

void FillDec(int a[], int n){
    for(int i = 0; i < n; i++){
        a[i] = n-i;
    }
}

void FillRand(int a[], int n){
    srand(time(NULL));
    for (int i=0; i<n;i++){
        a[i]=rand()%100+1;
    }
}

// int CheckSum(int a[], int n){
//     int sum=0;
//     for (int i=0; i<n;i++){
//         sum+=a[i];
//     }
//     printf("Summ: %d\n",sum);
// }

// int RunNumber(int a[], int n){
//     int s=1;
//     for (int i=1; i<n;i++){
//         if(a[i]<a[i-1]){
//             s+=1;
//         }
//     }
//     printf("Run numder: %d\n",s);
// }

// void PrintMas(int a[], int n){
//     for (int i=0; i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }

// typedef struct {
//     char second_name[30];
//     char name[30];
//     char surname[30];
//     char num[16];
// } Person;

// typedef enum {
//     SECONDNAME_NAME,
//     SECONDNAME_SURNAME,
//     NAME_SURNAME
// } SortKey;

// typedef enum {
//     ASCENDING,
//     DESCENDING
// } SortDirection;

// SortKey current_key = SECONDNAME_NAME;
// SortDirection current_dir = ASCENDING;

// int less(const Person *x, const Person *y){
//     switch(current_dir){
//         case ASCENDING:
//             switch(current_key){
//                 case SECONDNAME_NAME:
//                     if(strcmp(x->second_name, y->second_name) < 0) return 1;
//                     else if(strcmp(x->second_name, y->second_name) > 0) return 0;
//                     else {
//                         if(strcmp(x->name, y->name) < 0) return 1;
//                         else return 0;
//                     }
//                 case SECONDNAME_SURNAME:
//                     if(strcmp(x->second_name, y->second_name) < 0) return 1;
//                     else if(strcmp(x->second_name, y->second_name) > 0) return 0;
//                     else {
//                         if(strcmp(x->surname, y->surname) < 0) return 1;
//                         else return 0;
//                     }
//                 case NAME_SURNAME:
//                     if(strcmp(x->name, y->name) < 0) return 1;
//                     else if(strcmp(x->name, y->name) > 0) return 0;
//                     else {
//                         if(strcmp(x->surname, y->surname) < 0) return 1;
//                         else return 0;
//                     }
//             }
//         case DESCENDING:
//             switch(current_key){
//                 case SECONDNAME_NAME:
//                     if(strcmp(x->second_name, y->second_name) < 0) return 0;
//                     else if(strcmp(x->second_name, y->second_name) > 0) return 1;
//                     else {
//                         if(strcmp(x->name, y->name) < 0) return 0;
//                         else return 1;
//                     }
//                 case SECONDNAME_SURNAME:
//                     if(strcmp(x->second_name, y->second_name) < 0) return 0;
//                     else if(strcmp(x->second_name, y->second_name) > 0) return 1;
//                     else {
//                         if(strcmp(x->surname, y->surname) < 0) return 0;
//                         else return 1;
//                     }
//                 case NAME_SURNAME:
//                     if(strcmp(x->name, y->name) < 0) return 0;
//                     else if(strcmp(x->name, y->name) > 0) return 1;
//                     else {
//                         if(strcmp(x->surname, y->surname) < 0) return 0;
//                         else return 1;
//                     }
//             }
//     }
// }

// void swapElements(Person *a, Person *b) {
//     Person temp;
//     strcpy(temp.second_name, a->second_name);
//     strcpy(temp.name, a->name);
//     strcpy(temp.surname, a->surname);
//     strcpy(temp.num, a->num);

//     strcpy(a->second_name, b->second_name);
//     strcpy(a->name, b->name);
//     strcpy(a->surname, b->surname);
//     strcpy(a->num, b->num);

//     strcpy(b->second_name, temp.second_name);
//     strcpy(b->name, temp.name);
//     strcpy(b->surname, temp.surname);
//     strcpy(b->num, temp.num);
// }

// void swap_ind(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void SelectSort_Struct(Person people[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (less(&people[j], &people[min_idx])) {
//                 min_idx = j;
//             }
//         }
        
//         swapElements(&people[min_idx], &people[i]);
        
//     }
// }

// void SelectSort_SN(Person people[], int n, int b[]) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (less(&people[b[j]], &people[b[min_idx]])) {
//                 min_idx = j;
//             }
//         }
//         if(min_idx != i){
//             swap_ind(&b[min_idx], &b[i]);
//         }
//     }
// }

// void SelectSort_Name(Person people[], int n, int b[]) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (less(&people[b[j]], &people[b[min_idx]])) {
//                 min_idx = j;
//             }
//         }
//         if(min_idx != i){
//             swap_ind(&b[min_idx], &b[i]);
//         }
//     }
// }

// void binarySearch_struct(Person people[], int size, char target[]) {
//     int left = 0;
//     int right = size - 1;
//     int first = -1;
//     int last = -1;
//     int mid;
//     if(current_key == SECONDNAME_NAME || current_key == SECONDNAME_SURNAME){
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (strcasecmp(target, people[mid].second_name) == 0) {
//                 first = mid;
//                 right = mid - 1; 
//             } else if (strcasecmp(target, people[mid].second_name) > 0) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }

//         left = 0;
//         right = size - 1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (strcasecmp(target, people[mid].second_name) == 0) {
//                 last = mid;
//                 left = mid + 1;
//             } else if (strcasecmp(target, people[mid].second_name) > 0) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }

//         if (first != -1 && last != -1) {
//             for (int i = first; i <= last; i++) {
//                 printf("\n%s %s %s %s\n", people[i].second_name, people[i].name, people[i].surname, people[i].num);
//             }
//             printf("\n");
//         } else {
//             printf("Элемент не найден.\n");
//         }
//     } else if(current_key == NAME_SURNAME){
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (strcasecmp(target, people[mid].second_name) == 0) {
//                 first = mid;
//                 right = mid - 1; 
//             } else if (strcasecmp(target, people[mid].second_name) > 0) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }

//         left = 0;
//         right = size - 1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (strcasecmp(target, people[mid].name) == 0) {
//                 last = mid;
//                 left = mid + 1;
//             } else if (strcasecmp(target, people[mid].name) > 0) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }

//         if (first != -1 && last != -1) {
//             for (int i = first; i <= last; i++) {
//                 printf("\n%s %s %s %s\n", people[i].second_name, people[i].name, people[i].surname, people[i].num);
//             }
//             printf("\n");
//         } else {
//             printf("Элемент не найден.\n");
//         }
//     }
// }

void heapify(int arr[], int n, int i, int* C, int* M) {
    int largest = i;  
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  

    if (left < n && arr[left] > arr[largest]){
        (*C)++;
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]){
        (*C)++;
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        (*M)++;

        heapify(arr, n, largest, C, M);
    }
}

void heapsort(int arr[], int n, int* C, int* M) {
    C = 0;
    M = 0;
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i, C, M);

    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        (*M++);

        heapify(arr, i, 0, C, M);
    }
}

int main(){
    int C, M;
    // int n = 10;
    // int a[10];

    // int Teor = 3*(n-1) + ((n*n - n)/2);

    // printf("SelectSort:\n");
    // printf("  N  | M+C(Teor) |  M(f)+C(f)       |   Up M(f)+C(f)   |\n");
    // printf(" %i  |    %i     |", n, Teor);

    // FillInc(a, n);
    // SelectSort(a, n, &C, &M);
    // printf(" %i \t", C+M);
    // FillDec(a, n);
    // SelectSort(a, n, &C, &M);
    // printf(" %i\t", C+M);
    // FillRand(a, n);
    // SelectSort(a, n, &C, &M);
    // printf(" %i |", C+M);

    // FillInc(a, n);
    // UpSelectSort(a, n, &C, &M);
    // printf("  %i   ", C+M);
    // FillDec(a, n);
    // UpSelectSort(a, n, &C, &M);
    // printf("  %i   ", C+M);
    // FillRand(a, n);
    // UpSelectSort(a, n, &C, &M);
    // printf(" %i |\n", C+M);

    // int k = 100;
    // int b[100];

    // Teor = 3*(k-1) + ((k*k - k)/2);

    // printf(" %i |   %i    |", k, Teor);

    // FillInc(b, k);
    // SelectSort(b, k, &C, &M);
    // printf(" %i ", C+M);
    // FillDec(b, k);
    // SelectSort(b, k, &C, &M);
    // printf(" %i ", C+M);
    // FillRand(b, k);
    // SelectSort(b, k, &C, &M);
    // printf(" %i |", C+M);

    // FillInc(b, k);
    // UpSelectSort(b, k, &C, &M);
    // printf(" %i ", C+M);
    // FillDec(b, k);
    // UpSelectSort(b, k, &C, &M);
    // printf(" %i ", C+M);
    // FillRand(a, k);
    // UpSelectSort(a, k, &C, &M);
    // printf(" %i |\n", C+M);

    // printf("\n");
    
    const int sizes[] = {100, 200, 300, 400, 500};
    
    // printf("BubbleSort:\n");
    // printf(" N\t|          Mt+Ct   \t   |       Mf+Cf  \t    |\n");

    // for (int k = 0; k < 5; k++) {
    //     int j = sizes[k];
    //     int arr[j];
    //     printf("%i \t| %7i  %7i  %7i|", j, j*(j-1)/2, j*(j-1)/2 + 3*(j*(j-1)/2), j*(j-1)/2 +3*(j*(j-1)/2)/2);
    //     FillInc(arr, j);
    //     BubbleSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);

    //     FillDec(arr, j);
    //     BubbleSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
         
    //     FillRand(arr, j);
    //     BubbleSort(arr, j, &C, &M);
    //     printf(" %7i|\n", C+M);
    // }
    // printf("\n");

    // printf("BubbleSort and ShakerSort:\n");
    // printf(" N\t|  Bubble Mf+Cf  \t  |    Shaker Mf+Cf  \t   |\n");
    // for (int k = 0; k < 5; k++) {
    //     int j = sizes[k];
    //     int arr[j];
    //     printf("%i \t| ", j);
    //     FillInc(arr, j);
    //     BubbleSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
        

    //     FillDec(arr, j);
    //     BubbleSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
         
    //     FillRand(arr, j);
    //     BubbleSort(arr, j, &C, &M);
    //     printf(" %7i|", C+M);
        
    //     FillInc(arr, j);
    //     ShakerSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);

    //     FillDec(arr, j);
    //     ShakerSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);

    //     FillRand(arr, j);
    //     ShakerSort(arr, j, &C, &M);
    //     printf(" %7i|\n", C+M);
    // }
    // printf("\n");

    // printf("InsertSort:\n");
    // printf(" N\t|          Mt+Ct   \t   |       Mf+Cf  \t    |\n");
    // for (int k = 0; k < 5; k++) {
    //     int j = sizes[k];
    //     int arr[j];
    //     printf("%i \t| %7i  %7i  %7i|", j, 3*(j-1),  (j*(j-1)/2) + ((j*(j-1)/2)+(2*j-2)),  (j*(j-1)/4) + ((j*(j-1)/4) + j - 1));
    //     FillInc(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
        

    //     FillDec(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
         
    //     FillRand(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i|\n", C+M);
    // }
    // printf("\n");

    // printf(" N\t|               Mf+Cf   \t    |\n");
    // printf("  \t| Select | Bubble | Shaker | Insert |\n");
    // for (int k = 0; k < 5; k++) {
    //     int j = sizes[k];
    //     int arr[j];
    //     printf("%i \t|", j);
         
    //     FillRand(arr, j);
    //     UpSelectSort(arr, j, &C, &M);
    //     printf(" %7i|", C+M);
    //     FillRand(arr, j);
    //     BubbleSort(arr,j, &C, &M);
    //     printf(" %7i|", C+M);
    //     FillRand(arr, j);
    //     ShakerSort(arr, j, &C, &M);
    //     printf(" %7i|", C+M);
    //     FillRand(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i|\n", C+M);
    // }
    // printf("\n");




    // printf("ShellSort:\n");
    // printf(" N\t|              h1...hm  \t |       Insert  \t  |        Shell  \t   |\n");
    // for (int k = 0; k < 5; k++) {
    //     int j = sizes[k];
    //     int arr[j];
    //     int gap = 1;
    //     printf("%i \t| %i",j, gap);

    //     for(int i = 2; i < log2(j) - 1; i++) {
    //         gap = 2 * gap + 1;
    //         printf("%5i", gap);
    //     }
    //     if(j == 100){
    //         printf("          |");
    //     }else if(j == 200){
    //         printf("     |");
    //     }else{
    //         printf("|");
    //     }

    //     FillInc(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);

    //     FillDec(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
         
    //     FillRand(arr, j);
    //     InsertSort(arr, j, &C, &M);
    //     printf(" %7i|", C+M);

    //     FillInc(arr, j);
    //     ShellSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);

    //     FillDec(arr, j);
    //     ShellSort(arr, j, &C, &M);
    //     printf(" %7i", C+M);
         
    //     FillRand(arr, j);
    //     ShellSort(arr, j, &C, &M);
    //     printf(" %7i|\n", C+M);
    // }
    // printf("\n");


    // const int sizes_b[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    
    // printf("Binary search:\n");
    // printf("  N   |   V1   |   V2   |\n");
    // for (int k = 0; k < 10; k++) {
    //     int j = sizes_b[k];
    //     int arr[j];
    //     printf(" %4i |",j);

    //     FillInc(arr, j);
    //     binarySearch_v1(arr, j, 71);
    //     printf("   |");
    //     binarySearch_v2(arr, j, 71);
    //     printf("   |\n");

    // }
    SetConsoleOutputCP(65001);

    // Person people[] = {
    //     {"Trofimova", "Daria", "Andreevna", "8 999 777 66 55"},
    //     {"Melnik", "Dmitry", "Viktorovich", "8 765 098 34 25"},
    //     {"Polomoshnova", "Alina", "Alekseevna", "8 331 442 53 64"},
    //     {"Melnik", "Artem", "Sergeevich", "8 021 413 65 47"}
    // };

    // int n = sizeof(people) / sizeof(people[0]);

    // int ind[n];
    
    // for(int i = 0; i < n; i++){
    //     ind[i] = i;
    // }
    
    // printf("Индексный массив: ");
    // for(int i = 0; i < n; i++){
    //     printf("%3i", ind[i]);
    // }
    // printf("\n");

    // printf("\nНачальная структура:\n");
    // for(int i = 0; i < n; i++){
    //     printf("%i. ", i);
    //     printf("%s %s %s %s\n", people[i].second_name, people[i].name, people[i].surname, people[i].num);
    // }
    // printf("\n");
    
    // int choice;
    // do {
        
    //     printf("\nВыберите параметры сортировки:\n");
    //     printf("1. Фамилия + Имя\n");
    //     printf("2. Фамилия + Отчество\n");
    //     printf("3. Имя + Отчество\n");
    //     printf("4. Изменить направление сортировки\n");
    //     printf("5. Поиск по старшему ключу:\n");
    //     printf("0. Выход\n");
    //     printf("> ");
    //     scanf("%d", &choice);

    //     switch(choice) {
    //         case 1: current_key = SECONDNAME_NAME;
    //             SelectSort_Struct(people, n);
    //             printf("\nОтсортированная структура:\n");
    //             for(int i = 0; i < n; i++){
    //             printf("%s %s %s %s\n", people[i].second_name, people[i].name, people[i].surname, people[i].num);
    //             }
    //             printf("\n"); 
    //             break;
    //         case 2: current_key = SECONDNAME_SURNAME;
    //             SelectSort_Struct(people, n);
    //             printf("\nОтсортированная структура:\n");
    //             for(int i = 0; i < n; i++){
    //             printf("%s %s %s %s\n", people[i].second_name, people[i].name, people[i].surname, people[i].num);
    //             }
    //             printf("\n");
    //             break;
    //         case 3: current_key = NAME_SURNAME;
    //             SelectSort_Struct(people, n);
    //             printf("\nОтсортированная структура:\n");
    //             for(int i = 0; i < n; i++){
    //             printf("%s %s %s %s\n", people[i].second_name, people[i].name, people[i].surname, people[i].num);
    //             }
    //             printf("\n");
    //             break;
    //         case 4: 
    //             current_dir = (current_dir == ASCENDING) ? DESCENDING : ASCENDING;
    //             printf("Направление изменено на: %s\n", 
    //                   current_dir == ASCENDING ? "ПО ВОЗРАСТАНИЮ" : "ПО УБЫВАНИЮ");
    //             break;
    //         case 5:
    //                 if(current_key == SECONDNAME_NAME || current_key == SECONDNAME_SURNAME){
    //                     char target[30];
    //                     printf("Введите фамилию для поиска: ");
    //                     scanf("%s", &target);
    //                     binarySearch_struct(people, n, target);
    //                 } else if(current_key == NAME_SURNAME){
    //                     char target[30];
    //                     printf("Введите имя для поиска: ");
    //                     scanf("%s", &target);
    //                     binarySearch_struct(people, n, target);
    //                 }
    //                 break;
    //     }
    // } while(choice != 0);


    // do {
        
    //     printf("\nВыберите параметры сортировки:\n");
    //     printf("1. Фамилия + Имя\n");            
    //     printf("2. Имя + Отчество\n");
    //     printf("0. Выход\n");
    //     printf("> ");
    //     scanf("%d", &choice);
        
    //     switch(choice){
    //         case 1:
    //             current_key = SECONDNAME_NAME;
    //             SelectSort_SN(people, n, ind);
    //             printf("Индексный массив: ");
    //             for(int i = 0; i < n; i++){
    //                 printf("%3i", ind[i]);
    //             }
    //             printf("\n");

    //             printf("\nОтсортированная структура:\n");
    //             for(int i = 0; i < n; i++){
    //             printf("%s %s %s %s\n", people[ind[i]].second_name, people[ind[i]].name, people[ind[i]].surname, people[ind[i]].num);
    //             }
    //             printf("\n");

    //             for(int i = 0; i < n; i++){
    //                 ind[i] = i;
    //             }
    //             break;
    //         case 2:
    //             current_key = NAME_SURNAME;
    //             SelectSort_Name(people, n, ind);
    //             printf("Индексный массив: ");
    //             for(int i = 0; i < n; i++){
    //                 printf("%3i", ind[i]);
    //             }
    //             printf("\n");

    //             printf("\nОтсортированная структура:\n");
    //             for(int i = 0; i < n; i++){
    //             printf("%s %s %s %s\n", people[ind[i]].second_name, people[ind[i]].name, people[ind[i]].surname, people[ind[i]].num);
    //             }
    //             printf("\n");
                
    //             for(int i = 0; i < n; i++){
    //                 ind[i] = i;
    //             }
    //             break;
    //     }
    
    // } while(choice != 0);

    printf("HeapSort:\n");
    printf(" N\t|  Mt+Ct  |       Mf+Cf  \t    |\n");

    for (int k = 0; k < 5; k++) {
        int j = sizes[k];
        int arr[j];
        printf("%i \t| %7.0f |", j, 2*j*log2(j)+j+2 + j*log2(j)+6.5*j-4);
        FillInc(arr, j);
        heapsort(arr, j, &C, &M);
        printf(" %7i", C+M);

        FillDec(arr, j);
        heapsort(arr, j, &C, &M);
        printf(" %7i", C+M);
         
        FillRand(arr, j);
        heapsort(arr, j, &C, &M);
        printf(" %7i|\n", C+M);
    }
    printf("\n");
    return 0;
}