// map ���� �ÿ� Ŀ���� ������ ������� key ���Ĺۿ� �ȵȴ�. value���� ����Ϸ��� vector� �ű�� std::sort���� ����ü�� �־��־�� �Ѵ�.

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