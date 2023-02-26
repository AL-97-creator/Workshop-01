#include <iostream>

//total count of even numbers in array

int count(int array[], int n){
    int num2=0;
    for (int i=0; i<=(n-1); i++) {
        if (array[i] % 2 == 0) {
            num2=num2+1;
        }
    }
    return num2;
}
