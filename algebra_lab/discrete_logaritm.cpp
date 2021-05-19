#include <iostream>
#include <unordered_map>
using namespace std;

template <class T>
T Discretelogarithm(const T& degree, const T& number) //func doesent work now, should be implemented to project to functionate
{

    //int r = //prime number from project
    int n = sqrt(r) + 1;

    std::unordered_map<int, int> value;


    for (int i = n; i >= 1; --i) {
        T num(i * n);
        value[Pow(degree, num).ToInt()] = i;
    }

    for (int j = 0; j < n; ++j) {

        int cur = (Pow(degree, j).ToInt() * number.ToInt()) % r;
        if (value[cur]) {
            T ans = T(value[cur] * n - j);
            // Check whether ans lies below m or not
            if (ans < m_PrimeNumber)
                return ans;
        }
    }
    return T(-1);
}