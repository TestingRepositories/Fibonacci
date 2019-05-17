#pragma once

template <class T> unsigned fibonnacci(T n){
  return n == 0 ? 0 : n == 1 ? 1 : fibonnacci(n-1) + fibonnacci(n-2);
}

template <class T> T fastFibonacci(T i) {
  if (i == 0) return 0;
  T a[2] = {1, 1};
  while (i --> 2) a[i & 1] = a[0] + a[1];
  return a[0];
}
