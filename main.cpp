#include <iostream>
#include "question.h"

using namespace std;

int main() {
    Question q(1);

    cout << q.getText() << endl;
    cout << q.checkAnswer("horse") << endl;
    cout << q.checkAnswer("cookies") << endl;
    cout << q.getPrice() << endl;
}


