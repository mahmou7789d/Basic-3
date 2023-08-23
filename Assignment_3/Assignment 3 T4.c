// Write a program that calculates the required heater 
// activation time according to the input temperature of 
// water.
// - if input temperature is from 0 to 30, then required 
// heating time = 7 mins.
// - if input temperature is from 30 to 60, then required 
// heating time = 5 mins.
// - if input temperature is from 60 to 90, then required 
// heating time = 3 mins.
// - if input temperature is more than 90, then required 
// heating time = 1 mins.
// - if temperature is invalid (more than 100), display
// "Invalid input"



#include <stdio.h>

int main() {
    float temperature;
    int heatingTime;

    printf("Enter the water temperature: ");
    scanf("%f", &temperature);

    if (temperature >= 0 && temperature <= 30) {
        heatingTime = 7;
    } else if (temperature > 30 && temperature <= 60) {
        heatingTime = 5;
    } else if (temperature > 60 && temperature <= 90) {
        heatingTime = 3;
    } else if (temperature > 90 && temperature <= 100) {
        heatingTime = 1;
    } else {
        printf("Invalid input\n");
        return 1; // Exit the program with an error code
    }

    printf("Required heating time: %d mins\n", heatingTime);

    return 0; // Exit the program successfully
}
//-----------------------------------------------------------------------------------------


#include <stdio.h>

int main() {
    float temperature;
    int heatingTime;

    printf("Enter the water temperature: ");
    scanf("%f", &temperature);

    if (temperature >= 0 && temperature <= 100) {
        int temperatureGroup = (int)(temperature / 30); // Divide temperature into groups

        switch (temperatureGroup) {
            case 0:
                heatingTime = 7;
                break;
            case 1:
                heatingTime = 5;
                break;
            case 2:
                heatingTime = 3;
                break;
            default:
                heatingTime = 1;
                break;
        }

        printf("Required heating time: %d mins\n", heatingTime);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

//-------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int inputTemperature, heatingTime;

    printf("Enter the temperature of water: ");
    scanf("%d", &inputTemperature);

    heatingTime = (inputTemperature >= 0 && inputTemperature <= 30) ? 7 :
                  (inputTemperature > 30 && inputTemperature <= 60) ? 5 :
                  (inputTemperature > 60 && inputTemperature <= 90) ? 3 :
                  (inputTemperature > 90 && inputTemperature <= 100) ? 1 : -1;

    if (heatingTime == -1) {
        printf("Invalid input\n");
    } else {
        printf("Required heating time: %d mins\n", heatingTime);
    }

    return 0;
}

// heatingTime = (inputTemperature >= 0 && inputTemperature <= 30) ? 7 :
//               (inputTemperature > 30 && inputTemperature <= 60) ? 5 :
//               (inputTemperature > 60 && inputTemperature <= 90) ? 3 :
//               (inputTemperature > 90 && inputTemperature <= 100) ? 1 : -1;
// This is a single-line expression that uses the ternary operator ? : repeatedly to assign the appropriate value to the heatingTime variable based on the input temperature.

// (inputTemperature >= 0 && inputTemperature <= 30) ? 7 :
// This is the first condition. It checks if the inputTemperature is greater than or equal to 0 and less than or equal to 30. 
// If this condition is true, it sets heatingTime to 7. If the condition is false, it moves on to the next condition.

// (inputTemperature > 30 && inputTemperature <= 60) ? 5 :
// This is the second condition. It checks if the inputTemperature is greater than 30 and less than or equal to 60. 
// If this condition is true, it sets heatingTime to 5. If the condition is false, it moves on to the next condition.

// (inputTemperature > 60 && inputTemperature <= 90) ? 3 :
// This is the third condition. It checks if the inputTemperature is greater than 60 and less than or equal to 90. 
// If this condition is true, it sets heatingTime to 3. If the condition is false, it moves on to the next condition.

// (inputTemperature > 90 && inputTemperature <= 100) ? 1 : -1;
// This is the fourth condition. It checks if the inputTemperature is greater than 90 and less than or equal to 100. 
// If this condition is true, it sets heatingTime to 1. If the condition is false, it assigns -1 to heatingTime.

// In summary, the entire expression is like a series of nested if-else statements, each checking a specific range of the input temperature. 
// When one of the conditions is true, the corresponding value on the right of the : is assigned to heatingTime, 
// and the expression stops evaluating further conditions. If none of the conditions are true (input temperature is outside the valid range), 
// heatingTime will be assigned the value -1, indicating an invalid input.

// This compact use of the ternary operator is equivalent to writing multiple if-else statements and can be handy when you want to make 
// the code concise and readable. However, in some cases, using nested ternary operators may reduce code readability, 
// so it's essential to use them judiciously to maintain code clarity.
//-------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the water temperature: ");
    scanf("%f", &temperature);

    int heatingTime = (temperature >= 0 && temperature <= 100) 
                      ?(temperature <= 30 ? 7 : (temperature <= 60 ? 5 : (temperature <= 90 ? 3 : 1)))
                      : -1; // Invalid input flag

    if (heatingTime != -1) {
        printf("Required heating time: %d mins\n", heatingTime);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
