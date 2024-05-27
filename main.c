#include <stdio.h>
#include "quiz.h"

void display_ascii() {
    printf(" ________              ___________      .__      .__        \n");
    printf(" \\______ \\   _______  _\\__    __/_______|__|__  _|__|____   \n");
    printf("  |   |  \\_/ __ \\  \\/ /  |    |  \\_  __ \\  \\  \\/ /  \\__  \\  \n");
    printf("  |   `   \\  ___/\\   /   |    |   |  | \\/  |\\   /|  |/ __ \\_\n");
    printf(" /______  /\\___  >\\_/    |____|   |__|  |__| \\_/ |__(____  /\\ \n");

    printf("_____________________________________________________________________\n");
    printf("\n");
}

int main() {
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
    printf("Choix: ");
    
    int choice;
    scanf("%d", &choice);

    int size;
    QuizQuestion *questions;

    switch (choice) {
        case 1:
            questions = createPythonQuiz(&size);
            break;
        case 2:
            questions = createJavaQuiz(&size);
            break;
        case 3:
            questions = createCSharpQuiz(&size);
            break;
        case 4:
            questions = createCQuiz(&size);
            break;
        case 5:
            questions = createJavaScriptQuiz(&size);
            break;
        default:
            printf("Choix invalide.\n");
            return 1;
    }

    printf("Appuyez sur la touche entrée pour commencer...\n");
    getchar(); // Pour capturer le '\n' laissé par scanf
    getchar(); // Pour attendre que l'utilisateur appuie sur une touche

    startQuiz(questions, size);
    freeQuiz(questions, size);
    return 0;
}
