#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quiz.h"

QuizQuestion *createPythonQuiz(int *size)
{
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en Python : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("a. 15");
    questions[0].options[1] = strdup("b. 7");
    questions[0].options[2] = strdup("c. 8");
    questions[0].options[3] = strdup("d. 9");
    questions[0].correct_option = 'a';

    questions[1].question = strdup("Quel mot-clé est utilisé pour définir une fonction en Python?");
    questions[1].options[0] = strdup("a. func");
    questions[1].options[1] = strdup("b. def");
    questions[1].options[2] = strdup("c. function");
    questions[1].options[3] = strdup("d. define");
    questions[1].correct_option = 'b';

    questions[2].question = strdup("comment créer une liste en Python?");
    questions[2].options[0] = strdup("a. []");
    questions[2].options[1] = strdup("b. {}");
    questions[2].options[2] = strdup("c. ()");
    questions[2].options[3] = strdup("d. <>");
    questions[2].correct_option = 'a';

    return questions;
}

QuizQuestion *createJavaQuiz(int *size)
{
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le type de retour de la méthode 'main' en Java?");
    questions[0].options[0] = strdup("a. int");
    questions[0].options[1] = strdup("b. void");
    questions[0].options[2] = strdup("c. String");
    questions[0].options[3] = strdup("d. char");
    questions[0].correct_option = 'b';

    questions[1].question = strdup("Quel mot-clé est utilisé pour hériter d'une classe en Java?");
    questions[1].options[0] = strdup("a. extends");
    questions[1].options[1] = strdup("b. implements");
    questions[1].options[2] = strdup("c. inherits");
    questions[1].options[3] = strdup("d. extendsClass");
    questions[1].correct_option = 'a';

    questions[2].question = strdup("Quel est le package de base de Java?");
    questions[2].options[0] = strdup("a. java.lang");
    questions[2].options[1] = strdup("b. java.util");
    questions[2].options[2] = strdup("c. java.io");
    questions[2].options[3] = strdup("d. java.net");
    questions[2].correct_option = 'a';

    return questions;
}

QuizQuestion *createCSharpQuiz(int *size)
{
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel mot-clé est utilisé pour définir une propriété en C#?");
    questions[0].options[0] = strdup("a. property");
    questions[0].options[1] = strdup("b. prop");
    questions[0].options[2] = strdup("c. var");
    questions[0].options[3] = strdup("d. get; set;");
    questions[0].correct_option = 'd';

    questions[1].question = strdup("Quelle méthode est utilisée pour commencer un thread en C#?");
    questions[1].options[0] = strdup("a. Start()");
    questions[1].options[1] = strdup("b. Run()");
    questions[1].options[2] = strdup("c. Begin()");
    questions[1].options[3] = strdup("d. Execute()");
    questions[1].correct_option = 'a';

    questions[2].question = strdup("comment déclare-t-on une constante en C#?");
    questions[2].options[0] = strdup("a. const int x = 10;");
    questions[2].options[1] = strdup("b. final int x = 10;");
    questions[2].options[2] = strdup("c. static int x = 10;");
    questions[2].options[3] = strdup("d. define x = 10;");
    questions[2].correct_option = 'a';

    return questions;
}

QuizQuestion *createCQuiz(int *size)
{
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en C : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("a. 15");
    questions[0].options[1] = strdup("b. 7");
    questions[0].options[2] = strdup("c. 8");
    questions[0].options[3] = strdup("d. 9");
    questions[0].correct_option = 'a';

    questions[1].question = strdup("Quel est le mot-clé pour allouer de la mémoire dynamiquement en C?");
    questions[1].options[0] = strdup("a. malloc");
    questions[1].options[1] = strdup("b. allocate");
    questions[1].options[2] = strdup("c. memalloc");
    questions[1].options[3] = strdup("d. new");
    questions[1].correct_option = 'a';

    questions[2].question = strdup("Quel est l'opérateur utilisé pour accéder aux membres d'une structure via un pointeur?");
    questions[2].options[0] = strdup("a. . (point)");
    questions[2].options[1] = strdup("b. -> (flèche)");
    questions[2].options[2] = strdup("c. * (étoile)");
    questions[2].options[3] = strdup("d. & (esperluette)");
    questions[2].correct_option = 'b';

    return questions;
}

QuizQuestion *createJavaScriptQuiz(int *size)
{
    *size = 3;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel mot-clé est utilisé pour déclarer une variable en Javascript?");
    questions[0].options[0] = strdup("a. var");
    questions[0].options[1] = strdup("b. int");
    questions[0].options[2] = strdup("c. let");
    questions[0].options[3] = strdup("d. var et let");
    questions[0].correct_option = 'd';

    questions[1].question = strdup("comment crée-t-on une fonction anonyme en Javascript?");
    questions[1].options[0] = strdup("a. function() {}");
    questions[1].options[1] = strdup("b. anonymous function() {}");
    questions[1].options[2] = strdup("c. () => {}");
    questions[1].options[3] = strdup("d. function => {}");
    questions[1].correct_option = 'a';

    questions[2].question = strdup("Quel est l'opérateur de concaténation de chaînes en Javascript?");
    questions[2].options[0] = strdup("a. +");
    questions[2].options[1] = strdup("b. &");
    questions[2].options[2] = strdup("c. .");
    questions[2].options[3] = strdup("d. =");
    questions[2].correct_option = 'a';

    return questions;
}

void freeQuiz(QuizQuestion *questions, int size)
{
    for (int i = 0; i < size; i++)
    {
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

    char answer;
    while (1)
    {
        printf("Votre réponse (a, b, c, d) : ");
        if (scanf(" %c", &answer) != 1 || (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd'))
        {
            printf("Réponse invalide. Veuillez entrer a, b, c ou d.\n");
            while (getchar() != '\n')
                ; // vider le tampon d'entrée
        }
        else
        {
            while (getchar() != '\n')
                ; // vider le tampon d'entrée
            return answer;
        }
    }
}

void startQuiz(QuizQuestion *questions, int size)
{
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        char userAnswer = askQuestion(&questions[i], i);
        if (userAnswer == questions[i].correct_option)
        {
            printf("correct!\n");
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
