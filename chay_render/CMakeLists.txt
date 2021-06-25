set(SOURCES
    app_settings.hpp
    asset.hpp
    asset_manager.cpp
    asset_manager.hpp
    camera.cpp
    camera.hpp
    component.cpp
    component.hpp
    component_manager.cpp
    component_manager.hpp
    engine.cpp
    engine.hpp
    entity.cpp
    entity.hpp
    entity_manager.cpp
    entity_manager.hpp
    forward_render.cpp
    forward_render.hpp
    mathlib.hpp
    matrix.cpp
    mesh.cpp
    mesh.hpp
    mesh_system.cpp
    mesh_system.hpp
    model.cpp
    model.hpp
    obj_loader.cpp
    obj_loader.hpp
    render.hpp
    renderable.hpp
    resource_manager.cpp
    resource_manager.hpp
    scene.cpp
    scene.hpp
    transform.cpp
    transform.hpp
)

set(SHADER_SOURCES
    shaders/common.h
    shaders/shader.frag
    shaders/shader.vert
)

source_group("shaders" FILES ${SHADER_SOURCES})

add_library(ChayRender STATIC ${SOURCES} ${SHADER_SOURCES})
target_include_directories(ChayRender PUBLIC .)
target_include_directories(ChayRender PRIVATE ${ChayEngine_SOURCE_DIR}/dependencies/tinyobjloader)
target_link_libraries(ChayRender GpuApi)
target_compile_features(ChayRender PUBLIC cxx_std_17)
