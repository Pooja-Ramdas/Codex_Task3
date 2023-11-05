#include <iostream>

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    // Implement a function that calculates and returns the
    // number of days remaining in the week using the Days enum.
    // Write the function definition here.
    return 6 - today;
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    std::cout << "Days remaining in the week: " << daysRemaining << std::endl;
    return 0;
}
