#pragma once
#include "pch.h"

#include <algorithm>
#include <stdexcept>

__NamespaceOnce
template <typename VT>
concept Compable = requires
{
    std::equality_comparable<VT>;
};

template <Compable VT, VT vmin, VT vmax> requires(vmin < vmax)
class RangeValue 
{
public:
    RangeValue<VT, vmin, vmax>(){}
    RangeValue<VT, vmin, vmax> operator=(VT value)
    {
        if (vmax < value || value < vmin)
        {
            throw std::invalid_argument("Value isn't in the range");
        }
        this.value = value;
        return *this;
    }
    operator VT()
    {
        return value;
    }

private:
    VT value;
};

__NamespaceEnd