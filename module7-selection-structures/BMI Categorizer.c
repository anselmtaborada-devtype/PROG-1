#include <stdio.h>
float findbmi(float weight, float height) {
   float BMI;
    if(BMI < 18.5){
        printf("Category:Underweight\n");
    }
    else if(BMI < 24.9){
        printf("Category:Normal\n");
    }
    else if(BMI < 29.9){
        printf("Category:Overweight\n");
    }
    else{
        printf("Category:Obese\n");
    }
    return weight / (height * height);
}
int main(){

 float height, weight, BMI;

    printf("Enter your Weight(in Kg): ");
    scanf(" %f", &weight);

    printf("Enter your Height(in Meters): ");
    scanf(" %f", &height);

    BMI = findbmi(weight, height);

    printf("BMI:%.2f\n ",BMI);

   return 0;
}
