// map 선언 시에 커스텀 정렬을 넣을라면 key 정렬밖에 안된다. value까지 고려하려면 vector등에 옮기고 std::sort에서 구조체를 넣어주어야 한다.

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

struct cmp
{
    bool operator() (const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) const
    {
        if (a.second == b.second)
        {
            if (a.first.length() == b.first.length())
                return a.first < b.first;
            else
                return a.first.length() > b.first.length();
        }
        else
            return a.second > b.second;
    }
};

int main()
{
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    std::string vocaInfo;
    std::getline(std::cin, vocaInfo);

    std::istringstream iss(vocaInfo);
    int vocaCount, vocaLength;
    iss >> vocaCount >> vocaLength;

    std::map<std::string, int> vocaMap;
    for (int i = 0; i < vocaCount; i++)
    {
        std::string voca;
        std::getline(std::cin, voca);

        if (voca.length() >= vocaLength)
        {
            if (vocaMap.find(voca) == vocaMap.end())
                vocaMap[voca] = 1;
            else
                vocaMap[voca]++;
        }
    }

    std::vector<std::pair<std::string, int>> vocaVec(vocaMap.begin(), vocaMap.end());
    //std::sort(vocaVec.begin(), vocaVec.end(), cmp());
    std::sort(vocaVec.begin(), vocaVec.end(),
        [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) -> bool 
        {
            if (a.second == b.second)
            {
                if (a.first.length() == b.first.length())
                    return a.first < b.first;
                else
                    return a.first.length() > b.first.length();
            }
            else
                return a.second > b.second;
        });

    for (const auto& voca : vocaVec)
    {
        std::cout << voca.first << "\n";
    }
}