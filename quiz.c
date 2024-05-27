#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quiz.h"

QuizQuestion* createQuiz(int *size) {
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est la capitale de la France?");
    questions[0].options[0] = strdup("A. Paris");
    questions[0].options[1] = strdup("B. Madrid");
    questions[0].options[2] = strdup("C. Berlin");
    questions[0].options[3] = strdup("D. Rome");
    questions[0].correct_option = 'A';

    // Question 2

    questions[1].question = strdup("Combien de bits y a-t-il dans un octet?");
    questions[1].options[0] = strdup("A. 4");
    questions[1].options[1] = strdup("B. 8");
    questions[1].options[2] = strdup("C. 16");
    questions[1].options[3] = strdup("D. 32");
    questions[1].correct_option = 'B';

    questions[2].question = strdup("Quel est le langage de programmation utilisé pour créer ce quiz?");
    questions[2].options[0] = strdup("A. Python");
    questions[2].options[1] = strdup("B. Java");
    questions[2].options[2] = strdup("C. C");
    questions[2].options[3] = strdup("D. JavaScript");
    questions[2].correct_option = 'C';

    return questions;
}

void freeQuiz(QuizQuestion *questions, int size) {
    for (int i = 0; i < size; i++) {
        free(questions[i].question);
        for (int j = 0; j < 4; j++) {
            free(questions[i].options[j]);
        }
    }
    free(questions);
}

char askQuestion(QuizQuestion *q) {
    printf("%s\n", q->question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", q->options[i]);
    }
    printf("Votre réponse (A, B, C, D) : ");
    
    char answer;
    scanf(" %c", &answer);
    return answer;
}

void startQuiz(QuizQuestion *questions, int size) {
    int score = 0;
    for (int i = 0; i < size; i++) {
        char userAnswer = askQuestion(&questions[i]);
        if (userAnswer == questions[i].correct_option) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect. La bonne réponse était %c.\n", questions[i].correct_option);
        }
        printf("\n");
    }
    printf("Vous avez obtenu %d sur %d bonnes réponses.\n", score, size);
}