#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void BubbleSort(int *numbers)
{
     int i, j, temp;     
     for(i = 0; i < MAX; i++)
         for(j = 1; j < MAX-i; j++)
			if(numbers[j-1] > numbers[j])
			{
			    temp = numbers[j-1];
				numbers[j-1] = numbers[j];
				numbers[j] = temp;
			}  
}

int main(int argc, char *argv)
{
    int numbers[MAX];
    int i, n;    
    printf("BubbleSort - Djalmo Cruz");
    srand(time(NULL));
    for(i = 0; i < MAX; i++)
          numbers[i] = 1 + rand() % MAX;   
    printf("\n\nRandomic Numbers = ");
    for(i = 0; i < MAX; i++)
          printf("%d ", numbers[i]);
    BubbleSort(numbers); 
    printf("\n\nSorted Numbers = ");
    for(i = 0; i < MAX; i++)
          printf("%d ", numbers[i]);         
    printf("\n\n");
    system("pause");
    return 0;
}
