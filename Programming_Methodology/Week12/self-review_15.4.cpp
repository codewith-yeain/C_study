#include <iostream>
//#include <cmath>

using namespace std;

// �ζ��� �Լ��� ����Ͽ� ���� ���Ǹ� ����ϴ� �Լ�
inline double sphereVolume(double radius) {
    return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}

int main() {
    // ����ڷκ��� ���� �������� �Է¹���
    double radius;
    cout << "����ڰ� �Է��� ���������� ���� ���Ǹ� ����ϴ� ���α׷��Դϴ�.\n";
    cout << "���� �������� �Է��ϼ���: ";
    cin >> radius;

    // �Էµ� �������� ����Ͽ� ���� ���� ���
    double volume = sphereVolume(radius);

    // ���� ���� ���
    cout << "���� ����: " << volume << endl;
}


