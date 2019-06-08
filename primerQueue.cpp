#include <iostream>

using namespace std;

const int SIZE = 5;

class Queue {
public:

  void enQueue(int value){
    if(rear == (SIZE - 1)){
      cout << "El kiu está lleno" << endl;
    } else {
      rear++;
      values[rear] = value;
      cout << "se insertó un " << value << " correctamente" << endl;
      //cout << rear << endl;
    }
  }

  void deQueue(){
    cout << "Se eliminó " << values[front] << " satisfactoriamente" << '\n';
    rear--;
    std::cout << rear << '\n';
    for (size_t i = 0; i <= rear; i++) {
      values[i] = values[i + 1];
    }
    if(rear == 0){
      rear = -1;
      std::cout << "El kiu está vacío" << '\n';
    }
  }

  void print_values(){
    for(int i = 0; i <= rear; i++)
      std::cout << values[i] << '\n';
  }

private:
  int rear = -1, front = 0, values[SIZE];
};

int main() {
  Queue first;

  //Agregando valores
  first.enQueue(10);
  first.enQueue(13);
  first.enQueue(14);
  first.enQueue(9);
  first.enQueue(12);

  //Eliminando valores
  first.deQueue();
  first.deQueue();
  first.deQueue();
  first.deQueue();


  //Agregando un nuevo dato
  first.enQueue(23);
  first.enQueue(43);
  first.enQueue(32);

  std::cout << "Estos son los nuevos valores" << '\n';
  first.print_values();
}
