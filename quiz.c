#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quiz.h"
#include <time.h>
#include <sys/time.h>

QuizQuestion *createPythonQuiz(int *size)
{
    *size = 5;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    printf(" ____________________________________\n");
    questions[0].question = strdup("-- Quel est le résultat de l'expression suivante en Python : 5 * 3 + 2 / 2 - 1? --");
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

    questions[2].question = strdup("Comment créer une liste en Python?");
    questions[2].options[0] = strdup("a. []");
    questions[2].options[1] = strdup("b. {}");
    questions[2].options[2] = strdup("c. ()");
    questions[2].options[3] = strdup("d. <>");
    questions[2].correct_option = 'a';

    questions[3].question = strdup("Quel module est utilisé pour manipuler les expressions régulières en Python?");
    questions[3].options[0] = strdup("a. regex");
    questions[3].options[1] = strdup("b. pyregex");
    questions[3].options[2] = strdup("c. re");
    questions[3].options[3] = strdup("d. regexlib");
    questions[3].correct_option = 'c';

    questions[4].question = strdup("Comment ajouter un élément à une liste en Python?");
    questions[4].options[0] = strdup("a. list.add(element)");
    questions[4].options[1] = strdup("b. list.append(element)");
    questions[4].options[2] = strdup("c. list.insert(element)");
    questions[4].options[3] = strdup("d. list.addElement(element)");
    questions[4].correct_option = 'b';

    questions[5].question = strdup("Quel est le résultat de l'expression suivante: 10 // 3?");
    questions[5].options[0] = strdup("a. 3.33");
    questions[5].options[1] = strdup("b. 3");
    questions[5].options[2] = strdup("c. 4");
    questions[5].options[3] = strdup("d. 3.0");
    questions[5].correct_option = 'b';

    questions[6].question = strdup("Comment ajoute-t-on un élément à la fin d'une liste en Python?");
    questions[6].options[0] = strdup("a. list.append(x)");
    questions[6].options[1] = strdup("b. list.add(x)");
    questions[6].options[2] = strdup("c. list.insert(x)");
    questions[6].options[3] = strdup("d. list.extend(x)");
    questions[6].correct_option = 'a';

    questions[7].question = strdup("Quel est le résultat de l'expression suivante: 'hello' + 'world'?");
    questions[7].options[0] = strdup("a. helloworld");
    questions[7].options[1] = strdup("b. hello world");
    questions[7].options[2] = strdup("c. hello\nworld");
    questions[7].options[3] = strdup("d. hello-world");
    questions[7].correct_option = 'a';

    questions[8].question = strdup("Comment accède-t-on au premier élément d'une liste en Python?");
    questions[8].options[0] = strdup("a. list[0]");
    questions[8].options[1] = strdup("b. list[1]");
    questions[8].options[2] = strdup("c. list.first()");
    questions[8].options[3] = strdup("d. list.start()");
    questions[8].correct_option = 'a';

    questions[9].question = strdup("Quel mot-clé est utilisé pour importer un module en Python?");
    questions[9].options[0] = strdup("a. import");
    questions[9].options[1] = strdup("b. include");
    questions[9].options[2] = strdup("c. require");
    questions[9].options[3] = strdup("d. module");
    questions[9].correct_option = 'a';

    return questions;
}

QuizQuestion *createJavaQuiz(int *size)
{
    *size = 5;
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

    questions[3].question = strdup("Quel est le mot-clé pour déclarer une classe en Java?");
    questions[3].options[0] = strdup("a. class");
    questions[3].options[1] = strdup("b. Class");
    questions[3].options[2] = strdup("c. className");
    questions[3].options[3] = strdup("d. cls");
    questions[3].correct_option = 'a';

    questions[4].question = strdup("Comment instancier une classe en Java?");
    questions[4].options[0] = strdup("a. new ClassName();");
    questions[4].options[1] = strdup("b. ClassName();");
    questions[4].options[2] = strdup("c. instantiate ClassName();");
    questions[4].options[3] = strdup("d. ClassName = new();");
    questions[4].correct_option = 'a';

    questions[5].question = strdup("Quel mot-clé est utilisé pour déclarer une constante en Java?");
    questions[5].options[0] = strdup("a. const");
    questions[5].options[1] = strdup("b. final");
    questions[5].options[2] = strdup("c. static");
    questions[5].options[3] = strdup("d. constant");
    questions[5].correct_option = 'b';

    questions[6].question = strdup("Quel est le type de base pour une chaîne de caractères en Java?");
    questions[6].options[0] = strdup("a. char");
    questions[6].options[1] = strdup("b. String");
    questions[6].options[2] = strdup("c. text");
    questions[6].options[3] = strdup("d. str");
    questions[6].correct_option = 'b';

    questions[7].question = strdup("Quelle est la méthode utilisée pour démarrer un thread en Java?");
    questions[7].options[0] = strdup("a. start()");
    questions[7].options[1] = strdup("b. run()");
    questions[7].options[2] = strdup("c. execute()");
    questions[7].options[3] = strdup("d. begin()");
    questions[7].correct_option = 'a';

    questions[8].question = strdup("Quelle est la méthode utilisée pour obtenir la longueur d'un tableau en Java?");
    questions[8].options[0] = strdup("a. length()");
    questions[8].options[1] = strdup("b. size()");
    questions[8].options[2] = strdup("c. getLength()");
    questions[8].options[3] = strdup("d. arrayLength()");
    questions[8].correct_option = 'a';

    questions[9].question = strdup("Comment déclare-t-on une méthode statique en Java?");
    questions[9].options[0] = strdup("a. static void myMethod()");
    questions[9].options[1] = strdup("b. void static myMethod()");
    questions[9].options[2] = strdup("c. static: void myMethod()");
    questions[9].options[3] = strdup("d. void myMethod() static");
    questions[9].correct_option = 'a';

    return questions;
}

