#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool checkBoxDimensions(const vector<tuple<int, int, int>>& boxes) {
    vector<tuple<int, int, int>> boxDimensions;
    for (const auto& box : boxes) {
        int h, w, d;
        tie(h, w, d) = box;
        boxDimensions.push_back(make_tuple(min(h, min(w, d)), max(min(h, w), min(max(h, w), d)), max(h, max(w, d))));
    }

      sort(boxDimensions.begin(), boxDimensions.end(), [](const auto& a, const auto& b) {
        return get<0>(a) < get<0>(b);
    });
    int f=boxDimensions.size()-1;
        if (get<0>(boxDimensions[0]) > get<0>(boxDimensions[f]) &&
            get<1>(boxDimensions[0]) > get<1>(boxDimensions[f]) &&
            get<2>(boxDimensions[0]) > get<2>(boxDimensions[f])) {
            return true;
        }

        sort(boxDimensions.begin(), boxDimensions.end(), [](const auto& a, const auto& b) {
        return get<1>(a) < get<1>(b);
    });

        if (get<0>(boxDimensions[0]) > get<0>(boxDimensions[f]) &&
            get<1>(boxDimensions[0]) > get<1>(boxDimensions[f]) &&
            get<2>(boxDimensions[0]) > get<2>(boxDimensions[f])) {
            return true;
        }

        sort(boxDimensions.begin(), boxDimensions.end(), [](const auto& a, const auto& b) {
        return get<2>(a) < get<2>(b);
    });

        if (get<0>(boxDimensions[0]) > get<0>(boxDimensions[f]) &&
            get<1>(boxDimensions[0]) > get<1>(boxDimensions[f]) &&
            get<2>(boxDimensions[0]) > get<2>(boxDimensions[f])) {
            return true;
        }

    return false;
}

int main()
{
   lli n;
   cin>>n;
       vector<tuple<int, int, int>> boxes;
   for(lli i=0;i<n;i++)
   {
       lli h,w,d;
       cin>>h>>w>>d;
        boxes.push_back(make_tuple(h, w, d));
   }
    bool result = checkBoxDimensions(boxes);
    if(result==true) cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}
