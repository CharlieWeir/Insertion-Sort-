#include <stdio.h>
#include <stdlib.h>



int swap(int *array, int firstIndex, int secondIndex )
    {
        //This Function simply swaps the values stored in the first and second index
        int temp = array[firstIndex];
       // printf("Temp = %d\n", temp);

        array[firstIndex] = array[secondIndex];
        array[secondIndex] = temp;


       // printf("Test swap %d\n",array[firstIndex]);
       // printf("Test swap %d\n",array[secondIndex]);


        return 0;

    }




int main()
{
    //Insertion sort algorithm implementation
    //Use the swap function from previous projects.

    int testArray[] = {22, 11, 99, 88, 9, 7, 42};


   //Calc the length of the array

    int length = sizeof(testArray)/sizeof(testArray[0]);


     //Displays the initial unsorted list of numbers
    printf("Unsorted Array = ");
            for(int m = 0; m < length; m++)
                {
                    printf("[%d]",testArray[m]);
                }
    printf("\n");
    ///////////////////////////////////////////////



    printf("Size of array = %d\n",length);

    int sortedLength = 0;


    for(int i = 1; i<length; i++)
        {
            sortedLength = i;
            if(testArray[i] < testArray[i-1])
                {


                    while(sortedLength >= 0)
                        {

                            swap(testArray,(sortedLength-1), sortedLength);
                            sortedLength = sortedLength - 1;

                            //Should keep swapping until the all numbers in the sorted part of the array are in order.

                            //When all necessary items in the sorted list have been checked you are back at the start of the array.  cant swap outside bounds of array.
                            if(sortedLength == 0)
                                {
                                    break;
                                }
                            else if(testArray[sortedLength] > testArray[sortedLength -1])
                                {

                                    break;
                                }


                        }




                }


            printf("Array = ");
            for(int n = 0; n < length; n++)
                {
                    printf("[%d]",testArray[n]);
                }
            printf("\n");


        }



    return 0;
}
