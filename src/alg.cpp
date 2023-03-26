// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  
  
  int L = 0, R = size-1;//левый,правый
  int mid = 0;//середина
  int count = 0;//количество

  while (L <= R) {
    mid = (L + R) / 2;
    
    if (arr[mid] > value) {
      R = mid - 1;
    } else if (arr[mid] == value) {
      count++;
      int temp = mid - 1;
      while (temp >= L && arr[temp] == value) {
        count++;
        temp--;
      }
      temp = mid + 1;
      while (temp <= R && arr[temp] == value) {
        count++;
        temp++;
      }
      return count;
    } else if (arr[mid] < value) {
        L = mid + 1;
    }
    
  )
  return 0; // если ничего не найдено
}
