#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

GLFWwindow* window;
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void initializeGraphics();



int main(){
    initializeGraphics();
    std::cout << "Complete\n";
    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}




void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void initializeGraphics(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    window = glfwCreateWindow(400, 400, "Hello World!!", nullptr, nullptr);
    glfwMakeContextCurrent(window);

    gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);

    glViewport(0, 0, 400, 400);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
}