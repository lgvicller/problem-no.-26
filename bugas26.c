#include <stdio.h>
int main (){

    char name [50];
    float consumption, bill;

    printf("Enter Customer Name: ");
    scanf("%[^\n]", name);

    printf("Enter Electricity Consumption (kWh): ");
    scanf("%f", &consumption);

    if (consumption < 0) {
        printf("Invalid Consumption. Negatives are not allowed.\n");
    }else if (consumption <= 100) {
        bill = consumption * 8;
    }else if (consumption <= 200) {
        bill = (100 * 8) + ((consumption - 100) * 10);
    }else{
        bill = (100 * 8) + (100 * 10) + ((consumption - 200) * 12);
    }
    
    printf("\nclCustomer Name: %s\n", name);
    printf("Consumption: %.2f kWh \n", consumption);
    printf("Total Bill: %.2f PHP", bill);

return 0;
}

