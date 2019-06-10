#include <iostream>
#include <climits>
using namespace std;

int v = 0, q = 0, d = 0, c = 0, u = 0;

int greedyCoinChange(int coinSet[], int debit) {
  if (debit == 0) {
    return 0;
  }

  int res = 0, j = 0, currentValue, minIndex;
  int count[5];

  for (int i = 4; i >= 0; i--) {
    res = debit - coinSet[i];
    while (res >= 0) {
      j++;
      res -= coinSet[i];
    }
    count[i] = j;
    res = debit;
    j = 0;
  }

  for(int i = 0; i < 5; i++) {
    currentValue = count[0];
    if(currentValue >= count[i] && count[i] != 0) {
      currentValue = count[i];
      minIndex = i;
    }
  }


  res = debit - coinSet[minIndex];

  switch (minIndex) {
    case 0:
      u++;
      break;
    case 1:
      c++;
      break;
    case 2:
      d++;
      break;
    case 3:
      q++;
      break;
    case 4:
      v++;
      break;
  }

  greedyCoinChange(coinSet, res);

  return 0;
}

int main() {
  int coinSet[] = {1, 5, 10, 15, 20};
  int debit;

  cout << "Ingrese su pago por favor: " << endl;
  cin >> debit;

  greedyCoinChange(coinSet, debit);

  cout << "Tu cambio/vuelta es de:"<< endl;
  cout << v << " billete(s) de veinte" << endl;
  cout << q << " Billete(s) de quince" << endl;
  cout << d << " Billete(s) de diez" << endl;
  cout << c << " Billete(s) de cinco" << endl;
  cout << u << " Billete(s) de uno" << endl;
}
