#include <iostream>
#include <vector>
#define vcc vector
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int Ngsgdhsg, Qvtgcds;
        cin >> Ngsgdhsg >> Qvtgcds;
        vcc<int> avghsc(Ngsgdhsg);
        for (int i = 0; i < Ngsgdhsg; i++)
            cin >> avghsc[i];
        while (Qvtgcds--)
        {
            int a1, b;
            cin >> a1 >> b;
            avghsc[a1 - 1] = b;
            int MAXxvshcvgsvcg = 0;
            for (int j = 0; j < Ngsgdhsg - 1; j++)
                if (avghsc[j] > avghsc[j + 1])
                    MAXxvshcvgsvcg = max(MAXxvshcvgsvcg, abs(avghsc[j] - avghsc[j + 1]));

            cout << MAXxvshcvgsvcg<< endl;
        }
    }
    return 0;
}