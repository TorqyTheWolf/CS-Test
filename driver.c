//-----------------------------------------------------------------------------
//  Assignment  :   PA1-FSM
//  Date        :   ********
//
//  Author      :   ********
//
//  File Name   :   driver.c
//-----------------------------------------------------------------------------
#include "statemodel.h"

extern state_t* current_state;

int main(void)
{
    event current_event;
    int key;

    printStateName();
    current_state->entry_to();

    while ((key == getchar()) != 'x')
    {
    if (key == '\n') continue;

        current_event = INVALID_EVENT;
        switch (key)
        {
            case 'O':
                current_event = ORDER_RECEIVED;
                puts("Event: ORDER_RECIEVED");
                break;
            case 'V':
                current_event = INVALID_PAYMENT;
                puts("Event: INVALID_PAYMENT");
                break;
            case 'I':
                current_event = VALID_PAYMENT;
                puts("Event: VALID_PAYMENT");
                break;
            case 'F':
                current_event = MANUFACTURE_FAILED;
                puts("Event: MANUFACTURE_FAILED");
                break;
            case 'C':
                current_event = MANUFACTURE_COMPLETED;
                puts("Event: MANUFACTURE_COMPLETED");
                break;
            case 'R':
                current_event = SHIPMENT_ARRIVED;
                puts("Event: SHIPMENT_ARRIVED");
                break;
            case 'L':
                current_event = SHIPMENT_LOST;
                puts("Event: SHIPMENT_LOST");
                break;
        }

        if (current_event != INVALID_EVENT)
            handle_event(current_event);
    }
    printf("\n");
}