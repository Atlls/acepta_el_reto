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
    cout << x << endl;
    return 0;
}
