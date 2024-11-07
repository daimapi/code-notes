#include <bits/stdc++.h>

using namespace std;

int sus(int n) {
    queue<int> s;
    for (int i=1;i<=n;i++) {
        s.push(i);
    }
    cout << "Discarded cards:";
    while (s.size() > 1) {
        cout << " " <<s.front();
        if (s.size() != 2) {
            cout << ",";
        }
        s.pop();
        int temp = s.front();
        s.pop();
        s.push(temp);
    }
    cout << endl << "Remaining card: " <<  s.front() << endl;
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

