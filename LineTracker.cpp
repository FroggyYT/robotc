// Includes

void run() {
    while (true) {
        wait(100, msec);

        bool leftTracking = LeftTracker.sensitivity() > 50;
        bool rightTracking = RightTracker.sensitivity() > 50;

        bool leftMotor = rightTracking;
        bool rightMotor = leftTracking;

        if (leftMotor) {
            // Start LeftMotor
        } else {
            // Stop LeftMotor
        }

        if (rightMotor) {
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
