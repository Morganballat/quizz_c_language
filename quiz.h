#ifndef QUIZ_H
#define QUIZ_H

typedef struct {
    char *question;
    char *options[4];
    char correct_option;
} QuizQuestion;

QuizQuestion* createQuiz(int *size);
void freeQuiz(QuizQuestion *questions, int size);
char askQuestion(QuizQuestion *q);
void startQuiz(QuizQuestion *questions, int size);

#endif // QUIZ_H