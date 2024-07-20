#include <stdio.h>
#include <stdlib.h>

#define MAX_FLOOR 10
#define MIN_FLOOR 1

// Function to initialize the lift
void initializeLift(int *currentFloor, int *passengers) {
    *currentFloor = MIN_FLOOR;
    *passengers = 0;
}

// Function to move the lift to a specific floor
void moveToFloor(int *currentFloor, int requestedFloor) {
    while (*currentFloor != requestedFloor) {
        if (*currentFloor < requestedFloor) {
            moveUp(currentFloor);
        } else {
            moveDown(currentFloor);
        }
    }
}

// Function to handle passenger requests
void handleRequests(int *currentFloor, int *passengers) {
    int requestedFloor;

    printf("Enter the desired floor (or 0 to exit): ");
    scanf("%d", &requestedFloor);

    if (requestedFloor == 0) {
        printf("Exiting the lift...\n");
        *passengers = 0;
        return;
    }

    if (isValidFloor(requestedFloor)) {
        moveToFloor(currentFloor, requestedFloor);
        printf("Arrived at floor %d\n", requestedFloor);

        if (*passengers < MAX_PASSENGERS) {
            printf("Enter the number of passengers exiting: ");
            scanf("%d", &requestedFloor);

            *passengers -= requestedFloor;
        }
    } else {
        printf("Invalid floor: %d\n", requestedFloor);
    }
}

int main() {
    srand(time(NULL));

    int currentFloor = MIN_FLOOR;
    int passengers = 0;

    initializeLift(&currentFloor, &passengers);

    while (passengers > 0) {
        handleRequests(&currentFloor, &passengers);
    }

    printf("The lift is now empty.\n");

    return 0;
}
