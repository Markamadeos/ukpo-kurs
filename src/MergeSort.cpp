

using namespace std;
const int MAX = 100;

void Merg(int *arr, int begin, int end) {
    int i = begin,
            t = 0,
            mid = begin + (end - begin) / 2,
            j = mid + 1,
            d[MAX];
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

void msort(int *arr, int arr_len) {
    MergSort(arr, 0, arr_len - 1);
}

/// reverse sort

void rMerg(int *arr, int begin, int end) {
    int i = begin,
            t = 0,
            mid = begin + (end - begin) / 2,
            j = mid + 1,
            d[MAX];
    while (i <= mid && j <= end) {

        if (arr[i] >= arr[j]) {
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

void rMergSort(int *arr, int left, int right) {
    int temp;
    if (left < right)
        if (right - left == 1) {
            if (arr[right] < arr[left]) {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        } else {
            rMergSort(arr, left, left + (right - left) / 2);
            rMergSort(arr, left + (right - left) / 2 + 1, right);
            rMerg(arr, left, right);
        }
}

void reverseMSort(int *arr, int arr_len) {
    rMergSort(arr, 0, arr_len - 1);
}
