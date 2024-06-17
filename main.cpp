#include <iostream>
#include <map>

template <typename T1,typename T2>
std::pair<T1,T2> make_pair(T1 obj1,T2 obj2)
{
    return std::pair<T1,T2>(obj1,obj2);;
}


int main()
{
    std::map<int, std::string> _map;

    _map.insert(make_pair(10,"s"));
    std::cout<<_map.at(10);
    
    return 0;
}