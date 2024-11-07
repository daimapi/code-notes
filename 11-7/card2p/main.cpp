#include <bits/stdc++.h>

using namespace std;

int sus(int n) {
    int i = 0;
    while(true){
        if (i*(i+1)*(2*i+1)/6 >= n) break;
        else i++;
    }
    int ans = (i*(i+1)*(2*i+1)/6 - n);
    cout<<ans<<endl;
}

int main()
{
    /*int n;
    vector<int> num;
    cin>>n;
    while(n!=0) {
        num.push_back(n);
        cin>>n;
    }*/
    int num[100];
    for (int i=0;i<100;i++) {
        num[i] = i+1;
    }
    for (int i=0;i<100;i++) {
        sus(num[i]);
    }
    return 0;
}

