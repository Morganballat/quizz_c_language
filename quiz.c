#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quiz.h"
#include <time.h>
#include <sys/time.h>

QuizQuestion *createPythonQuiz(int *size)
{
    *size = 10;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en Python : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("a. 15");
    questions[0].options[1] = strdup("b. 7");
    questions[0].options[2] = strdup("c. 8");
    questions[0].options[3] = strdup("d. 9");
    questions[0].correct_option = 'a';
    strcpy(questions[0].explication, "L'ordre d'évaluation des opérateurs en Python est le suivant: Multiplication et division, puis addition et soustraction. Par conséquent, l'expression 5 * 3 + 2 / 2 - 1 est évaluée comme suit: 15 + 1 - 1 = 15.");

    questions[1].question = strdup("Quel mot-clé est utilisé pour définir une fonction en Python?");
    questions[1].options[0] = strdup("a. func");
    questions[1].options[1] = strdup("b. def");
    questions[1].options[2] = strdup("c. function");
    questions[1].options[3] = strdup("d. define");
    questions[1].correct_option = 'b';
    strcpy(questions[1].explication, "En Python, le mot-clé 'def' est utilisé pour définir une fonction. Par exemple, def my_function():");

    questions[2].question = strdup("Comment créer une liste en Python?");
    questions[2].options[0] = strdup("a. []");
    questions[2].options[1] = strdup("b. {}");
    questions[2].options[2] = strdup("c. ()");
    questions[2].options[3] = strdup("d. <>");
    questions[2].correct_option = 'a';
    strcpy(questions[2].explication, "En Python, les crochets [] sont utilisés pour créer une liste. Par exemple, ma_liste = [1, 2, 3].");

    questions[3].question = strdup("Quel module est utilisé pour manipuler les expressions régulières en Python?");
    questions[3].options[0] = strdup("a. regex");
    questions[3].options[1] = strdup("b. pyregex");
    questions[3].options[2] = strdup("c. re");
    questions[3].options[3] = strdup("d. regexlib");
    questions[3].correct_option = 'c';
    strcpy(questions[3].explication, "Le module 're' est utilisé pour manipuler les expressions régulières en Python. Par exemple, import re.");

    questions[4].question = strdup("Comment ajouter un élément à une liste en Python?");
    questions[4].options[0] = strdup("a. list.add(element)");
    questions[4].options[1] = strdup("b. list.append(element)");
    questions[4].options[2] = strdup("c. list.insert(element)");
    questions[4].options[3] = strdup("d. list.addElement(element)");
    questions[4].correct_option = 'b';
    strcpy(questions[4].explication, "En Python, la méthode 'append()' est utilisée pour ajouter un élément à la fin d'une liste. Par exemple, ma_liste.append(5).");

    questions[5].question = strdup("Quel est le résultat de l'expression suivante: 10 // 3?");
    questions[5].options[0] = strdup("a. 3.33");
    questions[5].options[1] = strdup("b. 3");
    questions[5].options[2] = strdup("c. 4");
    questions[5].options[3] = strdup("d. 3.0");
    questions[5].correct_option = 'b';
    strcpy(questions[5].explication, "L'opérateur '//' est utilisé pour la division entière en Python. Par conséquent, 10 // 3 est égal à 3.");

    questions[6].question = strdup("Comment ajoute-t-on un élément à la fin d'une liste en Python?");
    questions[6].options[0] = strdup("a. list.append(x)");
    questions[6].options[1] = strdup("b. list.add(x)");
    questions[6].options[2] = strdup("c. list.insert(x)");
    questions[6].options[3] = strdup("d. list.extend(x)");
    questions[6].correct_option = 'a';
    strcpy(questions[6].explication, "En Python, la méthode 'append()' est utilisée pour ajouter un élément à la fin d'une liste. Par exemple, ma_liste.append(5).");

    questions[7].question = strdup("Quel est le résultat de l'expression suivante: 'hello' + 'world'?");
    questions[7].options[0] = strdup("a. helloworld");
    questions[7].options[1] = strdup("b. hello world");
    questions[7].options[2] = strdup("c. hello\nworld");
    questions[7].options[3] = strdup("d. hello-world");
    questions[7].correct_option = 'a';
    strcpy(questions[7].explication, "En Python, l'opérateur '+' est utilisé pour concaténer des chaînes. Par conséquent, 'hello' + 'world' est égal à 'helloworld'.");

    questions[8].question = strdup("Comment accède-t-on au premier élément d'une liste en Python?");
    questions[8].options[0] = strdup("a. list[0]");
    questions[8].options[1] = strdup("b. list[1]");
    questions[8].options[2] = strdup("c. list.first()");
    questions[8].options[3] = strdup("d. list.start()");
    questions[8].correct_option = 'a';
    strcpy(questions[8].explication, "En Python, les indices de liste commencent à 0. Par conséquent, pour accéder au premier élément d'une liste, vous utilisez list[0].");

    questions[9].question = strdup("Quel mot-clé est utilisé pour importer un module en Python?");
    questions[9].options[0] = strdup("a. import");
    questions[9].options[1] = strdup("b. include");
    questions[9].options[2] = strdup("c. require");
    questions[9].options[3] = strdup("d. module");
    questions[9].correct_option = 'a';
    strcpy(questions[9].explication, "En Python, le mot-clé 'import' est utilisé pour importer un module. Par exemple, import math.");

    return questions;
}

