#include <stdio.h>
#include "quiz.h"

void display_ascii()
{
    printf(" ________                 __________      .__      .__        \n");
    printf(" \\______ \\   _______  _\\__    __/_______|__|__  _|__|____   \n");
    printf("  |   |  \\_/ __ \\  \\/ /  |    |  \\_  __ \\  \\  \\/ /  \\__  \\  \n");
    printf("  |   `   \\  ___/\\   /    |    |   |  | \\/  |\\   /|  |/ __ \\_\n");
    printf(" /______  /\\___  >\\_/     |____|   |__|  |__| \\_/ |__(____  / \n");
    printf("        \\/     \\/                                        \\/  \n");
    printf("_____________________________________________________________________\n");
    printf("\n");
}

int getUserChoice()
{
    int choice;
    while (1)
    {
        printf("Choix: ");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5)
        {
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
            while (getchar() != '\n')
                ; 
        }
        else
        {
            while (getchar() != '\n')
                ;
            return choice;
        }
    }
}

int main()
{
    display_ascii();

    printf(" ____________________________________________________ \n");
    printf("|                                                    |\n");
    printf("|      Bienvenue dans le quiz de programmation!      | \n");
    printf("|____________________________________________________| \n");
    printf("Veuillez appuyer sur la touche entrée pour continuer...\n");
    getchar();

    printf("Sélectionnez un thème de quiz:\n");
    printf("1. Python\n");
    printf("2. Java\n");
    printf("3. C#\n");
    printf("4. C\n");
    printf("5. Javascript\n");

    int choice = getUserChoice();

    int size;
    QuizQuestion *questions;

    switch (choice)
    {
    case 1:
        questions = createPythonQuiz(&size);
        printf("Vous avez choisi le quiz sur Python.\n\n");
        break;
    case 2:
        questions = createJavaQuiz(&size);
        printf("Vous avez choisi le quiz sur Java.\n");
        break;
    case 3:
        questions = createCSharpQuiz(&size);
        printf("Vous avez choisi le quiz sur C#.\n");
        break;
    case 4:
        questions = createCQuiz(&size);
        printf("Vous avez choisi le quiz sur C.\n");
        break;
    case 5:
        questions = createJavaScriptQuiz(&size);
        printf("Vous avez choisi le quiz sur Javascript.\n");
        break;
    default:
        printf("Choix invalide.\n");
        return 1;
    }

    printf("Appuyez sur la touche entrée pour commencer...\n");
    getchar();

    startQuiz(questions, size);
    freeQuiz(questions, size);
    return 0;
}
