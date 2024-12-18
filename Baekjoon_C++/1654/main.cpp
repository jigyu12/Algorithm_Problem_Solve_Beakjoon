// std::endl보다 \n을 사용하자

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    std::string lanCableNums;
    std::getline(std::cin, lanCableNums);

    std::istringstream iss(lanCableNums);
    std::string buffer;
    std::vector<int> lanCableInfo;
    while (std::getline(iss, buffer, ' ')) 
    {
        lanCableInfo.push_back(std::stoi(buffer));
    }

    int K = lanCableInfo[0];
    int N = lanCableInfo[1];

    std::vector<long long> lanCableLengths(K);
    long long maxLength = 0;
    for (int i = 0; i < K; i++) 
    {
        std::cin >> lanCableLengths[i];
        maxLength = std::max(maxLength, lanCableLengths[i]);
    }

    long long left = 1, right = maxLength, result = 0;

    while (left <= right) 
    {
        long long mid = (left + right) / 2;
        long long count = 0;

        for (int i = 0; i < K; i++) 
        {
            count += lanCableLengths[i] / mid;
        }

        if (count >= N) 
        {
            result = mid;
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }

    std::cout << result;
}