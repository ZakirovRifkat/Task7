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
printf("������� �����:");
scanf("%d",&n);
if (n==-1) return 0 ;
else
return n+posled();

}








int main()
{   setlocale(LC_ALL,"RUS");
    printf("������� �1-���������� ������� ������� maxdig(N), ������� ������� ���������� ����� � ���������� ������ ���������������� ������ ����� N\n (������� 3 �� 5-�� �����)\n");
    printf("������� �2-���� ������������������ �����, ������������� ������ -1. ������� ����� ���� ���� �����, �� ��������� ����.\n (������� 5 �� 5-�� �����)\n");
    int p=5,a,b,c=0,s=0;
    printf("|��� ������ ������� 0|\n");
    printf("\n");

    while(p!=0) //0-������� ����������� ������ ���������
    {
        printf("�������� �������:");
        scanf("%d",&p);

       switch(p)
      {
        case 1:
            printf("������� ����� ��������������� �����(�� 9-�� ��������):");
            scanf("%d",&a);
            printf("���������� �����=%d\n",maxdig(a));
            printf("\n");
            break;
        case 2:
           printf("����� ����� �����:%d",posled());
           printf("\n");
          break;
      }

    }


    return 0;
}
