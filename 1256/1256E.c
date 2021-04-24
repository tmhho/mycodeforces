#include <stdio.h>
#include <stdlib.h>

void merge(long arr1[], long n1, long arr2[], long n2) {
  long tmp[n1 + n2];
  long i = 0;
  long j = 0;
  long k = 0;

  while (j < n1 && k < n2) {
    if (arr1[j] < arr2[k]) {
      tmp[i++] = arr1[j++];
    } else {
      tmp[i++] = arr2[k++];
    }
  }

  while (j < n1) {
    tmp[i++] = arr1[j++];
  }

  while (k < n2) {
    tmp[i++] = arr2[k++];
  }

  for (i = 0; i < n1 + n2; i++) {
    arr1[i] = tmp[i];
  }
}

void merge_sort(long arr[], long n) {
  if (n == 1) {
    return;
  }

  int n1 = n / 2;
  int n2 = n - n1;

  merge_sort(arr, n1);
  merge_sort(arr + n1, n2);
  merge(arr, n1, arr + n1, n2);
}

int main(){
    long n;
    scanf("%ld", &n);
    long a[n];
    for(i = 0; i < n; i++){
        scanf("%ld", a+i);
    }
    merge_sort(a, n);
    long max[n];

    return 0;
}