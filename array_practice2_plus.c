#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int contains(int arr[], int length, int num)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10]={0};
    int length = sizeof(arr)/sizeof(arr[0]);
    srand(time(NULL));
    for (int i = 0; i < length; )
    {
        int num = rand()%100 + 1;
        int flag =contains(arr,length,num);//1为存在，0为不存在
        if(!flag)
        {
            arr[i] =num;
            i++;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }
    double average =(double)sum/length;
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if(arr[i]>average)
        {
            count++;
        }
    }
    
    printf("The average of the array is :%.2lf\n",average);
    printf("The sum of the array is %d\n",sum);
    printf("The number of elements greater than the average is %d",count);
    
}