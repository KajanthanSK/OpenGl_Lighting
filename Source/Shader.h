#pragma once

#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Shader
{
public:
	Shader(const char* vertexFilePath, const char* fragmentFilePath);
private:
	std::string vertexCode, fragmentCode;
	std::ifstream vertexShaderFile, fragmentShaderFile;
	std::stringstream vertexShaderStream, fragmentShaderStream;
	const char* vertexShaderData, * fragmentShaderData;
	unsigned int vertex, fragment;

public:
	unsigned int program;

public:
	void use();
	void setBool(const std::string& name, bool value);
	void setInt(const std::string& name, int value);
	void setFloat(const std::string& name, float value);

	void setVec3(const std::string& name, float x, float y, float z);
	void setVec3(const std::string& name, glm::vec3& value);

	void setMat4(const std::string& name, glm::mat4& value);

};
