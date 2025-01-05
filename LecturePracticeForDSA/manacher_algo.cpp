#include <iostream>
#include <vector>
#include <functional>
#include<climits>

using namespace std;

class Solution {
    int timer = 0;
public:
    vector<int> manacher_odd(string s) {
        int n = s.size();
        s = "$" + s + "^";
        vector<int> p(n + 2);
        int l = 1, r = 1;
        for(int i = 1; i <= n; i++) {
            p[i] = max(0, min(r - i, p[l + (r - i)]));
            while(s[i - p[i]] == s[i + p[i]]) {
                p[i]++;
            }
            if(i + p[i] > r) {
                l = i - p[i], r = i + p[i];
            }
        }
        return vector<int>(begin(p) + 1, end(p) - 1);
    }
    
    vector<int> manacher(string s) {
        string t;
        for(auto c: s) {
            t += string("#") + c;
        }
        auto res = manacher_odd(t + "#");
        return vector<int>(begin(res) + 1, end(res) - 1);
    }
    void dfs(vector<int>adj[], int node, string &s, string &a, vector<int>&in, 
    vector<int>&out, int par=-1){
        in[node] = timer;
        for(auto i:adj[node]){
            if(i==par)continue;
            dfs(adj, i, s, a, in, out, node);
        }
        a+=s[node];
        out[node] = timer++;
    }
    vector<bool> findAnswer(vector<int>& parent, string s) {
        int n = parent.size();
        vector<int>adj[n];
        for(int i=1; i<n; i++){
            adj[parent[i]].push_back(i);
        }
        vector<bool>ans;

        vector<int>in(n, -1);
        vector<int>out(n, -1);

        string a = "";
        dfs(adj, 0, s, a, in, out); 
        vector<int>mana = manacher(a);

        for(int i=0; i<n; i++){
            int s = in[i];
            int e = out[i];
            int temp = mana[s+e]-1;
            if(temp>=(e-s+1)){
                ans.push_back(true);
            }
            else ans.push_back(false);
        }
        return ans;
    }
};
#include<set>
int main() {
    // Define the tree as an adjacency list
    // set<pair<int,int>>s;
    // s.insert({1,2});
    // s.insert({2,2});
    // s.insert({1,3});
    // s.insert({2,4});
    // s.insert({1,5});
    // s.insert({3,2});
    // s.insert({4,2});

    // for(auto it=s.rbegin(); it!=s.rend(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<LLONG_MAX<<endl;
    return 0;
}
