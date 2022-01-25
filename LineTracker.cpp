// Includes

void run() {
    while (true) {
        wait(100, msec);
        if (RightTracker.sensitivity() > 50) {
            // Start LeftMotor
        } else {
            // Stop LeftMotor
        }

        if (LeftTracker.sensitivity() > 50) {
            // Start RightMotor
        } else {
            // Stop RightMotor
        }
    }
}

int main() {
    // Init Vex

    run();

    return 0;
}
