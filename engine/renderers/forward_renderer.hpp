#ifndef FORWARD_RENDER_HPP_
#define FORWARD_RENDER_HPP_

#include "render.hpp"

#include <memory>

#include "gpu_types.hpp"

class ResourceManager;

class ForwardRender : public Render
{
public:
    ForwardRender(gpu::Device& device, ResourceManager& resource_manager);
    void RenderFrame() override;

private:
    gpu::Device& device_;
    ResourceManager& resource_manager_;

};

#endif // FORWARD_RENDER_HPP_
