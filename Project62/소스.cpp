#include <iostream>
#include <string>

using namespace std;

void countdigit(int n)
{
    int cnt=0;

    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }

    cout << cnt;
}

void countdigit(string s)
{
    cout << s.size() << endl;
}

int main() {

    cout << "���� 12345�� �ڸ�����? " << endl;
    countdigit(12345);
    cout << "\n";
    cout << "���ڿ� \"12345\"�� �ڸ�����? " << endl;
    countdigit(12345);

    return 0;

}