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
    printf("1.������� �� ������� ��� ������������� ��������,\n ������� �� ������ ���������, �. �. � ������� ������ �������� ������ ��������� ��������.\n");
    printf("2.����� �������� ������� � ������������� ������� (�������� �����)\n");
    printf("3.�������� �������, ������������ ��� ������������� ������� �������� m � n � ������������� ������ �������� m+n \n");
    printf("|��� ������ ������� 0|\n");
    printf("\n");
    while (l!=0)
    {
    printf("�������� �������:");
    scanf("%d",&l);
    switch(l)
        {

        case 1:
        printf("\n������� ���������� ��������� � �������:");
	    scanf("%d", &q);
	    t = (int*)malloc(q * sizeof(int));
	    printf("������� �������� �������\n");
	    for (int i = 0; i < q; i++)
            {
		    scanf("%d", &t[i]);
	        }
        n1(t,q);
        printf("����� ����� ���������� ������ ������� ���:");
        for (int i = 0; i < q; i++)
            {
	        printf("%d  ", t[i]);
            }
        printf("\n\n");
        break;

        case 2:
        printf("\n������� ���������� ��������� � �������:");
	    scanf("%d", &q);
	    t = (int*)malloc(q * sizeof(int));
	    printf("������� �������� �������\n");
	    for (int i = 0; i < q; i++)
            {
		    scanf("%d", &t[i]);
	        }
	    printf("�����,��� ����� �����:");
	    scanf("%d",&k);
	    int result = sort(t,q,k,0,q-1);
	    if(result==-1)
            {
            printf("������ �������� � ������� �� ����������\n");
            }
        else
            {
            printf("������ ��������: %d\n", result);
            }
        printf("\n");
        break;

        case 3:
        printf("\n������� ���������� ��������� � ������� �1:");
	    scanf("%d", &q);
	    t = (int*)malloc(q * sizeof(int));
	    printf("������� �������� ������� �1\n");
	    for (int i = 0; i < q; i++)
            {
		    scanf("%d", &t[i]);
	        }
	    printf("\n������� ���������� ��������� � ������� �2:");
	    scanf("%d", &g);
	    h = (int*)malloc(g * sizeof(int));
	    printf("������� �������� ������� �2\n");
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
