#include "lib/vector2.h"
#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    GLFWwindow* window;
    if(!glfwInit()){
        std::cerr << "Error initializing glfw" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(1280, 720, "Learn OpenGL", NULL, NULL);
    if(!window){
        std::cerr << "Error creating glfw window" << std::endl;;
    }

    Vector2 v1(-0.5f, -0.5f);
    Vector2 v2{0.0f, 0.5f};
    Vector2 v3{0.5f, -0.5f};

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)){
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
            glVertex2f(v1.x, v1.y);
            glVertex2f(v2.x, v2.y);
            glVertex2f(v3.x, v3.y);
        glEnd();
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    return 0;
}