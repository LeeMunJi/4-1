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

    cout << "숫자 12345의 자릿수는? " << endl;
    countdigit(12345);
    cout << "\n";
    cout << "문자열 \"12345\"의 자릿수는? " << endl;
    countdigit(12345);

    return 0;

}