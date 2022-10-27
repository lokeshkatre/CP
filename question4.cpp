#include <bits/stdc++.h>
using namespace std;

float findMedian(int arr[], int arr2[], int m, int n)
{
    if (m > n)
        return findMedian(arr2, arr, n, m);

    int low = 0, high = m;
    int midPosition = (m + n + 1) / 2;

    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = midPosition - cut1;

        int a1 = (cut1 == 0) ? INT_MIN : arr[cut1 - 1];
        int b1 = (cut1 == m) ? INT_MAX : arr[cut1];
        int a2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
        int b2 = (cut2 == n) ? INT_MAX : arr2[cut2];

        if (a1 <= b2 && a2 <= b1)
        {
            if ((m + n) % 2 != 0)
                return max(a1, a2);

            else
                return (max(a1, a2) + min(b1, b2)) / 2.0;
        }
        else if (a1 > b2)
            high = cut1 - 1;
        else
            low = cut1 + 1;
    }
    return 0.0;
}
int main()
{
    int m, n;
    cin >> m >> n;
    int num1[m], num2[n];

    for (int i = 0; i < m; i++)
    {
        cin >> num1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> num2[i];
    }

    float median = findMedian(num1, num2, m, n);
    cout << "median is " << median << endl;
    return 0;
}