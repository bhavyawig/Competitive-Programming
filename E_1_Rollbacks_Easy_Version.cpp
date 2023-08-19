#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void distinct_numbers_queries(vector<string> queries) {
    vector<unordered_set<int>> stack;
    unordered_set<int> distinct_numbers;

    for (const string& query : queries) {
        char type = query[0];
        
        if (type == '+') {
            int x = stoi(query.substr(1));
            //cout<<x<<endl;
            distinct_numbers.insert(x);
            stack.push_back(distinct_numbers);
        } else if (type == '-') {
            int k = stoi(query.substr(1));
            stack.resize(stack.size() - k);
            if(stack.empty()==false){
            unordered_set<int> prev_array = stack.back();
            distinct_numbers.clear();
                distinct_numbers=prev_array;
            }
            else
            distinct_numbers.clear();
        } else if (type == '!') {
            stack.pop_back();
            if(stack.empty()==false){
            unordered_set<int> prev_array = stack.back();
          //  stack.pop_back();
          distinct_numbers.clear();
            distinct_numbers = prev_array;}
            else
            distinct_numbers.clear();
        } else if (type == '?') {
            cout << distinct_numbers.size() << endl;
        }
    }
}

int main() {
    int q;
    cin>>q;
    vector<string> queries;
    for(int i=0;i<q;i++)
    {
        char c;
        cin>>c;
         string s;
        if(c=='+')
        {
            int y; cin>>y;
            s+='+';
            s+=to_string(y);
        }
        else if(c=='?')
        s+='?';
        else if(c=='-')
        {
            int l; cin>>l;
             s+='-';
            s+=to_string(l);
        }
        else
        s+='!';
        queries.push_back(s);
    }
   // for(const string& query:queries)
    //cout<<query<<endl;
    distinct_numbers_queries(queries);

    return 0;
}