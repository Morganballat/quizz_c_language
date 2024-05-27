#include "quiz.h"

int main() {
    int size;
    QuizQuestion *questions = createQuiz(&size);
    startQuiz(questions, size);
    freeQuiz(questions, size);
    return 0;
}
