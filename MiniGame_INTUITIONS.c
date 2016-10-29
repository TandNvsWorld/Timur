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
    printf("Здравствуйте! Давайте поиграем в игру 'ИНТУИЦИЯ'\n");
    printf("Правила:\n");
    printf("1)Аккуратно! У тебя есть 7 попыток!\n2)Чтобы выиграть, ты должен угадать число в промежутке от 0 до 100 включительно.");
    printf("Удачи!\nНАЧИНАЕМ!!!\n");

    N = 0 + rand()%100;
    game:
    printf("Введи число: ");
    scanf("%d",&x);
    x>N?printf("------------\nЧисло меньше\n"):printf("------------\nЧисло больше\n");
    if (x==N) {
               printf("ВЫ ВЫИГРАЛИ!!!\nЗагаданное число: %d",N);
               goto end;
              }

    else {
            printf("Попыток использовано: ");
            attempts++;
            printf("%d\n",attempts);
            if (attempts==lives) {
                                  printf("ВЫ ПРОИГРАЛИ!!!\nНачать новую игру? Y - Да N - Нет\n");
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
