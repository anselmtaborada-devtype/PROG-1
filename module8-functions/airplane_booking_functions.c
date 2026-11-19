#include <stdio.h>

float calculateFare(char travelClass) {
    if (travelClass == 'E' || travelClass == 'e') {
        return 2500.0;
    } else if (travelClass == 'B' || travelClass == 'b') {
        return 6500.0;
    }
    return 0.0;
}

float checkBaggage(char travelClass, float baggageWeight) {
    float baggageAllowance = 0.0;

    if (travelClass == 'E' || travelClass == 'e') {
        baggageAllowance = 20.0;
    } else if (travelClass == 'B' || travelClass == 'b') {
        baggageAllowance = 40.0;
    }

    if (baggageWeight > baggageAllowance) {
        return (baggageWeight - baggageAllowance) * 150.0;
    } else {
        return 0.0;
    }
}

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    float totalFare = baseFare + excessFee;

    printf("\n----- BOARDING SUMMARY -----\n");
    printf("Travel Class: %s\n", (travelClass == 'E' || travelClass == 'e') ? "Economy" : "Business");
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.2f kg\n", baggageWeight);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", totalFare);
    printf("-----------------------------\n");
}

int main() {
    char travelClass;
    float baggageWeight, baseFare, excessFee;

    printf("Enter travel class (E-conomy / B-usiness): ");
    if (scanf(" %c", &travelClass) != 1 || 
       (travelClass != 'E' && travelClass != 'e' && travelClass != 'B' && travelClass != 'b')) {
        printf("ERROR: invalid input\n");
        return 1;
    }

    printf("Enter baggage weight (kg): ");
    if (scanf("%f", &baggageWeight) != 1 || baggageWeight < 0) {
        printf("ERROR: invalid input\n");
        return 1;
    }

    baseFare = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, baggageWeight);
    printTicket(travelClass, baggageWeight, baseFare, excessFee);

    return 0;
}
