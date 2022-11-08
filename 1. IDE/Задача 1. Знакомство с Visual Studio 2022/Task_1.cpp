#include <iostream>
#include <fstream>

int* creation_filling_arr(std::ifstream& file, const int& size_arr)
{
    int* arr = new int[size_arr];

    for (size_t i = 0; i < size_arr; i++)
    {
        file >> arr[i];
    }

    return arr;
}

void print_arr(int* arr, const int& size_arr)
{
    for (size_t i = 0; i < size_arr; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

void my_swap(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}

void element_shift_left(int* arr, const int& size_arr)
{
    for (size_t i = 0; i < size_arr - 1; i++)
    {
        my_swap(arr[i], arr[i + 1]);
    }
}

void element_shift_right(int* arr, const int& size_arr)
{
    for (size_t i = size_arr - 1 ; i > 0; i--)
    {
        my_swap(arr[i], arr[i - 1]);
    }
}

void writing_file(int* arr, const int& size_arr, std::ofstream& file_out)
{
    file_out << "\n";

    for (size_t i = 0; i < size_arr; i++)
    {
        file_out << arr[i] << " ";
    }

    file_out << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    std::ifstream file_in("in.txt");
    if(!file_in.is_open()) { std::cout << "Не получилось открыть файл!" << std::endl; return 1; }

    int size_arr_1{ 0 };
    file_in >> size_arr_1;
    int* arr_1 = creation_filling_arr(file_in, size_arr_1);

    int size_arr_2{ 0 };
    file_in >> size_arr_2;
    int* arr_2 = creation_filling_arr(file_in, size_arr_2);

    file_in.close();

    element_shift_left(arr_1, size_arr_1);
    element_shift_right(arr_2, size_arr_2);

    print_arr(arr_1, size_arr_1);
    print_arr(arr_2, size_arr_2);

    std::ofstream file_out("out.txt");
    if (!file_out.is_open()) { std::cout << "Не получилось открыть файл!" << std::endl; return 1; }

    file_out << size_arr_2;
    writing_file(arr_2, size_arr_2, file_out);

    file_out << size_arr_1;
    writing_file(arr_1, size_arr_1, file_out);

    file_out.close();

    delete[] arr_1;
    delete[] arr_2;

    std::cout << "\n";
    system("pause");

    return 0;
}

