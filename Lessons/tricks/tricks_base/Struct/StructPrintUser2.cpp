// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые структура для вывода данных пользователем
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

struct Advertising {
    short adsShown;
    int clickThroughRatePercentage;
    double averageEarningsPerClick;
};

void printAdvirtising(Advertising ad) {
    using namespace std;
    cout << "Number of ads shown: " << ad.adsShown << endl;
    cout << "Click through rate: " << ad.clickThroughRatePercentage << endl;
    cout << "Total Earnings: $" << (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << endl;
}

short inputUserAshown() {
    short temp;
    std::cin >> temp;
    std::cin.ignore(32767, '\n');
    return temp;
}

int inputUserPercentage() {
    int temp;
    std::cin >> temp;
    std::cin.ignore(32767, '\n');
    return temp;
}

double inputUserAverageEarnings() {
    double temp;
    std::cin >> temp;
    return temp;
}

int main() {
    using namespace std;
    cout << "Enter ads shown: ";
    short aShown = inputUserAshown();
    cout << "Enter click through rate: ";
    int ratePercentage = inputUserPercentage();
    cout << "Total Earnings $: ";
    double averageEarnings = inputUserAverageEarnings();
    Advertising ad = {aShown, ratePercentage, averageEarnings};
    printAdvirtising(ad); // Печать результата
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