QuizQuestion *createCSharpQuiz(int *size)
{
    *size = 5;
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

     questions[3].question = strdup("Quel est le mot-clé utilisé pour empêcher l'héritage d'une classe en C#?");
    questions[3].options[0] = strdup("a. sealed");
    questions[3].options[1] = strdup("b. static");
    questions[3].options[2] = strdup("c. final");
    questions[3].options[3] = strdup("d. private");
    questions[3].correct_option = 'a';

    questions[4].question = strdup("Quelle est la méthode utilisée pour comparer deux chaînes en C#?");
    questions[4].options[0] = strdup("a. compare()");
    questions[4].options[1] = strdup("b. equals()");
    questions[4].options[2] = strdup("c. compareTo()");
    questions[4].options[3] = strdup("d. compareWith()");
    questions[4].correct_option = 'b';

    questions[5].question = strdup("Quel est le type de données par défaut pour les nombres entiers en C#?");
    questions[5].options[0] = strdup("a. int");
    questions[5].options[1] = strdup("b. double");
    questions[5].options[2] = strdup("c. float");
    questions[5].options[3] = strdup("d. decimal");
    questions[5].correct_option = 'a';

    questions[6].question = strdup("Quel est le mot-clé utilisé pour définir une classe en C#?");
    questions[6].options[0] = strdup("a. class");
    questions[6].options[1] = strdup("b. Class");
    questions[6].options[2] = strdup("c. className");
    questions[6].options[3] = strdup("d. cls");
    questions[6].correct_option = 'a';

    questions[7].question = strdup("Quelle est la méthode utilisée pour obtenir la longueur d'une chaîne en C#?");
    questions[7].options[0] = strdup("a. length()");
    questions[7].options[1] = strdup("b. size()");
    questions[7].options[2] = strdup("c. getLength()");
    questions[7].options[3] = strdup("d. Length");
    questions[7].correct_option = 'd';

    questions[8].question = strdup("Quel mot-clé est utilisé pour créer une instance d'une classe en C#?");
    questions[8].options[0] = strdup("a. create");
    questions[8].options[1] = strdup("b. new");
    questions[8].options[2] = strdup("c. instance");
    questions[8].options[3] = strdup("d. instantiate");
    questions[8].correct_option = 'b';

    questions[9].question = strdup("Quel est le résultat de l'expression suivante: true && false en C#?");
    questions[9].options[0] = strdup("a. true");
    questions[9].options[1] = strdup("b. false");
    questions[9].options[2] = strdup("c. true & false");
    questions[9].options[3] = strdup("d. true || false");
    questions[9].correct_option = 'b';

    return questions;
}

QuizQuestion *createCQuiz(int *size)
{
    *size = 5;
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

    questions[3].question = strdup("Quelle est la taille en octets d'un entier (int) en C sur une architecture 32 bits?");
    questions[3].options[0] = strdup("a. 4 octets");
    questions[3].options[1] = strdup("b. 8 octets");
    questions[3].options[2] = strdup("c. 2 octets");
    questions[3].options[3] = strdup("d. Dépend de l'architecture");
    questions[3].correct_option = 'a';

    questions[4].question = strdup("Quelle est la fonction utilisée pour lire une chaîne de caractères à partir de l'entrée standard en C?");
    questions[4].options[0] = strdup("a. read()");
    questions[4].options[1] = strdup("b. gets()");
    questions[4].options[2] = strdup("c. scanf()");
    questions[4].options[3] = strdup("d. fgets()");
    questions[4].correct_option = 'b';

    questions[5].question = strdup("Quel est le type de données utilisé pour stocker des caractères en C?");
    questions[5].options[0] = strdup("a. char");
    questions[5].options[1] = strdup("b. string");
    questions[5].options[2] = strdup("c. Character");
    questions[5].options[3] = strdup("d. caractère");
    questions[5].correct_option = 'a';

    questions[6].question = strdup("Quel est l'opérateur utilisé pour déréférencer un pointeur en C?");
    questions[6].options[0] = strdup("a. &");
    questions[6].options[1] = strdup("b. *");
    questions[6].options[2] = strdup("c. ->");
    questions[6].options[3] = strdup("d. ::");
    questions[6].correct_option = 'b';

    questions[7].question = strdup("Quelle est la fonction utilisée pour imprimer une chaîne de caractères en C?");
    questions[7].options[0] = strdup("a. printf()");
    questions[7].options[1] = strdup("b. print()");
    questions[7].options[2] = strdup("c. println()");
    questions[7].options[3] = strdup("d. echo()");
    questions[7].correct_option = 'a';

    questions[8].question = strdup("Quel est le résultat de l'expression 5 % 2 en C?");
    questions[8].options[0] = strdup("a. 2");
    questions[8].options[1] = strdup("b. 2.5");
    questions[8].options[2] = strdup("c. 1");
    questions[8].options[3] = strdup("d. 0.5");
    questions[8].correct_option = 'c';

    questions[9].question = strdup("Quelle est la taille en octets d'un pointeur en C sur une architecture 64 bits?");
    questions[9].options[0] = strdup("a. 2 octets");
    questions[9].options[1] = strdup("b. 4 octets");
    questions[9].options[2] = strdup("c. 8 octets");
    questions[9].options[3] = strdup("d. Dépend de l'architecture");
    questions[9].correct_option = 'c';

    return questions;
}

