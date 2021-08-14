#ifndef ASSET_MANAGER_HPP_
#define ASSET_MANAGER_HPP

#include "asset.hpp"

class AssetManager
{
public:
    Asset& LoadAsset(char const* path);

};

#endif // ASSET_MANAGER_HPP_
