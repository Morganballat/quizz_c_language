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

    printf("Bienvenue dans notre quiz!\n");

    printf("Appuyez sur une touche pour commencer...\n");
    getchar();

    int size;
    QuizQuestion *questions = createQuiz(&size);
    startQuiz(questions, size);
    freeQuiz(questions, size);
    return 0;
}
