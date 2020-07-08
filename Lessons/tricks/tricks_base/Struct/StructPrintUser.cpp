// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые структура для вывода данных пользователем
// V 1.0
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

int main() {
    using namespace std;
    cout << "Enter ads shown: ";
    short aShown;
    cin >> aShown;
    cin.ignore(32767, '\n');
    cout << "Enter click through rate: ";
    int ratePercentage;
    cin >> ratePercentage;
    cin.ignore(32767, '\n');
    cout << "Total Earnings $: ";
    double averageEarnings;
    cin >> averageEarnings;
    Advertising ad = {aShown, ratePercentage, averageEarnings};
    printAdvirtising(ad);
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
