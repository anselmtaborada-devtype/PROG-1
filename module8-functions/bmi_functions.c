#include <stdio.h>
float calculateBMI(float weightKg, float heightM){

  return weightKg / (heightM * heightM);
}
int main(){

 float height, weight, BMI;

    printf("Enter your Weight(in Kg): ");
    scanf(" %f", &weight);

    printf("Enter your Height(in Meters): ");
    scanf(" %f", &height);

    BMI = weight / (height * height);

    printf("BMI: ",BMI);

    if(BMI < 18.5){
        printf("Category:Underweight");
    }
    else if(BMI < 24.9){
        printf("Category:Normal");
    }
    else if(BMI < 29.9){
        printf("Category:Overweight");
    }
    else{
        printf("Category:Obese");
    }
}
