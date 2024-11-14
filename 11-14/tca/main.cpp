#include <bits/stdc++.h>

using namespace std;

int sus(int n) {
    vector<int> a;
    for (int i=1;i<=n;i++) {
        a.push_back(i);
    }
    cout << "Discarded cards:";
    while (a.size() > 1) {
        cout << " " <<a[0];
        if (a.size() != 2) {
            cout << ",";
        }
        //cout << a.size();
        a.push_back(a[1]);
        //cout << a.size();
        a.erase(a.begin()+0,a.begin()+2);
        //cout << a.size();
    }
    cout << endl << "Remaining card: " <<  a[0] << endl;
}

int main()
{
    int n;
    vector<int> num;
    cin>>n;
    while(n!=0) {
        num.push_back(n);
        cin>>n;
    }
    for (int i=0;i<num.size();i++) {
        sus(num[i]);
    }
    return 0;
}