QuizQuestion *createJavaQuiz(int *size)
{
    *size = 10;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le type de retour de la méthode 'main' en Java?");
    questions[0].options[0] = strdup("a. int");
    questions[0].options[1] = strdup("b. void");
    questions[0].options[2] = strdup("c. String");
    questions[0].options[3] = strdup("d. char");
    questions[0].correct_option = 'b';
    strcpy(questions[0].explication, "En Java, la méthode 'main' ne renvoie rien, donc son type de retour est 'void'");

    questions[1].question = strdup("Quel mot-clé est utilisé pour hériter d'une classe en Java?");
    questions[1].options[0] = strdup("a. extends");
    questions[1].options[1] = strdup("b. implements");
    questions[1].options[2] = strdup("c. inherits");
    questions[1].options[3] = strdup("d. extendsClass");
    questions[1].correct_option = 'a';
    strcpy(questions[1].explication, "En Java, le mot-clé 'extends' est utilisé pour hériter d'une classe. Par exemple, public class MaClasse extends ClasseParent {}");

    questions[2].question = strdup("Quel est le package de base de Java?");
    questions[2].options[0] = strdup("a. java.lang");
    questions[2].options[1] = strdup("b. java.util");
    questions[2].options[2] = strdup("c. java.io");
    questions[2].options[3] = strdup("d. java.net");
    questions[2].correct_option = 'a';
    strcpy(questions[2].explication, "Le package de base de Java est java.lang, qui est automatiquement importé dans chaque programme Java.");

    questions[3].question = strdup("Quel est le mot-clé pour déclarer une classe en Java?");
    questions[3].options[0] = strdup("a. class");
    questions[3].options[1] = strdup("b. Class");
    questions[3].options[2] = strdup("c. className");
    questions[3].options[3] = strdup("d. classDefinition");
    questions[3].correct_option = 'a';
    strcpy(questions[3].explication, "En Java, le mot-clé 'class' est utilisé pour déclarer une classe. Par exemple, public class MaClasse {}.");

    questions[4].question = strdup("Quel est le type d'une variable déclarée avec 'String' en Java?");
    questions[4].options[0] = strdup("a. char");
    questions[4].options[1] = strdup("b. String");
    questions[4].options[2] = strdup("c. char[]");
    questions[4].options[3] = strdup("d. int");
    questions[4].correct_option = 'b';
    strcpy(questions[4].explication, "En Java, 'String' est une classe qui représente une chaîne de caractères.");

    questions[5].question = strdup("Quel mot-clé est utilisé pour déclarer une constante en Java?");
    questions[5].options[0] = strdup("a. const");
    questions[5].options[1] = strdup("b. final");
    questions[5].options[2] = strdup("c. static");
    questions[5].options[3] = strdup("d. constant");
    questions[5].correct_option = 'b';
    strcpy(questions[5].explication, "En Java, le mot-clé 'final' est utilisé pour déclarer une constante. Par exemple, final int MA_CONSTANTE = 10;");

    questions[6].question = strdup("Quel est le résultat de l'expression suivante: 10 % 3 en Java?");
    questions[6].options[0] = strdup("a. 1");
    questions[6].options[1] = strdup("b. 2");
    questions[6].options[2] = strdup("c. 3");
    questions[6].options[3] = strdup("d. 4");
    questions[6].correct_option = 'a';
    strcpy(questions[6].explication, "L'opérateur '%' est utilisé pour obtenir le reste de la division en Java. Par conséquent, 10 % 3 est égal à 1.");

    questions[7].question = strdup("Comment crée-t-on un objet en Java?");
    questions[7].options[0] = strdup("a. MaClasse obj = MaClasse();");
    questions[7].options[1] = strdup("b. MaClasse obj = new MaClasse();");
    questions[7].options[2] = strdup("c. MaClasse obj = create MaClasse();");
    questions[7].options[3] = strdup("d. MaClasse obj = MaClasse.new();");
    questions[7].correct_option = 'b';
    strcpy(questions[7].explication, "En Java, on utilise le mot-clé 'new' pour créer un nouvel objet. Par exemple, MaClasse obj = new MaClasse();");

    questions[8].question = strdup("Quel est le résultat de l'expression suivante: 'hello' + 'world' en Java?");
    questions[8].options[0] = strdup("a. helloworld");
    questions[8].options[1] = strdup("b. hello world");
    questions[8].options[2] = strdup("c. hello\nworld");
    questions[8].options[3] = strdup("d. hello-world");
    questions[8].correct_option = 'a';
    strcpy(questions[8].explication, "En Java, l'opérateur '+' est utilisé pour concaténer des chaînes. Par conséquent, 'hello' + 'world' est égal à 'helloworld'.");

    questions[9].question = strdup("Quel mot-clé est utilisé pour importer un package en Java?");
    questions[9].options[0] = strdup("a. import");
    questions[9].options[1] = strdup("b. include");
    questions[9].options[2] = strdup("c. require");
    questions[9].options[3] = strdup("d. package");
    questions[9].correct_option = 'a';
    strcpy(questions[9].explication, "En Java, le mot-clé 'import' est utilisé pour importer un package. Par exemple, import java.util.Scanner;");

    return questions;
}

