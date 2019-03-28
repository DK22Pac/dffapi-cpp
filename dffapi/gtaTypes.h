/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once

#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
#include <bitset>
#include <functional>
#include <filesystem>
#include <new>
#include <any>

using gtaByte = unsigned char;
using gtaChar = char;
using gtaWideChar = wchar_t;
using gtaUChar = unsigned char;
using gtaShort = short;
using gtaUShort = unsigned short;
using gtaInt = int;
using gtaUInt = unsigned int;
using gtaInt64 = long long int;
using gtaUInt64 = unsigned long long int;
using gtaLong = long;
using gtaULong = unsigned long;
using gtaFloat = float;
using gtaDouble = double;
using gtaBool = bool;
using gtaBool8 = unsigned char;
using gtaBool32 = unsigned int;
using gtaString = std::string;
using gtaWideString = std::wstring;
template<typename A, typename B>
using gtaPair = std::pair<A, B>;
template<typename... Types>
using gtaTuple = std::tuple<Types...>;
template<typename T, gtaUInt S>
using gtaArray = std::array<T, S>;
template<typename T>
using gtaVector = std::vector<T>;
template<typename T>
using gtaList = std::list<T>;
template<typename KeyType, typename ValueType>
using gtaMap = std::map<KeyType, ValueType>;
template<typename KeyType, typename ValueType>
using gtaMultiMap = std::multimap<KeyType, ValueType>;
template<typename T, typename Pred = std::less<T>>
using gtaSet = std::set<T>;
template<typename T>
using gtaUnorderedSet = std::unordered_set<T>;
template<typename T>
using gtaMultiSet = std::multiset<T>;
template<gtaUInt Bits>
using gtaBitSet = std::bitset<Bits>;
using gtaPath = std::filesystem::path;
template<typename FT>
using gtaFunction = std::function<FT>;
using gtaAny = std::any;
