/*Implement the following functions and calculate standard deviation of an array whose values 
come from the terminal- 
TakeInput() 
CalcMean(array, num_of_elem) 
Calc_Std_deviation(array, num_of_elem)*/

#include <stdio.h>
#include <math.h>

void TakeInput(double array[], int num_of_elem) {
    printf("Enter %d elements:\n", num_of_elem);
    for (int i = 0; i < num_of_elem; i++) {
        scanf("%lf", &array[i]);
    }
}

double CalcMean(double array[], int num_of_elem) {
    double sum = 0.0;
    for (int i = 0; i < num_of_elem; i++) {
        sum += array[i];
    }
    return sum / num_of_elem;
}

double Calc_Std_deviation(double array[], int num_of_elem) {
    double mean = CalcMean(array, num_of_elem);
    double sum_deviation = 0.0;
    for (int i = 0; i < num_of_elem; i++) {
        sum_deviation += pow(array[i] - mean, 2);
    }
    return sqrt(sum_deviation / num_of_elem);
}

int main() {
    int num_of_elem;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num_of_elem);

    double array[num_of_elem];
    TakeInput(array, num_of_elem);

    double mean = CalcMean(array, num_of_elem);
    double std_deviation = Calc_Std_deviation(array, num_of_elem);

    printf("Mean: %lf\n", mean);
    printf("Standard Deviation: %lf\n", std_deviation);

    return 0;
}
