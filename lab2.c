#include<stdio.h>
#include<unistd.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d",&n);
    int arr[n];
    printf("array = ");
    for(int i=0 ; i<n ; ++i)
        scanf("%d",&arr[i]);
    int pid=fork();
    if(pid==0)
    {
        int sum=0;
        for(int i=0 ; i<n ; ++i)
            if(arr[i]%2==0)
                sum+=arr[i];
        printf("Sum of even = %d\n",sum);
    }
    else
    {
        int sum=0;
        for(int i=0 ; i<n ; ++i)
            if(arr[i]%2!=0)
                sum+=arr[i];
        printf("Sum of odd = %d\n",sum);
    }
    return 0;
}