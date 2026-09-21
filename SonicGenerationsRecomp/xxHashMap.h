#pragma once

#include <unordered_map>

struct xxHash
{
    using is_avalanching = void;

    uint64_t operator()(XXH64_hash_t const& x) const noexcept
    {
        return x;
    }
};

template<typename T>
using xxHashMap = std::unordered_map<XXH64_hash_t, T, xxHash>;
