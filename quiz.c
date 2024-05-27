#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quiz.h"

<<<<<<< Updated upstream
QuizQuestion *createQuiz(int *size)
{
    *size = 10;
=======
// Questions pour le thème Python
QuizQuestion* createPythonQuiz(int *size) {
    *size = 3;
>>>>>>> Stashed changes
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en Python : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("A. 15");
    questions[0].options[1] = strdup("B. 7");
    questions[0].options[2] = strdup("C. 8");
    questions[0].options[3] = strdup("D. 9");
    questions[0].correct_option = 'A';

    questions[1].question = strdup("Quel mot-clé est utilisé pour définir une fonction en Python?");
    questions[1].options[0] = strdup("A. func");
    questions[1].options[1] = strdup("B. def");
    questions[1].options[2] = strdup("C. function");
    questions[1].options[3] = strdup("D. define");
    questions[1].correct_option = 'B';

    questions[2].question = strdup("Comment créer une liste en Python?");
    questions[2].options[0] = strdup("A. []");
    questions[2].options[1] = strdup("B. {}");
    questions[2].options[2] = strdup("C. ()");
    questions[2].options[3] = strdup("D. <>");
    questions[2].correct_option = 'A';

    return questions;
}

<<<<<<< Updated upstream
void freeQuiz(QuizQuestion *questions, int size)
{
    for (int i = 0; i < size; i++)
    {
=======
// Questions pour le thème Java
QuizQuestion* createJavaQuiz(int *size) {
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le type de retour de la méthode 'main' en Java?");
    questions[0].options[0] = strdup("A. int");
    questions[0].options[1] = strdup("B. void");
    questions[0].options[2] = strdup("C. String");
    questions[0].options[3] = strdup("D. char");
    questions[0].correct_option = 'B';

    questions[1].question = strdup("Quel mot-clé est utilisé pour hériter d'une classe en Java?");
    questions[1].options[0] = strdup("A. extends");
    questions[1].options[1] = strdup("B. implements");
    questions[1].options[2] = strdup("C. inherits");
    questions[1].options[3] = strdup("D. extendsClass");
    questions[1].correct_option = 'A';

    questions[2].question = strdup("Quel est le package de base de Java?");
    questions[2].options[0] = strdup("A. java.lang");
    questions[2].options[1] = strdup("B. java.util");
    questions[2].options[2] = strdup("C. java.io");
    questions[2].options[3] = strdup("D. java.net");
    questions[2].correct_option = 'A';

    return questions;
}

// Questions pour le thème C#
QuizQuestion* createCSharpQuiz(int *size) {
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel mot-clé est utilisé pour définir une propriété en C#?");
    questions[0].options[0] = strdup("A. property");
    questions[0].options[1] = strdup("B. prop");
    questions[0].options[2] = strdup("C. var");
    questions[0].options[3] = strdup("D. get; set;");
    questions[0].correct_option = 'D';

    questions[1].question = strdup("Quelle méthode est utilisée pour commencer un thread en C#?");
    questions[1].options[0] = strdup("A. Start()");
    questions[1].options[1] = strdup("B. Run()");
    questions[1].options[2] = strdup("C. Begin()");
    questions[1].options[3] = strdup("D. Execute()");
    questions[1].correct_option = 'A';

    questions[2].question = strdup("Comment déclare-t-on une constante en C#?");
    questions[2].options[0] = strdup("A. const int x = 10;");
    questions[2].options[1] = strdup("B. final int x = 10;");
    questions[2].options[2] = strdup("C. static int x = 10;");
    questions[2].options[3] = strdup("D. define x = 10;");
    questions[2].correct_option = 'A';

    return questions;
}

// Questions pour le thème C
QuizQuestion* createCQuiz(int *size) {
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en C : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("A. 15");
    questions[0].options[1] = strdup("B. 7");
    questions[0].options[2] = strdup("C. 8");
    questions[0].options[3] = strdup("D. 9");
    questions[0].correct_option = 'A';

    questions[1].question = strdup("Quel est le mot-clé pour allouer de la mémoire dynamiquement en C?");
    questions[1].options[0] = strdup("A. malloc");
    questions[1].options[1] = strdup("B. allocate");
    questions[1].options[2] = strdup("C. memalloc");
    questions[1].options[3] = strdup("D. new");
    questions[1].correct_option = 'A';

    questions[2].question = strdup("Quel est l'opérateur utilisé pour accéder aux membres d'une structure via un pointeur?");
    questions[2].options[0] = strdup("A. . (point)");
    questions[2].options[1] = strdup("B. -> (flèche)");
    questions[2].options[2] = strdup("C. * (étoile)");
    questions[2].options[3] = strdup("D. & (esperluette)");
    questions[2].correct_option = 'B';

    return questions;
}

// Questions pour le thème Javascript
QuizQuestion* createJavaScriptQuiz(int *size) {
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel mot-clé est utilisé pour déclarer une variable en Javascript?");
    questions[0].options[0] = strdup("A. var");
    questions[0].options[1] = strdup("B. int");
    questions[0].options[2] = strdup("C. let");
    questions[0].options[3] = strdup("D. var et let");
    questions[0].correct_option = 'D';

    questions[1].question = strdup("Comment crée-t-on une fonction anonyme en Javascript?");
    questions[1].options[0] = strdup("A. function() {}");
    questions[1].options[1] = strdup("B. anonymous function() {}");
    questions[1].options[2] = strdup("C. () => {}");
    questions[1].options[3] = strdup("D. function => {}");
    questions[1].correct_option = 'A';

    questions[2].question = strdup("Quel est l'opérateur de concaténation de chaînes en Javascript?");
    questions[2].options[0] = strdup("A. +");
    questions[2].options[1] = strdup("B. &");
    questions[2].options[2] = strdup("C. .");
    questions[2].options[3] = strdup("D. =");
    questions[2].correct_option = 'A';

    return questions;
}

// Libère la mémoire des questions
void freeQuiz(QuizQuestion *questions, int size) {
    for (int i = 0; i < size; i++) {
>>>>>>> Stashed changes
        free(questions[i].question);
        for (int j = 0; j < 4; j++)
        {
            free(questions[i].options[j]);
        }
    }
    free(questions);
}

char askQuestion(QuizQuestion *q, int questionNumber)
{
    printf("Question %d: %s\n", questionNumber + 1, q->question);
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", q->options[i]);
    }
    printf("Votre réponse (A, B, C, D) : ");

    char answer;
    scanf(" %c", &answer);
    return answer;
}

void startQuiz(QuizQuestion *questions, int size)
{
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        char userAnswer = askQuestion(&questions[i], i);
        if (userAnswer == questions[i].correct_option)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. La bonne réponse était %c.\n", questions[i].correct_option);
        }
        printf("\n");
    }
    printf("Vous avez obtenu %d sur %d bonnes réponses.\n", score, size);
}
