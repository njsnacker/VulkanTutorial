#ifndef MODEL_H
#define MODEL_H
#include <glm/glm.hpp>
#include <vector>
#include <string>

using namespace std;
using namespace glm;

class Model
{
    public:
        Model();
        virtual ~Model();
        Model(const Model& other);
        Model& operator=(const Model& other);

        bool loadFile(string fileName_);
        bool setVerticies(vector<vec3> vertices_) {
            for (auto &itr : vertices_) {
                m_verticies.push_back(itr);
            }
        }

        bool setIndicies(vector<vec3> indices_) {
            for (auto &itr : indices_) {
                m_indicies.push_back(itr);
            }
        }

    protected:

    private:
        vector<vec3> m_verticies = {};
        vector<vec3> m_indicies = {};



};

#endif // MODEL_H
