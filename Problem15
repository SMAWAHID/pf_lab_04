#include <stdio.h>

int main() {
	
    char snack1, snack2, snack3, snack4;
    int qty_1, qty_2, qty_3, qty_4, item_type, total = 0, totalBurgers = 0, totalFries = 0, totalSandwiches = 0, totalPizzas = 0;

    printf("Please select from the following Menu:\na. B = Burger (Rs. 200)\nb. F = French Fries (Rs. 50)\nc. P = Pizza (Rs. 500)\nd. S = Sandwiches (Rs. 150)\n");

    
    printf("How many types of snacks you need to order: ");
    scanf("%d", &item_type);


    if (item_type < 1 || item_type > 4) {
        printf("Invalid number of snack types.\n");
        return 1;
    }

    printf("Enter first snack for your order: ");
    scanf(" %c", &snack1);
    printf("Please provide quantity: ");
    scanf("%d", &qty_1);

    switch (snack1) {
        case 'B':
        	totalBurgers += qty_1;
            total += 200 * qty_1;
            break;
        case 'F':
        	totalFries += qty_1;
            total += 50 * qty_1;
            break;
        case 'P':
        	totalPizzas += qty_1;
            total += 500 * qty_1;
            break;
        case 'S':
        	totalSandwiches += qty_1;
            total += 150 * qty_1;
            break;
        default:
            printf("Invalid choice for snack 1.\n");
            return 2;
	}

    if (item_type >= 2) {
        printf("Enter second snack for your order: ");
        scanf(" %c", &snack2);
        printf("Please provide quantity: ");
        scanf("%d", &qty_2);

        switch (snack2) {
            case 'B':
            	totalBurgers += qty_2;
                total += 200 * qty_2;
                break;
            case 'F':
            	totalFries += qty_2;
                total += 50 * qty_2;
                break;
            case 'P':
            	totalPizzas += qty_2;
                total += 500 * qty_2;
                break;
            case 'S':
            	totalSandwiches += qty_2;
                total += 150 * qty_2;
                break;
            default:
                printf("Invalid choice for snack 2.\n");
                return 3;
		}
   		}

    if (item_type >= 3) {
        printf("Enter third snack for your order: ");
        scanf(" %c", &snack3);
        printf("Please provide quantity: ");
        scanf("%d", &qty_3);

        switch (snack3) {
            case 'B':
            	totalBurgers += qty_3;
                total += 200 * qty_3;
                break;
            case 'F':
            	totalFries += qty_3;
                total += 50 * qty_3;
                break;
            case 'P':
            	totalPizzas += qty_3;
                total += 500 * qty_3;
                break;
            case 'S':
            	totalSandwiches += qty_3;
                total += 150 * qty_3;
                break;
            default:
                printf("Invalid choice for snack 3.\n");
                return 4;
		}
		}

    if (item_type == 4) {
        printf("Enter fourth snack for your order: ");
        scanf(" %c", &snack4);
        printf("Please provide quantity: ");
        scanf("%d", &qty_4);

        switch (snack4) {
            case 'B':
            	totalBurgers += qty_4;
                total += 200 * qty_4;
                break;
            case 'F':
            	totalFries += qty_4;
                total += 50 * qty_4;
                break;
            case 'P':
            	totalPizzas += qty_4;
                total += 500 * qty_4;
                break;
            case 'S':
            	totalSandwiches += qty_4;
                total += 150 * qty_4;
                break;
            default:
                printf("Invalid choice for snack 4.\n");
                return 5;
       		}
    		}
	
		if (total_burgers > 0){
    		printf("%d Burger(s) value %d PKR\n", totalBurgers, totalBurgers * 200);
		}
		if (total_fries > 0){
		    printf("%d French Fries value %d PKR\n", totalFries, totalFries * 50);
		}
		if (total_pizzas > 0){
		    printf("%d Pizza(s) value %d PKR\n", totalPizzas, totalPizzas * 500);
		}
		if (total_sandwiches > 0){
		    printf("%d Sandwich(es) value %d PKR\n", totalSandwiches, totalSandwiches * 150);
		}
    
    printf("Total charges for your order: Rs. %d\n", total);
    return 0;
}

   


