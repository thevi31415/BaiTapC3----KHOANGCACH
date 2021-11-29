
#include <iostream>
using namespace std;
void nhapmang(int a[], int n);
void khoangcach(int a[], int n);
int main()
{
    int n;
    int a[100];
    cin >> n;
    nhapmang(a, n);
    khoangcach(a, n);
}
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void khoangcach(int a[], int n) {
    int max = abs(a[0] - a[1]);
    int s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            s = abs(a[i] - a[j]);
            if (s > max)
            {
                max = s;
            }

        }
    }
    cout << max;
}