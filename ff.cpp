#include <iostream>
using namespace std;

class Sample {
private:
    int value;

public:
    Sample(int v) {
        value = v;
    }


    friend void showValue(Sample s);
};

void showValue(Sample s) {
    cout << "Private value is: " << s.value << endl;
}

int main() {
    Sample obj(42);
    showValue(obj); 
    return 0;
}
  