QuizQuestion *createJavaScriptQuiz(int *size)
{
    *size = 5;
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

    questions[3].question = strdup("Quelle méthode est utilisée pour ajouter un élément à la fin d'un tableau en JavaScript?");
    questions[3].options[0] = strdup("a. push()");
    questions[3].options[1] = strdup("b. add()");
    questions[3].options[2] = strdup("c. insert()");
    questions[3].options[3] = strdup("d. append()");
    questions[3].correct_option = 'a';

    questions[4].question = strdup("Comment accède-t-on à un élément par son identifiant dans le DOM?");
    questions[4].options[0] = strdup("a. document.getElementById()");
    questions[4].options[1] = strdup("b. document.querySelector()");
    questions[4].options[2] = strdup("c. document.getElementsByClassName()");
    questions[4].options[3] = strdup("d. document.getElementByTagName()");
    questions[4].correct_option = 'a';

    questions[5].question = strdup("Quel est le type de retour de la méthode 'alert' en JavaScript?");
    questions[5].options[0] = strdup("a. string");
    questions[5].options[1] = strdup("b. undefined");
    questions[5].options[2] = strdup("c. boolean");
    questions[5].options[3] = strdup("d. object");
    questions[5].correct_option = 'b';

    questions[6].question = strdup("Comment déclarer une fonction nommée en JavaScript?");
    questions[6].options[0] = strdup("a. function myFunction() {}");
    questions[6].options[1] = strdup("b. var myFunction = function() {}");
    questions[6].options[2] = strdup("c. let myFunction = () => {}");
    questions[6].options[3] = strdup("d. All of the above");
    questions[6].correct_option = 'd';

    questions[7].question = strdup("Quel mot-clé est utilisé pour créer une constante en JavaScript?");
    questions[7].options[0] = strdup("a. const");
    questions[7].options[1] = strdup("b. var");
    questions[7].options[2] = strdup("c. let");
    questions[7].options[3] = strdup("d. constant");
    questions[7].correct_option = 'a';

    questions[8].question = strdup("Comment écrit-on un commentaire sur une seule ligne en JavaScript?");
    questions[8].options[0] = strdup("a. // commentaire");
    questions[8].options[1] = strdup("b. <!-- commentaire -->");
    questions[8].options[2] = strdup("c. # commentaire");
    questions[8].options[3] = strdup("d. /* commentaire */");
    questions[8].correct_option = 'a';

    questions[9].question = strdup("Quel est le résultat de l'expression '2' + 2 en JavaScript?");
    questions[9].options[0] = strdup("a. '22'");
    questions[9].options[1] = strdup("b. 4");
    questions[9].options[2] = strdup("c. 2");
    questions[9].options[3] = strdup("d. NaN");
    questions[9].correct_option = 'a';

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
    do
    {
        printf("Votre réponse (a, b, c, d) : ");
        if (scanf(" %c", &answer) != 1 || (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd'))
        {
            printf("Réponse invalide. Veuillez entrer a, b, c ou d.\n");
            while (getchar() != '\n')
            {
            } // vider le tampon d'entrée
        }
        else
        {
            break;
        }
    } while (1);

    return answer;
}

void startQuiz(QuizQuestion *questions, int size)
{
    int score = 0;
    double start, end;
    double total_time = 0.0;

    for (int i = 0; i < size; i++)
    {
        start = get_time();
        char userAnswer = askQuestion(&questions[i], i);
        end = get_time();
        double time_taken = (end - start);
        total_time += time_taken;

        if (userAnswer == questions[i].correct_option)
        {
            printf("correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. La bonne réponse était %c.\n", questions[i].correct_option);
        }
        printf("Temps pris pour cette question: %.1f secondes\n\n", time_taken);
    }

    double success_rate = ((double)score / size) * 100.0;
    printf("Votre taux de réussite est de %.2f%%.\n", success_rate);
    printf("Temps total pris pour le quiz: %.1f secondes\n", total_time);
    printf("Vous avez obtenu %d sur %d bonnes réponses.\n", score, size);
}


double get_time()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (double)tv.tv_sec + (double)tv.tv_usec / 1000000.0;
}
