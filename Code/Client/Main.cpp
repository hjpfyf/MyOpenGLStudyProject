#include "../ThirdLibrary/glad/glad.h"
#include "../ThirdLibrary/glfw/include/GLFW/glfw3.h"
#include "../ThirdLibrary/glm/vec2.hpp"
#include "ClientLog.h"
INITIALIZE_EASYLOGGINGPP

void FrameBufferChangeSizeCallback(GLFWwindow* window, int width, int height);
void ProcessInput(GLFWwindow *window);

static const glm::ivec2 DefaultFrameBufferSize(800, 600);

int main(int argc, char* argv[])
{
	START_EASYLOGGINGPP(argc, argv);
	ELPP->addFlag(el::LoggingFlag::CreateLoggerAutomatically);

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

	GLFWwindow* window = glfwCreateWindow(DefaultFrameBufferSize.x, DefaultFrameBufferSize.y, "LearnOpenGL", NULL, NULL);
	if (window == NULL)
	{
		LBLOG(ERROR) << "Failed to create GLFW window";
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, FrameBufferChangeSizeCallback);

	// glad: load all OpenGL function pointers
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		LBLOG(ERROR) << "Failed to initialize GLAD";
		return -1;
	}

	// render loop
	while (!glfwWindowShouldClose(window))
	{
		// input
		ProcessInput(window);

		// render
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		// glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	// glfw: terminate, clearing all previously allocated GLFW resources.
	glfwTerminate();
	return 0;
}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
void ProcessInput(GLFWwindow *window)
{
	if ( glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS )
	{
		glfwSetWindowShouldClose(window, true);
	}
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
void FrameBufferChangeSizeCallback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}