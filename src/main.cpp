#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    GLFWwindow *window;

    if( !glfwInit())
    {
        fprintf( stderr, "Failed to initialize GLFW\n");
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Zoe", NULL,NULL);
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    while ( !glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}