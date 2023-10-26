//
// Created by Rostislav Borodin on 26.10.2023.
//

#include "Question.h"
#include <algorithm>
#include <cctype>


using namespace std;

char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

string makeLower(string s) {
    transform(s.begin(), s.end(), s.begin(), asciitolower);
    return s;
}

Question::Question(int id) {
    ifstream question_file("questions/" + to_string(id) + ".txt");

    if (!question_file.is_open()) {
        throw "error opening file";
    }

    getline(question_file, text);
    getline(question_file, answer);
    question_file >> price;
    question_file.close();
}

string Question::getText() {
    return text;
}

bool Question::checkAnswer(string user_answer) {
    return makeLower(user_answer) == makeLower(answer);
}

int Question::getPrice() {
    return price;
}