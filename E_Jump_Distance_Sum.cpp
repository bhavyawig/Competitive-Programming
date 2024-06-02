#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfDistances(const vector<pair<int, int>>& points) {
    int sumDistances = 0;
    int n = points.size();

    // Calculate sum of distances for x coordinates
    sort(points.begin(), points.end());
    int medianX = points[n / 2].first;
    for (const auto& p : points) {
        int dx = abs(p.first - medianX);
        sumDistances += ((dx % 2 == 0) || (dx == 0)) ? dx : 0;
    }

    // Calculate sum of distances for y coordinates
    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    int medianY = points[n / 2].second;
    for (const auto& p : points) {
        int dy = abs(p.second - medianY);
        sumDistances += ((dy % 2 == 0) || (dy == 0)) ? dy : 0;
    }

    return sumDistances;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    vector<pair<int, int>> points;
    cout << "Enter the points (x y):" << endl;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }

    int result = sumOfDistances(points);
    cout << "Sum of distances: " << result << endl;

    return 0;
}
