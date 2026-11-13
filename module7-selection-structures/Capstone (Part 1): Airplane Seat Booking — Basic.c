#include <stdio.h>

int main(){

double baggageWeight, baseFare, baggageAllowance, excessWeight, excessFee, totalFare;
char travelclass;

    printf("Enter travel class (E-conomy / B-usiness): ");
    if(scanf("%c", &travelclass) !=1 || 
       (travelclass != 'E' && travelclass != 'e' && travelclass != 'B' && travelclass != 'b')){
        printf("ERROR: invalid input\n");
        return 1;
    }

    printf("Enter baggage weight (kg): ");
    if(scanf("%lf", &baggageWeight) !=0 || baggageWeight < 0){
        printf("ERROR: invalid input\n");
        return 1;
    }

    if( travelclass == 'E' || travelclass == 'e'){
        baseFare = 2500.0;
        baggageAllowance = 20.0;    
    } else if ( travelclass == 'B' || travelclass == 'b'){
        baseFare = 6500.0;
        baggageAllowance = 40.0;
    } else { 
        printf("ERROR: Invalidinput"); 
    }

    if( baggageWeight > baggageAllowance){
        excessFee = (baggageWeight - baggageAllowance) * 150.0;
    } else{
        excessFee = 0.0;
    }

    totalFare = baseFare + excessFee;
    
    printf("\n----- BOARDING SUMMARY -----\n");
    printf("Travel Class: %s\n",(travelclass == 'E' || 'e') ? "Economy" : "Business");
    printf("Base Fare: %.2f\n", baseFare);
    printf("Baggage Weight: %.2lf\n", baggageWeight);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", totalFare);
    printf("-----------------------------");

    return 0;
}#include <stdio.h>

int main(){

double baggageWeight, baseFare, baggageAllowance, excessWeight, excessFee, totalFare;
char travelclass;

    printf("Enter travel class (E-conomy / B-usiness): ");
    if(scanf("%c", &travelclass) !=1 || 
       (travelclass != 'E' && travelclass != 'e' && travelclass != 'B' && travelclass != 'b')){
        printf("ERROR: invalid input\n");
        return 1;
    }

    printf("Enter baggage weight (kg): ");
    if(scanf("%lf", &baggageWeight) !=0 || baggageWeight < 0){
        printf("ERROR: invalid input\n");
        return 1;
    }

    if( travelclass == 'E' || travelclass == 'e'){
        baseFare = 2500.0;
        baggageAllowance = 20.0;    
    } else if ( travelclass == 'B' || travelclass == 'b'){
        baseFare = 6500.0;
        baggageAllowance = 40.0;
    } else { 
        printf("ERROR: Invalidinput"); 
    }

    if( baggageWeight > baggageAllowance){
        excessFee = (baggageWeight - baggageAllowance) * 150.0;
    } else{
        excessFee = 0.0;
    }

    totalFare = baseFare + excessFee;
    
    printf("\n----- BOARDING SUMMARY -----\n");
    printf("Travel Class: %s\n",(travelclass == 'E' || 'e') ? "Economy" : "Business");
    printf("Base Fare: %.2f\n", baseFare);
    printf("Baggage Weight: %.2lf\n", baggageWeight);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", totalFare);
    printf("-----------------------------");

    return 0;
}
