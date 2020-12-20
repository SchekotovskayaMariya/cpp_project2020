#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);


//place your method name here
//--------------------Team Badeev---------------------------
std::vector<int> CombSortInt_Schekotovskaya(std::vector<int> mas);
std::vector<double> CombSortDouble_Schekotovskaya(std::vector<double> mas);
//---------------------------------------------------------------
//place your method name here

#pragma once
