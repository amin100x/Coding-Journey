//inser element in already sorted array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct array1
{
    int a[10];
    int size;
    int length;
};

void display(struct array1 arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i]<<" ";
    }
}

struct array1 *merge(struct array1 *arr1, struct array1 *arr2)
{
    int i, j, k;
    i = j = k = 0;
    // struct array1 *arr3 = new struct array1;
    struct array1 *arr3 = (struct array1 *)malloc(sizeof(struct
                                                         array1));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
        {
            arr3->a[k++] = arr1->a[i++];
        }
        else{
            arr3->a[k++]=arr2->a[j++];
        }
    }
    for (; i < arr1->length; i++)
        arr3->a[k++] = arr1->a[i];
    for (; j < arr2->length; j++)
        arr3->a[k++] = arr2->a[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}
int main()
{
    struct array1 a1 = {{1, 3, 4, 5, 7}, 10, 5};
    struct array1 a2 = {{3, 5, 7, 8, 9}, 10, 5};
    struct array1 *a3;
    a3 = merge(&a1, &a2);
    display(*a3);
}