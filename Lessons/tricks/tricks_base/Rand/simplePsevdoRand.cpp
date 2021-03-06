// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример вывода 100-а псевдослучайных чисел.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

unsigned int PRNG() {
    // Наше стартовое число - 4 541
    static unsigned int seed = 3984;
    // Берём стартовое число и, с его помощью, генерируем новое значение
    // Из-за использования очень больших чисел (и переполнения) угадать следующее число исходя из предыдущего - очень сложно
    seed = (8253729 * seed + 2396403);
    // Берём стартовое число и возвращаем значение в диапазоне от 0 до 32 767
    return seed % 32768;
}

int main() {
    using namespace std;
    for (int count = 0; count < 100; ++count) {
        cout << PRNG() << "\t";
        if ((count + 1) % 5 == 0) {
            cout << "\n";
        }
    }


    return 0;
}
// Output:
/*
8835    22230   14473   21404   13327
26082   29973   28072   23451   19182
18337   23988   6439    1530    12333
9152    27827   5894    11961   16332
22079   32274   17221   12760   21963
15134   28113   31204   27479   20010
11869   6128    5859    14134   1257
3068    22639   30274   29045   22024
12283   2894    29697   30228   7559
30298   3213    27680   8467    14182
15129   14380   15007   20082   32677
23096   27179   15230   23089   21060
12215   32394   19133   8272    2883
6038    20809   17500   31951   1698
28117   15976   1115    19374   8289
3700    8679    26298   26861   13440
21875   22470   18297   12428   7935
7890    15365   664     32395   15326
18065   10916   29719   12010   26397
10416   32675   30710   7593    31932
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//