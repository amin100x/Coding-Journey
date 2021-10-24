//Here is both unsorted array so T.C=n^2
#include <iostream>
using namespace std;

struct array1
{
    int a[10];
    int size;
    int length;
};

void
Display(struct array1 arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

struct array1 *Union(struct array1 *a1, struct array1 *a2)
{
    struct array1 *a3 = (struct array1 *)malloc(sizeof(struct array1));
    int k = 0;
    for (int i = 0; i < a1->length; i++)
    {
        a3->a[k++] = a1->a[i];
    }
    a3->length=a1->length;
    for(int i=0; i<a2->length ; i++)
    {
        for(int j=0; j<a3->length ; j++)
        {
           if (a2->a[i])
           {
               
           }
           
        }
    }
    return a3;
}

int main()
{
    struct array1 arr1 = {{2, 6, 5, 15, 20}, 10, 5};
    struct array1 arr2 = {{5, 2, 6, 9, 7}, 10, 5};
    struct array1 *arr3;
    arr3=Union( &arr1 ,&arr2);
    Display(*arr3);
}

//bhul chhe kaik