#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quiz.h"

QuizQuestion *createQuiz(int *size)
{
    *size = 10;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en Python : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("A. 15");
    questions[0].options[1] = strdup("B. 7");
    questions[0].options[2] = strdup("C. 8");
    questions[0].options[3] = strdup("D. 9");
    questions[0].correct_option = 'C';

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

    questions[3].question = strdup("Quel langage est principalement utilisé pour le développement d'applications mobiles sur la plateforme iOS?");
    questions[3].options[0] = strdup("A. Python");
    questions[3].options[1] = strdup("B. C++");
    questions[3].options[2] = strdup("C. Swift");
    questions[3].options[3] = strdup("D. Java");
    questions[3].correct_option = 'C';

    questions[4].question = strdup("Quelle est la syntaxe correcte pour déclarer une fonction en langage C?");
    questions[4].options[0] = strdup("A. function myFunction()");
    questions[4].options[1] = strdup("B. void myFunction()");
    questions[4].options[2] = strdup("C. def myFunction()");
    questions[4].options[3] = strdup("D. func myFunction()");
    questions[4].correct_option = 'B';

    questions[5].question = strdup("Quel est le terme utilisé pour désigner un ensemble de règles qui dictent la structure d'un programme informatique?");
    questions[5].options[0] = strdup("A. Syntaxe");
    questions[5].options[1] = strdup("B. Bibliothèque");
    questions[5].options[2] = strdup("C. Algorithme");
    questions[5].options[3] = strdup("D. Programmation");
    questions[5].correct_option = 'A';

    questions[6].question = strdup("Quel langage de programmation est largement utilisé pour le développement de sites web dynamiques?");
    questions[6].options[0] = strdup("A. HTML");
    questions[6].options[1] = strdup("B. CSS");
    questions[6].options[2] = strdup("C. SQL");
    questions[6].options[3] = strdup("D. JavaScript");
    questions[6].correct_option = 'D';

    questions[7].question = strdup("Qu'est-ce que l'IDE signifie en programmation?");
    questions[7].options[0] = strdup("A. Integrated Development Environment");
    questions[7].options[1] = strdup("B. Interface Design Enhancement");
    questions[7].options[2] = strdup("C. Interactive Development Environment");
    questions[7].options[3] = strdup("D. Intelligent Design Engineering");
    questions[7].correct_option = 'A';

    questions[8].question = strdup("Quel est le type de données utilisé pour stocker des valeurs entières en C?");
    questions[8].options[0] = strdup("A. float");
    questions[8].options[1] = strdup("B. int");
    questions[8].options[2] = strdup("C. char");
    questions[8].options[3] = strdup("D. string");
    questions[8].correct_option = 'B';

    questions[9].question = strdup("Dans quel langage de programmation la syntaxe est-elle sensible à la casse?");
    questions[9].options[0] = strdup("A. Python");
    questions[9].options[1] = strdup("B. Java");
    questions[9].options[2] = strdup("C. C++");
    questions[9].options[3] = strdup("D. Ruby");
    questions[9].correct_option = 'B';

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