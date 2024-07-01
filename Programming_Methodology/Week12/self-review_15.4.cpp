#include <iostream>
//#include <cmath>

using namespace std;

// 인라인 함수를 사용하여 구의 부피를 계산하는 함수
inline double sphereVolume(double radius) {
    return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}

int main() {
    // 사용자로부터 구의 반지름을 입력받음
    double radius;
    cout << "사용자가 입력한 반지름으로 구의 부피를 계산하는 프로그램입니다.\n";
    cout << "구의 반지름을 입력하세요: ";
    cin >> radius;

    // 입력된 반지름을 사용하여 구의 부피 계산
    double volume = sphereVolume(radius);

    // 계산된 부피 출력
    cout << "구의 부피: " << volume << endl;
}


