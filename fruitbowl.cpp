#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
    bool operator<(const Point &p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
};

double dist(const Point &a, const Point &b) {
    return hypot(a.x - b.x, a.y - b.y);
}

double cross(const Point &O, const Point &A, const Point &B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

vector<Point> lowerHull(vector<Point> pts) {
    sort(pts.begin(), pts.end());
    vector<Point> lower;
    for (auto &p : pts) {
        while (lower.size() >= 2 && cross(lower[lower.size()-2], lower.back(), p) <= 0)
            lower.pop_back();
        lower.push_back(p);
    }
    return lower; // from leftmost to rightmost
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<Point> pts(N);
    for (int i = 0; i < N; i++) {
        cin >> pts[i].x >> pts[i].y;
    }

    // Remove duplicates
    sort(pts.begin(), pts.end());
    pts.erase(unique(pts.begin(), pts.end(), [](const Point &a, const Point &b) {
        return a.x == b.x && a.y == b.y;
    }), pts.end());

    if (pts.size() <= 1) {
        cout << 0;
        return 0;
    }

    vector<Point> lower = lowerHull(pts);

    double perimeter = 0;
    for (int i = 0; i + 1 < (int)lower.size(); i++) {
        perimeter += dist(lower[i], lower[i+1]);
    }

    cout << (int)(perimeter + 0.5) << "\n"; // round to nearest int

    return 0;
}
