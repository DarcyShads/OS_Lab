#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

void main()
{
    char p[10][5], temp[5];
    int pt[10], n;
    printf("enter no of processes:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter process%d name:", i + 1);
        scanf("%s", &p[i]);
        printf("enter process time:");
        scanf("%d", &pt[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (pt[i] > pt[j])
            {
                swap(&pt[i], &pt[j]);
                strcpy(temp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp);
            }
        }
    }
    printf("\nprocess\t\tburst time\tcompletion time\n");
    int c = 0, total = 0, tot = 0;
    for (int i = 0; i < n; i++)
    {
        total += c;
        tot += c += pt[i];
        printf("%s\t\t%d\t\t%d\n", p[i], pt[i], c);
    }
    printf("\nAverage time is %.2fs", total * 1.0 / n);
    printf("\nTurn around time is %.2fs", tot * 1.0 / n);
}