QuizQuestion *createCSharpQuiz(int *size)
{
    *size = 10;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel mot-clé est utilisé pour définir une propriété en C#?");
    questions[0].options[0] = strdup("a. property");
    questions[0].options[1] = strdup("b. prop");
    questions[0].options[2] = strdup("c. var");
    questions[0].options[3] = strdup("d. get; set;");
    questions[0].correct_option = 'd';
    strcpy(questions[9].explication, "En C#, vous définissez une propriété en utilisant les mots-clés 'get' et 'set'. Par exemple, public int MaPropriete { get; set; }");

    questions[1].question = strdup("Quelle méthode est utilisée pour commencer un thread en C#?");
    questions[1].options[0] = strdup("a. Start()");
    questions[1].options[1] = strdup("b. Run()");
    questions[1].options[2] = strdup("c. Begin()");
    questions[1].options[3] = strdup("d. Execute()");
    questions[1].correct_option = 'a';
    strcpy(questions[1].explication, "En C#, la méthode 'Start()' est utilisée pour commencer un thread. Par exemple, monThread.Start();");

    questions[2].question = strdup("comment déclare-t-on une constante en C#?");
    questions[2].options[0] = strdup("a. const int x = 10;");
    questions[2].options[1] = strdup("b. final int x = 10;");
    questions[2].options[2] = strdup("c. static int x = 10;");
    questions[2].options[3] = strdup("d. define x = 10;");
    questions[2].correct_option = 'a';
    strcpy(questions[2].explication, "En C#, vous déclarez une constante en utilisant le mot-clé 'const'. Par exemple, const int MA_CONSTANTE = 10;");

    questions[3].question = strdup("Quel est le mot-clé utilisé pour empêcher l'héritage d'une classe en C#?");
    questions[3].options[0] = strdup("a. sealed");
    questions[3].options[1] = strdup("b. static");
    questions[3].options[2] = strdup("c. final");
    questions[3].options[3] = strdup("d. private");
    questions[3].correct_option = 'a';
    strcpy(questions[3].explication, "En C#, le mot-clé 'sealed' est utilisé pour empêcher l'héritage d'une classe. Par exemple, public sealed class MaClasse {}");

    questions[4].question = strdup("Quelle est la méthode utilisée pour comparer deux chaînes en C#?");
    questions[4].options[0] = strdup("a. compare()");
    questions[4].options[1] = strdup("b. equals()");
    questions[4].options[2] = strdup("c. compareTo()");
    questions[4].options[3] = strdup("d. compareWith()");
    questions[4].correct_option = 'b';
    strcpy(questions[4].explication, "En C#, la méthode 'Equals()' est utilisée pour comparer deux chaînes. Par exemple, string chaine1 = \"hello\"; string chaine2 = \"world\"; if (chaine1.Equals(chaine2)) {}");

    questions[5].question = strdup("Quel est le type de données par défaut pour les nombres entiers en C#?");
    questions[5].options[0] = strdup("a. int");
    questions[5].options[1] = strdup("b. double");
    questions[5].options[2] = strdup("c. float");
    questions[5].options[3] = strdup("d. decimal");
    questions[5].correct_option = 'a';
    strcpy(questions[5].explication, "En C#, le type de données par défaut pour les nombres entiers est 'int'. Par exemple, int monEntier = 10;");

    questions[6].question = strdup("Quel est le mot-clé utilisé pour définir une classe en C#?");
    questions[6].options[0] = strdup("a. class");
    questions[6].options[1] = strdup("b. Class");
    questions[6].options[2] = strdup("c. className");
    questions[6].options[3] = strdup("d. cls");
    questions[6].correct_option = 'a';
    strcpy(questions[6].explication, "En C#, le mot-clé 'class' est utilisé pour définir une classe. Par exemple, public class MaClasse {}");

    questions[7].question = strdup("Quelle est la méthode utilisée pour obtenir la longueur d'une chaîne en C#?");
    questions[7].options[0] = strdup("a. length()");
    questions[7].options[1] = strdup("b. size()");
    questions[7].options[2] = strdup("c. getLength()");
    questions[7].options[3] = strdup("d. Length");
    questions[7].correct_option = 'd';
    strcpy(questions[7].explication, "En C#, la propriété 'Length' est utilisée pour obtenir la longueur d'une chaîne. Par exemple, string maChaine = \"hello\"; int longueur = maChaine.Length;");

    questions[8].question = strdup("Quel mot-clé est utilisé pour créer une instance d'une classe en C#?");
    questions[8].options[0] = strdup("a. create");
    questions[8].options[1] = strdup("b. new");
    questions[8].options[2] = strdup("c. instance");
    questions[8].options[3] = strdup("d. instantiate");
    questions[8].correct_option = 'b';
    strcpy(questions[8].explication, "En C#, vous créez une instance d'une classe en utilisant le mot-clé 'new'. Par exemple, MaClasse maClasse = new MaClasse();");

    questions[9].question = strdup("Quel est le résultat de l'expression suivante: true && false en C#?");
    questions[9].options[0] = strdup("a. true");
    questions[9].options[1] = strdup("b. false");
    questions[9].options[2] = strdup("c. true & false");
    questions[9].options[3] = strdup("d. true || false");
    questions[9].correct_option = 'b';
    strcpy(questions[9].explication, "En C#, l'opérateur '&&' est l'opérateur logique ET. Il renvoie 'true' si les deux opérandes sont vrais, sinon 'false'.");

    return questions;
}

