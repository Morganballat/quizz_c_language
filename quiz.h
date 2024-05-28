#ifndef QUIZ_H
#define QUIZ_H

typedef struct
{
    char *question;
    char *options[4];
    char correct_option;
} QuizQuestion;

QuizQuestion *createPythonQuiz(int *size);
QuizQuestion *createJavaQuiz(int *size);
QuizQuestion *createCSharpQuiz(int *size);
QuizQuestion *createCQuiz(int *size);
QuizQuestion *createJavaScriptQuiz(int *size);
void freeQuiz(QuizQuestion *questions, int size);
char askQuestion(QuizQuestion *q, int questionNumber);
void startQuiz(QuizQuestion *questions, int size);

#endif
