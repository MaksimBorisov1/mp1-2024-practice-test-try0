// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{ if (a >= 0 && b >= 0) {
    if (a > INT_MAX - b) return INT_MAX; //Проверка на переполнение при положительных числах
  } else if (a < 0 && b < 0) {
    if (a < INT_MIN - b) return INT_MIN; //Проверка на переполнение при отрицательных числах

  }
  return a + b;
}
