//
// Created by g on 10/2/17.
//
#include <vector>
#include "GLFW/glfw3.h"
#include <string>

#ifndef STARTER01_GL_RENDERER_H
#define STARTER01_GL_RENDERER_H


class GL_Renderer {
public:
    GLFWwindow *window;
    int shaderProgram;
    int VAO;
    float vertices[];
    const float CLEAR_COLOR[4] = {0.2f, 0.3f, 0.3f, 1.0f};

    void setup(bool isFullScreen = false);
    void render();
    static void framebufferSizeCallback(GLFWwindow *window, int width, int height);
    void processInput(GLFWwindow *window);
    int buildShaderProgram();
    int createGeo();

    std::string readFile(const char *filePath);
};


#endif //STARTER01_GL_RENDERER_H
