#ifndef _UTILS_H
#define _UTILS_H
#include "glad/glad.h" // Criação de contexto OpenGL 3.3


GLenum glCheckError_(const char *file, int line); 

#define glCheckError() glCheckError_(__FILE__, __LINE__)

#endif // _UTILS_H
