#ifndef ASSET_HPP_
#define ASSET_HPP_

// Asset interface
class Asset
{
public:
    enum class Type
    {
        kScene,
        kModel,
        kTexture,
        kMaterial
    };

    Asset(Type asset_type) : asset_type_(asset_type) {}
    Type GetType() const { return asset_type_; }

    template <class T>
    T& Cast() const { return dynamic_cast<T&>(*this); }

private:
    Type asset_type_;

};

#endif // ASSET_HPP_
