#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};
int main() {
    myClass Me;
    Me.setName("Kas");
    cout << Me.getName();
    return 0;
}