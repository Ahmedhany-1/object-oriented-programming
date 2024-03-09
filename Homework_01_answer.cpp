#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int mul(int x, int y) {
    return x * y;
}

double mul(double x, double y) {
    return x * y;
}

Point mul(Point p1, Point p2) {
    Point ans{};
    ans.x = p1.x * p2.x;
    ans.y = p1.y * p2.y;
    return ans;
}

int main() {
    int x, y;
    cout << "Enter the integer value x and y....: \n";
    cin >> x >> y;
    cout << "Output Version Integer From Function..: " << mul(x, y);
    cout << "\n--------------------------------------------------\n";

    cout << "Enter the integer value x and y....: \n";
    double a, b;
    cin >> a >> b;
    cout << "Output Version Double From Function..: " << mul(a, b);
    cout << "\n---------------------------------------------------\n";

    Point p1{1, 2};
    Point p2{};
    cout << "Enter the value x and y for the struct (p2)....: \n";
    cin >> p2.x >> p2.y;
    Point k = mul(p1, p2);
    cout << "\nOutput Version Struct From Function..: "<< k.x << " , " << k.y;
    cout << "\n---------------------------------------------------\n";
}