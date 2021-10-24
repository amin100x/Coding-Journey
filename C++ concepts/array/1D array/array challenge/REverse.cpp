#include <iostream>
using namespace std;

struct array
{
    int size;
    int length;
    int a[10];
};

void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverce1(struct array *arr)
{
    int *b = new int[arr->length];
    int i, j;

    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = arr->a[i];
    }
    for (i = 0; i < arr->length; i++)
        arr->a[i] = b[i];
}

void Reverse2(struct array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->a[i], &arr->a[j]);
    }
}
int main()
{
    struct array arr1
    {
        10, 9, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }
    };
    reverce1(&arr1);
    display(arr1);

    cout<<endl;
    Reverse2(&arr1);
    display(arr1);
}