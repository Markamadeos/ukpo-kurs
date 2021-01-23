//
// Created by Ded on 23.01.2021.
//
#include <iostream>

using namespace std;
int n = 0; // Счетчик количества элементов
const int nmax = 100;

void Merg(int *arr, int begin, int end) {
    int i = begin,
            t = 0,
            mid = begin + (end - begin) / 2,
            j = mid + 1,
            d[nmax];
    while (i <= mid && j <= end) {

        if (arr[i] <= arr[j]) {
            d[t] = arr[i];
            i++;
        } else {
            d[t] = arr[j];
            j++;
        }
        t++;
    }
    while (i <= mid) {
        d[t] = arr[i];
        i++;
        t++;
    }
    while (j <= end) {
        d[t] = arr[j];
        j++;
        t++;
    }
    for (i = 0; i < t; i++) {
        arr[begin + i] = d[i];
    }
}

void MergSort(int *arr, int left, int right) {
    int temp;
    if (left < right)
        if (right - left == 1) {
            if (arr[right] < arr[left]) {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        } else {
            MergSort(arr, left, left + (right - left) / 2);
            MergSort(arr, left + (right - left) / 2 + 1, right);
            Merg(arr, left, right);
        }
}

void msort(int *arr, unsigned __int8 arr_len) {
    MergSort(arr, 0, arr_len - 1);
}



