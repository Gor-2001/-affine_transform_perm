#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool** int_to_bool(int* A, int   m);
void    bubbleSort(int* C, int* D, int n);
void    print_int(int* A, int   n);
void    print_bool(bool** A, int    arr_size);
void    bool_to_int(bool** A, int* C, int m);
bool* ft_minus_c(bool** B, int n);
bool    ft_checker(bool** B, bool** A, int arr_size);
bool** ft_basis(bool** B, int bool_size);

int main()
{
    int     arr_size;
    bool* affine_c;
    bool** A;
    bool** B;
    arr_size = 256;
    int* C = new int[arr_size] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255};
    int* D = new int[arr_size] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255};

    /*
    arr_size = 4;
    int *C = new int[arr_size] {1, 3, 0, 2};
    int *D = new int[arr_size] {0, 1, 3, 2};
    */

    int     bool_size = log2(arr_size);
    printf("Default arrays are \n");
    print_int(C, arr_size);
    print_int(D, arr_size);


    bubbleSort(C, D, arr_size);
    printf("Sorted arrays are \n");
    print_int(C, arr_size);
    print_int(D, arr_size);


    A = int_to_bool(C, arr_size);
    B = int_to_bool(D, arr_size);
    printf("Binary second array is \n");
    print_bool(B, arr_size);

    affine_c = ft_minus_c(B, arr_size);
    printf("Binary second array is after minus c \n");
    print_bool(B, arr_size);

    printf("second array is after minus c \n");
    bool_to_int(B, D, arr_size);
    print_int(D, arr_size);

    printf("Affine C is \n");
    for (int i = 0; i < bool_size; ++i)
        printf("%d", affine_c[i]);
    printf("\n");

    if (ft_checker(B, A, arr_size))
    {
        printf("The result of checker is: true\n");
        bool** basis;
        basis = ft_basis(B, bool_size);
        printf("The Basis\n");
        for (int i = 0; i < bool_size; ++i)
        {
            for (int j = 0; j < bool_size; ++j)
                printf("%d", basis[i][j]);
            printf("\n");
        }

    }
    else
        printf("The result of checker is: false");
    return (0);
}

bool** int_to_bool(int* A, int arr_size)
{
    int bool_size = log2(arr_size);
    bool** a = new bool* [arr_size];
    for (int i = 0; i < arr_size; ++i)
        a[i] = new bool[bool_size];
    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = 0; j < bool_size; ++j)
        {
            a[i][(bool_size - 1) - j] = A[i] & 1;
            A[i] /= 2;
        }
    }
    return (a);
}

void    bubbleSort(int* C, int* D, int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (C[j] > C[j + 1])
            {
                swap(C[j], C[j + 1]);
                swap(D[j], D[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void    print_int(int* A, int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", A[i]);
    printf("\n");
}

void    print_bool(bool** A, int arr_size)
{
    int bool_size = log2(arr_size);
    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = 0; j < bool_size; ++j)
            printf("%d", A[i][j]);
        printf("\n");
    }
}

void    bool_to_int(bool** A, int* C, int arr_size)
{
    int bool_size = log2(arr_size);
    for (int i = 0; i < arr_size; ++i)
        C[i] = 0;
    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = 0; j < bool_size; ++j)
            C[i] = 2 * C[i] + A[i][j];
    }
}

bool* ft_minus_c(bool** B, int arr_size)
{
    int bool_size = log2(arr_size);
    bool* a = new bool[bool_size];

    for (int i = 0; i < bool_size; ++i)
        a[i] = B[0][i];

    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = 0; j < bool_size; ++j)
            B[i][j] = B[i][j] ^ a[j];
    }
    return (a);
}

bool ft_checker(bool** B, bool** A, int arr_size)
{
    int bool_size = log2(arr_size);
    bool* temp = new bool[bool_size];
    memset(temp, false, bool_size * sizeof(bool));

    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = 0; j < bool_size; ++j)
            temp[j] = B[i][j];

        for (int j = 0; j < bool_size; ++j)
        {
            if (A[i][(bool_size - 1) - j])
            {
                for (int k = 0; k < bool_size; ++k)
                {
                    int index = (1 << j);
                    temp[k] = temp[k] ^ B[index][k];
                }
            }
        }
        for (int j = 0; j < bool_size; ++j)
        {
            if (temp[j] == true)
            {
                delete[] temp;
                return false;
            }
        }
    }
    delete[] temp;
    return true;
}

bool** ft_basis(bool** B, int bool_size)
{
    bool** basis = new bool* [bool_size];
    for (int i = 0; i < bool_size; ++i)
        basis[i] = new bool[bool_size];
    for (int i = 0; i < bool_size; ++i)
    {
        for (int j = 0; j < bool_size; ++j)
        {
            int index = (1 << i);
            basis[bool_size - i - 1][j] = B[index][j];
        }
    }
    return (basis);
}
