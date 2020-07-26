// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сопоставление букв анг.алфавита с таблицей ANCII. Цикл с вложенным условием
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    char myChar = 'a';
    int count = 1; // Для определения размера ряда
    while (myChar <= 'z') {
        cout << "#" << count << ": " << myChar << "-" << static_cast<int>(myChar) << " ";
        ++myChar;
        if (count % 3 == 0) { // Для переноса на новую строку
            cout << "\n" << endl;;
        }
        ++count;
    }
    cout << "\n";
    return 0;
}
// Output:
/*
#1: a-97 #2: b-98 #3: c-99

#4: d-100 #5: e-101 #6: f-102

#7: g-103 #8: h-104 #9: i-105

#10: j-106 #11: k-107 #12: l-108

#13: m-109 #14: n-110 #15: o-111

#16: p-112 #17: q-113 #18: r-114

#19: s-115 #20: t-116 #21: u-117

#22: v-118 #23: w-119 #24: x-120

#25: y-121 #26: z-122
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//