#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
using namespace std;

void Merge(vector<string> arr, int low, int mid, int high)
{
    int nL = mid - low + 1;
    int nR = high - mid;

    string *L = new string[10];
    string *R = new string[10];
    // char **L = malloc(sizeof(string) * nL);
    // char **R = malloc(sizeof(string) * nR);
    int i;
    for (i = 0; i < nL; i++)
    {
        L[i] = malloc(sizeof(arr[low + i]));
        strcpy(L[i], arr[low + i]);
    }
    for (i = 0; i < nR; i++)
    {
        R[i] = malloc(sizeof(arr[mid + i + 1]));
        strcpy(R[i], arr[mid + i + 1]);
    }
    int j = 0, k;
    i = 0;
    k = low;
    while (i < nL && j < nR)
    {
        if (strcmp(L[i], R[j]) < 0)
            strcpy(arr[k++], L[i++]);
        else
            strcpy(arr[k++], R[j++]);
    }
    while (i < nL)
        strcpy(arr[k++], L[i++]);
    while (j < nR)
        strcpy(arr[k++], R[j++]);
}

int main()
{

    return 0;
}