#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int maxdig(int n)
{
if(n<10){
        return n;
}
else if (n%10>maxdig(n/10))
    {
return n%10;
}
else {
    return (n/10);
}
}


int posled()
{
int n;
printf("Введите число:");
scanf("%d",&n);
if (n==-1) return 0 ;
else
return n+posled();

}








int main()
{   setlocale(LC_ALL,"RUS");
    printf("Задание №1-Рекурсивно описать функцию maxdig(N), которая находит наибольшую цифру в десятичной записи неотрицательного целого числа N\n (Задание 3 из 5-го таска)\n");
    printf("Задание №2-Дана последовательность чисел, завершающаяся числом -1. Найдите сумму всех этих чисел, не используя цикл.\n (Задание 5 из 5-го таска)\n");
    int p=5,a,b,c=0,s=0;
    printf("|Для выхода введите 0|\n");
    printf("\n");

    while(p!=0) //0-условие прекращения работы программы
    {
        printf("Выберите задание:");
        scanf("%d",&p);

       switch(p)
      {
        case 1:
            printf("Введите любое неотрицательное число(до 9-ти символов):");
            scanf("%d",&a);
            printf("Наибольшее число=%d\n",maxdig(a));
            printf("\n");
            break;
        case 2:
           printf("Сумма чисел равна:%d",posled());
           printf("\n");
          break;
      }

    }


    return 0;
}
