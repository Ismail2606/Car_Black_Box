
#include <xc.h>          
#include "main.h"        

pos state;               // Holds current state of the system (state machine)

unsigned char key;       // Stores keypad key value

// Initialize all peripherals used in the project
void init_config(void) {
    init_clcd();          // Initialize LCD for display
    init_i2c();           // Initialize I2C bus
    init_ds1307();        // Initialize RTC for time/date
    init_adc();           // Initialize ADC for sensor input
    init_uart();          // Initialize UART for log download
    init_matrix_keypad(); // Initialize keypad for user input
}

void main(void) {
    init_config();        // Peripheral initialization

    while (1) {           // Super loop (runs continuously)

        // Read keypad input and detect state change
        key = read_matrix_keypad(STATE_CHANGE);

        // State machine handling different application modes
        switch (state) {

            case dashboard:
                view_dashboard();   // Show live vehicle parameters
                break;

            case main_menu:
                view_menu();        // Display menu options
                break;

            case viewlog:
                view_log();         // Display stored logs on LCD
                break;
                
            case downloadlog:
                download_log();     // Send logs via UART
                break;
                
            case clearlog:
                clear_log();        // Erase all stored logs
                break;

            case setlog:
                set_log();          // Configure time / log settings
                break;
        }
    }
}