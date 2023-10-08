#include <iostream>

using namespace std;

float get_porcentage(float subset, float omega)
{
    return subset*100/omega;
}

float rule_of_three(float alpha, float beta, float epsilon)
{
    return beta*epsilon/alpha;
}

int main()
{
    float x = get_porcentage(30,59.4);
    float omega_re, re_as_hu,
          omega_hu, hu_as_re,
          total_hu, total_re,
          total_dead;

    cin >> omega_re;
    cin >> re_as_hu;
    cin >> omega_hu;
    cin >> hu_as_re;
    cin >> total_hu;
    cin >> total_re;

    total_dead = omega_re - re_as_hu + hu_as_re;

    cout << total_dead << endl;
    return 0;
}
