#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void add(vector<int>& BIT, int idx, int val){
    idx += 1;
    while(idx < BIT.size()){
        BIT[idx] += val;
        idx += idx & -idx;
    }
}
int query(vector<int>& BIT, int idx){
    idx += 1;
    int sum = 0;
    while(idx){
        sum += BIT[idx];
        // idx &= idx - 1;
        idx -= idx & (-idx);
    }
    return sum;
} 

bool check(int mid, vector<int> a, int n, int k) {
    vector<int> BIT(n + 2, 0);
    int inversions = 0, count = 1;
    int last = 0;
     for (int i = 0; i < n; i++) {
        cout<<"i, inversion, count, last : "<<i<<" "<<inversions<<" "<<count<<" "<<last<<" \n";
        add(BIT, a[i], 1);
        int x;
        cout<<"Enter 1 for checking add(BIT, a[i], 1) : ";
        cin>>x;
        for(auto k: BIT){
            cout<<k<<" ";
        }cout<<"***"<<endl;
        cout<<"query(BIT, a[i]) : "<<query(BIT, a[i])<<endl;
        int inv = (i - last) - query(BIT, a[i]) + 1;
        int y;
        cout<<"Enter 2 for inv ";
        cin>>y;
        cout<<"inv is : "<<inv<<endl;
        if (inversions + inv > mid) {
            inversions = 0;
            count++;
            for (int j = last; j < i; j++) {
                int z;
                cout<<"Enter 3 for checking add(BIT, a[j], -1) : ";
                cin>>z;
                add(BIT, a[j], -1);
                    for(auto k: BIT){
                        cout<<k<<" ";
                    }cout<<"###"<<endl;
                }
            last = i;
        }
        else {
            inversions += inv;
            // cout<<"inversions += inv; : "<<inversions<<endl;
        }
    }
    cout<<"(count > k) : "<<count<<" > "<<k<<endl;
    if (count > k) {
        return false;
    } 
    return true;
}

int minimumUgliness(int n, int k, vector<int> a){
    vector<int> b = a;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;
    }
    long long l = 0, r = n * (n + 1);
    int answer = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        cout<<"\n\n***mid*** : "<<mid<<" : ***mid***"<<"\n\n";
        if (check(mid, a, n, k)) {
            r = mid - 1;
            answer = mid;
        }
        else {
            l = mid + 1;
        }
        cout<<"\nl, r, answer : "<<l<<" "<<r<<" "<<answer<<" \n";
    }
    return answer;
}
int main(){
    vector<int>arr={6,5,3};
    int n=arr.size();
    int k=2;

    cout<<"\n\nFinal answer is : "<<minimumUgliness(n,k,arr)<<endl;
    
return 0;
}