QuizQuestion *createCQuiz(int *size)
{
    *size = 10;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel est le résultat de l'expression suivante en C : 5 * 3 + 2 / 2 - 1?");
    questions[0].options[0] = strdup("a. 15");
    questions[0].options[1] = strdup("b. 7");
    questions[0].options[2] = strdup("c. 8");
    questions[0].options[3] = strdup("d. 9");
    questions[0].correct_option = 'a';
    strcpy(questions[0].explication, "L'ordre d'évaluation des opérateurs en C est le suivant: Multiplication et division, puis addition et soustraction. Par conséquent, l'expression 5 * 3 + 2 / 2 - 1 est évaluée comme suit: 15 + 1 - 1 = 15.");

    questions[1].question = strdup("Quel est le mot-clé pour allouer de la mémoire dynamiquement en C?");
    questions[1].options[0] = strdup("a. malloc");
    questions[1].options[1] = strdup("b. allocate");
    questions[1].options[2] = strdup("c. memalloc");
    questions[1].options[3] = strdup("d. new");
    questions[1].correct_option = 'a';
    strcpy(questions[1].explication, "En C, le mot-clé 'malloc' est utilisé pour allouer de la mémoire dynamiquement. Par exemple, int *ptr = (int*) malloc(10 * sizeof(int));");

    questions[2].question = strdup("Quel est l'opérateur utilisé pour accéder aux membres d'une structure via un pointeur?");
    questions[2].options[0] = strdup("a. . (point)");
    questions[2].options[1] = strdup("b. -> (flèche)");
    questions[2].options[2] = strdup("c. * (étoile)");
    questions[2].options[3] = strdup("d. & (esperluette)");
    questions[2].correct_option = 'b';
    strcpy(questions[2].explication, "En C, l'opérateur '->' est utilisé pour accéder aux membres d'une structure via un pointeur. Par exemple, ptr->membre;");

    questions[3].question = strdup("Quelle est la taille en octets d'un entier (int) en C sur une architecture 32 bits?");
    questions[3].options[0] = strdup("a. 4 octets");
    questions[3].options[1] = strdup("b. 8 octets");
    questions[3].options[2] = strdup("c. 2 octets");
    questions[3].options[3] = strdup("d. Dépend de l'architecture");
    questions[3].correct_option = 'a';
    strcpy(questions[3].explication, "En C, la taille d'un entier (int) est de 4 octets sur une architecture 32 bits.");

    questions[4].question = strdup("Quelle est la fonction utilisée pour lire une chaîne de caractères à partir de l'entrée standard en C?");
    questions[4].options[0] = strdup("a. read()");
    questions[4].options[1] = strdup("b. gets()");
    questions[4].options[2] = strdup("c. scanf()");
    questions[4].options[3] = strdup("d. fgets()");
    questions[4].correct_option = 'b';
    strcpy(questions[4].explication, "En C, la fonction 'gets()' est utilisée pour lire une chaîne de caractères à partir de l'entrée standard. Par exemple, char chaine[100]; gets(chaine);");

    questions[5].question = strdup("Quel est le type de données utilisé pour stocker des caractères en C?");
    questions[5].options[0] = strdup("a. char");
    questions[5].options[1] = strdup("b. string");
    questions[5].options[2] = strdup("c. Character");
    questions[5].options[3] = strdup("d. caractère");
    questions[5].correct_option = 'a';
    strcpy(questions[5].explication, "En C, le type de données utilisé pour stocker des caractères est 'char'. Par exemple, char lettre = 'A';");

    questions[6].question = strdup("Quel est l'opérateur utilisé pour déréférencer un pointeur en C?");
    questions[6].options[0] = strdup("a. &");
    questions[6].options[1] = strdup("b. *");
    questions[6].options[2] = strdup("c. ->");
    questions[6].options[3] = strdup("d. ::");
    questions[6].correct_option = 'b';
    strcpy(questions[6].explication, "En C, l'opérateur '*' est utilisé pour déréférencer un pointeur. Par exemple, int *ptr; *ptr = 10;");

    questions[7].question = strdup("Quelle est la fonction utilisée pour imprimer une chaîne de caractères en C?");
    questions[7].options[0] = strdup("a. printf()");
    questions[7].options[1] = strdup("b. print()");
    questions[7].options[2] = strdup("c. println()");
    questions[7].options[3] = strdup("d. echo()");
    questions[7].correct_option = 'a';
    strcpy(questions[7].explication, "En C, la fonction 'printf()' est utilisée pour imprimer une chaîne de caractères. Par exemple, printf(\"Hello, World!\");");

    questions[8].question = strdup("Quel est le résultat de l'expression 5 % 2 en C?");
    questions[8].options[0] = strdup("a. 2");
    questions[8].options[1] = strdup("b. 2.5");
    questions[8].options[2] = strdup("c. 1");
    questions[8].options[3] = strdup("d. 0.5");
    questions[8].correct_option = 'c';
    strcpy(questions[8].explication, "En C, l'opérateur '%' est l'opérateur modulo, qui renvoie le reste de la division entière. Par conséquent, 5 % 2 est égal à 1.");

    questions[9].question = strdup("Quelle est la taille en octets d'un pointeur en C sur une architecture 64 bits?");
    questions[9].options[0] = strdup("a. 2 octets");
    questions[9].options[1] = strdup("b. 4 octets");
    questions[9].options[2] = strdup("c. 8 octets");
    questions[9].options[3] = strdup("d. Dépend de l'architecture");
    questions[9].correct_option = 'c';
    strcpy(questions[9].explication, "En C, la taille d'un pointeur est de 8 octets sur une architecture 64 bits.");

    return questions;
}

