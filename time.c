#include <stdio.h>
#include <unistd.h>

int main() {
    int seconds=120;
    while (seconds>=0) {
        printf("Temps restant :%d",seconds);
        fflush(stdout);
        sleep(1);
        seconds--;
        system("cls");
    }
    printf("Fin du temps !");
    return 0;
}
