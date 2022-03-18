#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int no_songs;
        cin >> no_songs;

        vector<int> song_original_permutation;

        for (int i = 0; i < no_songs; i++)
        {
            int a;
            cin >> a;
            song_original_permutation.push_back(a);
        }

        string monocrap_feedback;
        cin >> monocrap_feedback;
    }
    return 0;
}