QuizQuestion *createJavaScriptQuiz(int *size)
{
    *size = 10;
    QuizQuestion *questions = malloc(*size * sizeof(QuizQuestion));

    questions[0].question = strdup("Quel mot-clé est utilisé pour déclarer une variable en Javascript?");
    questions[0].options[0] = strdup("a. var");
    questions[0].options[1] = strdup("b. int");
    questions[0].options[2] = strdup("c. let");
    questions[0].options[3] = strdup("d. var et let");
    questions[0].correct_option = 'd';
    strcpy(questions[0].explication, "En Javascript, les variables peuvent être déclarées avec les mots-clés 'var' ou 'let'. Par exemple, var maVariable = 10;");

    questions[1].question = strdup("comment crée-t-on une fonction anonyme en Javascript?");
    questions[1].options[0] = strdup("a. function() {}");
    questions[1].options[1] = strdup("b. anonymous function() {}");
    questions[1].options[2] = strdup("c. () => {}");
    questions[1].options[3] = strdup("d. function => {}");
    questions[1].correct_option = 'a';
    strcpy(questions[1].explication, "En Javascript, vous créez une fonction anonyme en utilisant la syntaxe function() {}. Par exemple, var maFonction = function() {};");

    questions[2].question = strdup("Quel est l'opérateur de concaténation de chaînes en Javascript?");
    questions[2].options[0] = strdup("a. +");
    questions[2].options[1] = strdup("b. &");
    questions[2].options[2] = strdup("c. .");
    questions[2].options[3] = strdup("d. =");
    questions[2].correct_option = 'a';
    strcpy(questions[2].explication, "En Javascript, l'opérateur de concaténation de chaînes est '+'. Par exemple, var chaine = 'Hello' + 'World';");

    questions[3].question = strdup("Quelle méthode est utilisée pour ajouter un élément à la fin d'un tableau en JavaScript?");
    questions[3].options[0] = strdup("a. push()");
    questions[3].options[1] = strdup("b. add()");
    questions[3].options[2] = strdup("c. insert()");
    questions[3].options[3] = strdup("d. append()");
    questions[3].correct_option = 'a';
    strcpy(questions[3].explication, "En Javascript, la méthode 'push()' est utilisée pour ajouter un élément à la fin d'un tableau. Par exemple, monTableau.push(5);");

    questions[4].question = strdup("Comment accède-t-on à un élément par son identifiant dans le DOM?");
    questions[4].options[0] = strdup("a. document.getElementById()");
    questions[4].options[1] = strdup("b. document.querySelector()");
    questions[4].options[2] = strdup("c. document.getElementsByClassName()");
    questions[4].options[3] = strdup("d. document.getElementByTagName()");
    questions[4].correct_option = 'a';
    strcpy(questions[4].explication, "En Javascript, vous accédez à un élément par son identifiant dans le DOM en utilisant la méthode document.getElementById(). Par exemple, var monElement = document.getElementById('monId');");

    questions[5].question = strdup("Quel est le type de retour de la méthode 'alert' en JavaScript?");
    questions[5].options[0] = strdup("a. string");
    questions[5].options[1] = strdup("b. undefined");
    questions[5].options[2] = strdup("c. boolean");
    questions[5].options[3] = strdup("d. object");
    questions[5].correct_option = 'b';
    strcpy(questions[5].explication, "La méthode 'alert' en Javascript ne renvoie rien, donc son type de retour est 'undefined'.");

    questions[6].question = strdup("Comment déclarer une fonction nommée en JavaScript?");
    questions[6].options[0] = strdup("a. function myFunction() {}");
    questions[6].options[1] = strdup("b. var myFunction = function() {}");
    questions[6].options[2] = strdup("c. let myFunction = () => {}");
    questions[6].options[3] = strdup("d. All of the above");
    questions[6].correct_option = 'd';
    strcpy(questions[6].explication, "En Javascript, vous pouvez déclarer une fonction nommée en utilisant la syntaxe function myFunction() {} ou en utilisant les expressions de fonction var myFunction = function() {} ou let myFunction = () => {}.");

    questions[7].question = strdup("Quel mot-clé est utilisé pour créer une constante en JavaScript?");
    questions[7].options[0] = strdup("a. const");
    questions[7].options[1] = strdup("b. var");
    questions[7].options[2] = strdup("c. let");
    questions[7].options[3] = strdup("d. constant");
    questions[7].correct_option = 'a';
    strcpy(questions[7].explication, "En Javascript, le mot-clé 'const' est utilisé pour créer une constante. Par exemple, const MA_CONSTANTE = 10;");

    questions[8].question = strdup("Comment écrit-on un commentaire sur une seule ligne en JavaScript?");
    questions[8].options[0] = strdup("a. // commentaire");
    questions[8].options[1] = strdup("b. <!-- commentaire -->");
    questions[8].options[2] = strdup("c. # commentaire");
    questions[8].options[3] = strdup("d. /* commentaire */");
    questions[8].correct_option = 'a';
    strcpy(questions[8].explication, "En Javascript, vous écrivez un commentaire sur une seule ligne en utilisant // devant le commentaire. Par exemple, // Ceci est un commentaire.");

    questions[9].question = strdup("Quel est le résultat de l'expression '2' + 2 en JavaScript?");
    questions[9].options[0] = strdup("a. '22'");
    questions[9].options[1] = strdup("b. 4");
    questions[9].options[2] = strdup("c. 2");
    questions[9].options[3] = strdup("d. NaN");
    questions[9].correct_option = 'a';
    strcpy(questions[9].explication, "En Javascript, si vous concaténez une chaîne avec un nombre, le nombre est converti en chaîne. Par conséquent, '2' + 2 est égal à '22'.");

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
            printf("______________________\n");
            printf("Bonne réponse !\n");
            printf("______________________\n");
            score++;
        }
        else
        {
            printf("Mauvaise réponse. La bonne réponse était %c.\n", questions[i].correct_option);
        }
        printf("Explication: %s\n", questions[i].explication);
        printf("______________________\n");
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
