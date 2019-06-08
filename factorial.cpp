#include <iostream>
using namespace std;

int main(){
  int n = 5;

  for(int i = n - 1; i >= 1; i--){
    n *= i;
  }

  cout << n << endl;
}
