#include <iostream>
#include <thread>

using namespace std;

void countUp() {
    for (int i = 0; i <= 20; i++) {
        cout << "Counting up: " << i << endl;
    }
}

void countDown() {
    for (int i = 20; i >= 0; i--) {
        cout << "Counting down: " << i << endl;
    }
}

int main() {
    thread t1(countUp);
    t1.join(); // wait until first thread finishes

    thread t2(countDown);
    t2.join(); // wait until second thread finishes

    return 0;
}