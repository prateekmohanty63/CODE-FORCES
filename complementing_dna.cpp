#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    cin >> dna;

    reverse(dna.begin(), dna.end());
    int n = dna.length();
    for (int i = 0; i < n; i++)
    {
        if (dna[i] == 'A')
        {
            dna[i] = 'T';
        }

        else if (dna[i] == 'T')
            dna[i] = 'A';

        else if (dna[i] == 'C')
            dna[i] = 'G';

        else if (dna[i] == 'G')
            dna[i] = 'C';
    }

    cout << dna;

    return 0;
}