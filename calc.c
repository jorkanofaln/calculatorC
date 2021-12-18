#include<stdio.h>
#include<math.h>

/*
Author: Jorkano Faln
Description: A Simple program, which implements basic mathematical operators
License: 3 Clause BSD
*/

double add(double a, double b){
    return a + b;
}

double substract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    return a / b;
}

double powerOf(double a, double b){
    double result;
    if(b == 0){
        result = 1;
    }
    else if(b > 0){
        result = 1;
        for(int i=0;i < b;i++){
            result *= a;
        }
    }
    else{
        result = -1;
    }
    return result;
}

int main(){
    /*Define values*/
    double a,b;
    double sum;
    double difference;
    double product;
    double quotient;
    /*Assign values*/
    printf("Insert an integer:");
    scanf("%lf",&a);
    printf("Insert another integer:");
    scanf("%lf",&b);
    /*Acquire values*/
    sum = add(a,b);
    difference = substract(a,b);
    product = multiply(a,b);
    quotient = divide(a,b);
    double power = powerOf(a,b);
    /*Display values*/
    printf("%lf+%lf is equal to %lf\n",a,b,sum);
    printf("%lf-%lf is equal to %lf\n",a,b,difference);
    printf("%lf*%lf is equal to %lf\n",a,b,product);
    printf("%lf/%lf is equal to %lf\n",a,b,quotient);
    printf("%lf^%lf is equal to %lf\n",a,b,power);
    return 0;
}