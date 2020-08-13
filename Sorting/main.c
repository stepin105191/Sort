#include <stdio.h>
#include <stdlib.h>
void sort(int *arr, int num)
{
    int temp;
    for(int x=0;x<num;x++)
    {
        for(int y=x+1;y<num;y++)
        {
             if(*(arr+x)>*(arr+y))
            {
                temp=*(arr+x);
                *(arr+x)=*(arr+y);
               *(arr+y)=temp;
            }
        }
    }
    printf("Sorted array : ");
    for(int x=0;x<num;x++ )
    {
        printf("%d  ", *(arr+x));
    }
}
int main()
{
    int *arr,num;
    printf("How many numbers you want in array?\n");
    scanf("%d",&num);

    arr=(int *)malloc(num*sizeof(int));

    printf("Enter Numbers\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",(arr+i));
    }
    sort( arr,num);
    return 0;
}
