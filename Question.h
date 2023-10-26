//
// Created by Rostislav Borodin on 26.10.2023.
//

#ifndef TRAIN_QUESTION_H
#define TRAIN_QUESTION_H
#include <string>
#include <fstream>

using namespace std;

class Question {
protected:
    string text;
    string answer;
    int price;
public:
    Question(int id);
    string getText();
    bool checkAnswer(string answer);
    int getPrice();

};


#endif //TRAIN_QUESTION_H
