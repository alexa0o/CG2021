#ifndef CONTROLS_HPP
#define CONTROLS_HPP

#include <utility>

void computeMatricesFromInputs();
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();
glm::vec3 getForward();
glm::vec3 getPosition();
void setPosition(glm::vec3 position);
void setForward(glm::vec3 forward);
void setAngels(float a, float b);
std::pair<float, float> getAngels();


#endif