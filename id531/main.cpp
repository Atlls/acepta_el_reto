#include <iostream>

using namespace std;

float get_porcentage(float omega, float subset)
{
    return subset*100/omega;
}

float rule_of_three(float alpha, float beta, float epsilon)
{
    return beta*epsilon/alpha;
}

int main()
{
    float omega_re, re_as_hu,
          omega_hu, hu_as_re,
          total_town_hu, total_town_re,
          total_dead,
          pc_hu_dead,
          total_dead_re,
          total_re_town_dead,
          total_hu_town_dead,
          total_town_dead,
          rate_hu_town_dead;


        // La mejor manera de hacer entrada Standar
        // Así evitas el Wrong Aswer del Juez
        while(cin >> omega_re)
        {
            cin >> re_as_hu;
            cin >> omega_hu;
            cin >> hu_as_re;
            cin >> total_town_hu;
            cin >> total_town_re;

            total_dead_re = omega_re - re_as_hu;
            total_re_town_dead = rule_of_three(omega_re,
                                            total_dead_re,
                                            total_town_re);
            total_hu_town_dead = rule_of_three(omega_hu,
                                               hu_as_re,
                                               total_town_hu);
            total_town_dead = total_re_town_dead + total_hu_town_dead;
            rate_hu_town_dead = get_porcentage(total_town_dead,
                                          total_hu_town_dead);

            /* Ajax
            cout << pc_hu_dead << endl;
            cout << total_dead_re << endl;
            cout << total_re_town_dead << endl;
            cout << total_hu_town_dead << endl;
            cout << rate_hu_dead << endl;
            */

            if (rate_hu_town_dead <= 10)
                cout << "APRUEBA" << endl;
            else
                cout << "SUSPENDE" << endl;
        }

    return 0;
}
