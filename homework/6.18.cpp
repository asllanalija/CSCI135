#include <iostream>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> res = a;
    for (int i = 0; i < b.size(); i++)
    {
        res.push_back(b.at(i));
    }
    return res;
}

std::vector<int> merge_sorted(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> sorted = append(a, b);
    for (int i = 1; i < sorted.size(); i++)
    {
        int r = sorted.at(i);
        int j = i - 1;
        while (j >= 0 && sorted.at(j) > r)
        {
            sorted.at(j+1) = sorted.at(j);
            j--;
        }
        sorted.at(j+1) = r;
    }
    return sorted;
}


int main()
{
}
