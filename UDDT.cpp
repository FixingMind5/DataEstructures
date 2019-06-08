#include <iostream>

using namespace std;

class Client {
public:
  string name;
  string id;
  float credit;
  string address;

  Client(string name, string id, float credit, string address) {
    this -> name = name;
    this -> id = id;
    this -> credit = credit;
    this -> address = address;
  }
};

int main() {
  Client Camilo("dcmneck", "lskdmnlwd", 134.0, "cpwmlekcm");

  cout << Camilo.name << endl;
  cout << Camilo.id << endl;
  cout << Camilo.credit << endl;
  cout << Camilo.address << endl;
}
