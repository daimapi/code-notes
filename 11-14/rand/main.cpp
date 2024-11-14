#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> a;
    srand(getpid());
    for (int i=n;i<=m;i++) {//n, n+1, n+2 ... m
        a.push_back(i);
    }
    for (int i=0;i<=(m-n);i++){
        int k = rand()%a.size();//0~(a.size-1)
        cout << a[k] << endl;
        a.erase(a.begin()+k);
    }
    return 0;
}
