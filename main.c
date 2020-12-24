#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void n1 (int t[],int q)
{
for (int i = 0; i < q; i++)
    {
		for (int b = 0; b < i; b++)
		{
			if (t[b] == t[i] && b != i)
			{
				t[i] = 0;
			}
		}
	}

	for (int i = 1; i < q; i++)
	{
		for (int m = 1; m < q; m++)
		{
			if (t[m] != 0 && t[m - 1] == 0)
			{
				t[m - 1] = t[m];
				t[m] = 0;
			}
		}
	}

}
int sort(int a[], int n, int key, int low, int high)
{
int mid=(low+high)/2;

if (low>high)
    {
    return -1;
    }

    if (key<a[mid])
        {
        return sort(a,n,key, low, mid-1);
        }

    else if ((key>a[mid]))
        {
        return sort(a, n, key, mid+1,high);
        }

else
    {
    return mid;
    }
}
void sum(int a,int b,int t[],int h[],int v[])
{
    for(int i=0;i<a;i++)
    {
    v[i]=t[i];
    }
    for(int i=0;i<b;i++)
    {
     v[i+a]=h[i];
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int l=5,q,*t,k,g,*h,*v;
    printf("1.Удалить из массива все повторяющиеся элементы,\n оставив их первые вхождения, т. е. в массиве должны остаться только различные элементы.\n");
    printf("2.Найти заданный элемент в упорядоченном массиве (бинарный поиск)\n");
    printf("3.Написать функцию, объединяющую два упорядоченных массива размером m и n в упорядоченный массив размером m+n \n");
    printf("|Для выхода введите 0|\n");
    printf("\n");
    while (l!=0)
    {
    printf("Выберите задание:");
    scanf("%d",&l);
    switch(l)
        {

        case 1:
        printf("\nВведите количество элементов в массиве:");
	    scanf("%d", &q);
	    t = (int*)malloc(q * sizeof(int));
	    printf("Введите элементы массива\n");
	    for (int i = 0; i < q; i++)
            {
		    scanf("%d", &t[i]);
	        }
        n1(t,q);
        printf("после учёта повторений массив приобрёл вид:");
        for (int i = 0; i < q; i++)
            {
	        printf("%d  ", t[i]);
            }
        printf("\n\n");
        break;

        case 2:
        printf("\nВведите количество элементов в массиве:");
	    scanf("%d", &q);
	    t = (int*)malloc(q * sizeof(int));
	    printf("Введите элементы массива\n");
	    for (int i = 0; i < q; i++)
            {
		    scanf("%d", &t[i]);
	        }
	    printf("Число,что хотим найти:");
	    scanf("%d",&k);
	    int result = sort(t,q,k,0,q-1);
	    if(result==-1)
            {
            printf("Такого элемента в массиве не существует\n");
            }
        else
            {
            printf("Индекс элемента: %d\n", result);
            }
        printf("\n");
        break;

        case 3:
        printf("\nВведите количество элементов в массиве №1:");
	    scanf("%d", &q);
	    t = (int*)malloc(q * sizeof(int));
	    printf("Введите элементы массива №1\n");
	    for (int i = 0; i < q; i++)
            {
		    scanf("%d", &t[i]);
	        }
	    printf("\nВведите количество элементов в массиве №2:");
	    scanf("%d", &g);
	    h = (int*)malloc(g * sizeof(int));
	    printf("Введите элементы массива №2\n");
	    for (int i = 0; i < g; i++)
            {
		    scanf("%d", &h[i]);
	        }
	    v = (int*)malloc((q+g) * sizeof(int));
	    sum(q,g,t,h,v);
        for(int i = 0; i < (q + g); i++)
            {
  	        printf(" %d", v[i]);
            }
        printf("\n\n");
	    break;
        }
    }
    return 0;
}
