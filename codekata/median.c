#include<stdio.h>
void main()

{

    int array[10];

    int i, j, num, temp;

 

   

    scanf("%d", &num);

    
    for (i = 0; i < num; i++)

    {

        scanf("%d", &array[i]);

    }

    

   

    for (i = 0; i < num; i++)

    {

        for (j = 0; j < (num - i - 1); j++)

        {

            if (array[j] > array[j + 1])

            {

                temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;

            }

        }

    }

   

    for (i = 0; i < num; i++)

    {

        printf("%d\n", array[i]);

    }
    num = (num+1) / 2 - 1;  
    

   printf("Median = %d ", array[num]);

}