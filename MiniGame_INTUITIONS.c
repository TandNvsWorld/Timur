#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
#define lives 7

int main()
{
    levelone:
    setlocale(LC_ALL,"Russian");
    int N = 0 + rand()%20;
    srand(time(NULL));
    char type;
    int x;
    int attempts = 0;
    printf("Привет! Давай поиграем в игру ИНТУИЦИЯ'\n");
    printf("Правила:\n");
    printf("1)Будь внимательней! У тебя всего 7 попыток!\n2)Ты должен угадать положительное число от 0 до 100.\n");
    printf("Удачи!\nСТАРТ!!!\n");

    N = 0 + rand()%100;
    game:
    printf("Введите число: ");
    scanf("%d",&x);
    x>N?printf("------------\nБольше\n"):printf("------------\nМеньше\n");
    if (x==N) {
               printf("Ты выиграл!!!\nЗагаданное число: %d",N);
               goto end;
              }

    else {
            printf("Попыток использовано: ");
            attempts++;
            printf("%d\n",attempts);
            if (attempts==lives) {
                                  printf("Вы проиграли!!!\nНачать новую игру? Y - Да N - Нет\n");
                                  printf("Ваш выбор: \n");
                                  rechoose:
                                  scanf("%s",&type);
                                  switch (type) {
                                                   case 'Y':
                                                           goto levelone;
                                                   case 'N':
                                                           goto end;
                                                   default:
                                                           printf("Неправильный ввод. Y - Да N - Нет");
                                                           goto rechoose;
                                                  }
                                 }
            else goto game;
         }
         end:
             getch();
             return 0;

}
