#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
    int first, N, K, temp;
    cin >> first >> N >> K;
    int addr[100005], data[100005], list[100005];
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        cin >> data[temp] >> list[temp];
    }

    int sum = 0;
    while (first != -1)
    {
        addr[sum] = first;
        first = list[first];
        sum += 1;
    }

    for (int i = 0; i < (sum - sum % K); i += K)
    {
        reverse(begin(addr) + i, begin(addr) + i + K);
    }

    for (int i = 0; i < sum - 1; i++)
    {
        printf("%05d %d %05d\n", addr[i], data[addr[i]], addr[i + 1]);
    }
    printf("%05d %d -1", addr[sum - 1], data[addr[sum - 1]]);
    return 0;
}