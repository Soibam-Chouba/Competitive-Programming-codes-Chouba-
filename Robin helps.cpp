#include <iostream>
#include <vector>
using namespace std;
int main()
{
     int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        int robinGold=0;
        int countGivenGold=0;

        for (int gold:a) {
            if (gold>=k) {
                robinGold+=gold;
            } else if (gold==0 && robinGold>0) {
                robinGold--;
                countGivenGold++;
            }
        }

        cout << countGivenGold << endl;
    }
    return 0;
}
