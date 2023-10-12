#include <iostream>
using namespace std;

void answer(float P1, float P2, float P3, float P4);

int main()
{
    float P1, P2, P3, P4;
    cout << "Enter the volume of pool in litre: ";
    cin >> P1;
    cout << "Enter flow rate of first pipe: ";
    cin >> P2;
    cout << "Enter flow rate of second pipe: ";
    cin >> P3;
    cout << "Enter time worker is absent in hour: ";
    cin >> P4;
    answer(P1, P2, P3, P4);
}

void answer(float P1, float P2, float P3, float P4)
{
    float calculation1 = P2 * P4 + P3 * P4;
    string result;

    if (calculation1 < P1)
    {
        float cal1 = (calculation1 * 100) / P1;
        float cal2 = (P2 * P4 * 100) / calculation1;
        float cal3 = (P3 * P4 * 100) / calculation1;
        cout << "Pipe 1 " << cal2 << "%" << endl;
        cout << "Pipe 2 " << cal3 << "%" << endl;
    }

    if (calculation1 > P1)
    {
        float result1 = calculation1 - P1;
    }

}