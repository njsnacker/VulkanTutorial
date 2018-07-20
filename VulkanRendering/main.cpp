#include "VulkanRenderer.hpp"
#include "Model.hpp"
#include "Light.hpp"

int main() {
    VulkanRenderer app;

    Model* cube = new Model();
    vector<glm::vec3> vtx = {
        vec3(0.5f, 0.5, 0.5f),
        vec3(-0.5f, 0.5, 0.5f),
        vec3(-0.5f, -0.5, 0.5f),
        vec3(0.5f, -0.5, 0.5f),
        vec3(0.5f, 0.5, -0.5f),
        vec3(-0.5f, 0.5, -0.5f),
        vec3(-0.5f, -0.5, -0.5f),
        vec3(0.5f, -0.5, -0.5f)
    };
    vector<glm::vec3> idx = {
        vec3(0,1,3),
        vec3(1,2,3),
        vec3(0,3,7),
        vec3(0,7,4),
        vec3(1,5,6),
        vec3(1,6,2),
        vec3(6,3,2),
        vec3(6,7,3),
        vec3(5,4,7),
        vec3(5,7,6),
        vec3(5,1,0),
        vec3(5,0,4)
    };
    cube->setVerticies(vtx);
    cube->setIndicies(idx);

    //app.addModel();
    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
