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
    printf("������������! ������� �������� � ���� '��������'\n");
    printf("�������:\n");
    printf("1)���������! � ���� ���� 7 �������!\n2)����� ��������, �� ������ ������� ����� � ���������� �� 0 �� 100 ������������.");
    printf("�����!\n��������!!!\n");

    N = 0 + rand()%100;
    game:
    printf("����� �����: ");
    scanf("%d",&x);
    x>N?printf("------------\n����� ������\n"):printf("------------\n����� ������\n");
    if (x==N) {
               printf("�� ��������!!!\n���������� �����: %d",N);
               goto end;
              }

    else {
            printf("������� ������������: ");
            attempts++;
            printf("%d\n",attempts);
            if (attempts==lives) {
                                  printf("�� ���������!!!\n������ ����� ����? Y - �� N - ���\n");
                                  printf("��� �����: \n");
                                  rechoose:
                                  scanf("%s",&type);
                                  switch (type) {
                                                   case 'Y':
                                                           goto levelone;
                                                   case 'N':
                                                           goto end;
                                                   default:
                                                           printf("������������ ����. Y - �� N - ���");
                                                           goto rechoose;
                                                  }
                                 }
            else goto game;
         }
         end:
             getch();
             return 0;

}
