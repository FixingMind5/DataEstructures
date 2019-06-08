#include <iostream>

using namespace std;

void cambiar_posicion(int *n1, int* n2) {
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

void bubble_sort(int vector[], int n) {
  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(vector[j] > vector[j+1])
        cambiar_posicion(&vector[j], &vector[j+1]);
    }
  }
}

void print_vector(int vector[], int n) {
  for(int i = 0; i < n; i++) {
    cout << vector[i] << ",  ";
  }
  cout << endl;
  cout << "Lo logramos :D" << endl;
}

int main() {
  int vector[] = {100, 23, -4, 5, 8, 3, 91, 34};
  int n = sizeof(vector) / sizeof(vector[0]);
  cout << n << endl;
  bubble_sort(vector, n);
  print_vector(vector, n);
  cout<<endl;
}
