#include "GL.h"

#include "Core/Console/Console.h"

/*
 * Viewport
*/

void GL::Viewport(GLint x,  GLint y,  GLsizei width,  GLsizei height)
{
	glViewport(x, y, width, height); 

	ErrorCheck ("glViewport");
}

/*
 * Frame Buffer
*/

void GL::Clear(GLbitfield  mask)
{
	glClear (mask);

	ErrorCheck ("glClear");
}

void GL::ClearColor(GLclampf red,  GLclampf green,  GLclampf blue,  GLclampf alpha)
{
	glClearColor(red, green, blue, alpha);

	ErrorCheck ("glClearColor");
} 

void GL::FramebufferTexture2D(GLenum target,  GLenum attachment,  GLenum textarget,  GLuint texture,  GLint level)
{
	glFramebufferTexture2D (target, attachment, textarget, texture, level);

	ErrorCheck ("glFramebufferTexture2D");
}

void GL::DrawBuffer(GLenum buf)
{
	glDrawBuffer (buf);

	ErrorCheck ("glDrawBuffer");
}

void GL::DrawBuffers(GLsizei n, const GLenum *bufs)
{
	glDrawBuffers (n, bufs);

	ErrorCheck ("glDrawBuffers");
}

void GL::ReadBuffer(GLenum mode)
{
	glReadBuffer (mode);

	ErrorCheck ("glReadBuffer");
}

void GL::BindFramebuffer(GLenum target,  GLuint framebuffer)
{
	glBindFramebuffer (target, framebuffer);

	ErrorCheck ("glBindFramebuffer");
}

void GL::BlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, 
	GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	glBlitFramebuffer (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

	ErrorCheck ("glBlitFramebuffer");
}

/*
 * Behaviour
*/

void GL::Hint(GLenum target,  GLenum mode)
{
	glHint (target, mode);

	ErrorCheck ("glHint");
}

/* 
 * Culling
*/

void GL::CullFace(GLenum mode)
{
	glCullFace (mode);

	ErrorCheck ("glCullFace");
}

/*
 * Draw Calls
*/

void GL::DrawElements (GLenum mode, GLsizei count, GLenum type, const void* indices)
{
	glDrawElements (mode, count, type, indices);

	ErrorCheck ("glDrawElements");
}

void GL::DrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount)
{
	glDrawElementsInstanced (mode, count, type, indices, primcount);

	ErrorCheck ("glDrawElementsInstanced");
}

/*
 * Buffers
*/

void GL::BufferData (GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage)
{
	glBufferData (target, size, data, usage);

	ErrorCheck ("glBufferData");
}

void GL::BufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data)
{
	glBufferSubData (target, offset, size, data);

	ErrorCheck ("glBufferSubData");
}

/*
 * Attributes
*/

void GL::EnableVertexAttribArray (GLuint index)
{
	glEnableVertexAttribArray (index);

	ErrorCheck ("glEnableVertexAttribArray");
}

void GL::VertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{
	glVertexAttribPointer (index, size, type, normalized, stride, pointer);

	ErrorCheck ("glVertexAttribPointer");
}

void GL::VertexAttribDivisor(GLuint index, GLuint divisor)
{
	glVertexAttribDivisor (index, divisor);

	ErrorCheck ("glVertexAttribDivisor");
}

/*
 * Bindings
*/

void GL::BindVertexArray (GLuint array)
{
	glBindVertexArray (array);

	ErrorCheck ("glBindVertexArray");
}

void GL::BindBuffer(GLenum target, GLuint buffer)
{
	glBindBuffer(target, buffer);

	ErrorCheck ("glBindBuffer");
}

/*
 * Depth Buffer
*/

void GL::DepthMask (GLboolean flag)
{
	glDepthMask (flag);

	ErrorCheck ("glDepthMask");
}

void GL::DepthRange(GLclampd nearVal, GLclampd farVal)
{
	glDepthRange (nearVal, farVal);

	ErrorCheck ("glDepthRange");
}

void GL::ClearDepth(GLclampd  depth)
{
	glClearDepth (depth);

	ErrorCheck ("glClearDepth");
}

void GL::DepthFunc(GLenum func)
{
	glDepthFunc(func);

	ErrorCheck ("glDepthFunc");
}

/*
 * Stencil Buffer
*/

void GL::StencilFunc(GLenum func, GLint ref, GLuint mask)
{
	glStencilFunc (func, ref, mask);

	ErrorCheck ("glStencilFunc");
}

void GL::StencilOp(GLenum sfail, GLenum dpfail, GLenum dppass)
{
	glStencilOp (sfail, dpfail, dppass);

	ErrorCheck ("glStencilOp");
}

void GL::StencilMask(GLuint mask)
{
	glStencilMask (mask);

	ErrorCheck ("glStencilMask");
}

/*
 * Blending
*/

void GL::BlendFunc (GLenum sfactor, GLenum dfactor)
{
	glBlendFunc (sfactor, dfactor);

	ErrorCheck ("glBlendFunc");
}

void GL::BlendFunci (GLuint buf, GLenum sfactor, GLenum dfactor)
{
	glBlendFunci (buf, sfactor, dfactor);

	ErrorCheck ("glBlendFunci");
}

/*
 * Generators
*/

void GL::GenVertexArrays (GLsizei n, GLuint * arrays)
{
	glGenVertexArrays (n, arrays);

	ErrorCheck ("glGenVertexArrays");
}

void GL::GenBuffers(GLsizei n,  GLuint * buffers)
{
	glGenBuffers (n, buffers);

	ErrorCheck ("glGenBuffers");
}

void GL::GenTextures(GLsizei n,  GLuint * textures)
{
	glGenTextures (n, textures);

	ErrorCheck ("glGenTextures");
}

void GL::GenFramebuffers(GLsizei n,  GLuint * framebuffers)
{
	glGenFramebuffers (n, framebuffers);

	ErrorCheck ("glGenFramebuffers");
}

/*
 * Capabilities
*/

void GL::Enable (GLenum cap)
{
	glEnable (cap);

	ErrorCheck ("glEnable");
}

void GL::Disable (GLenum cap)
{
	glDisable (cap);

	ErrorCheck ("glDisable");
}

void GL::IsEnabled(GLenum cap, bool *val)
{
	*val = glIsEnabled (cap);

	ErrorCheck ("glIsEnabled");
}

/*
 * Textures
*/

void GL::BindTexture(GLenum target, GLuint texture)
{
	glBindTexture (target, texture);

	ErrorCheck ("glBindTexture");
}

void GL::TexImage2D(GLenum target,  GLint level,  GLint internalformat,  
	GLsizei width,  GLsizei height,  GLint border,  GLenum format,  
	GLenum type,  const GLvoid * data)
{
	glTexImage2D (target, level, internalformat, width, height, border,
		format, type, data);

	ErrorCheck ("glTexImage2D");
}

void GL::TexEnvi(GLenum target,  GLenum pname,  GLint param)
{
	glTexEnvi (target, pname, param);

	ErrorCheck ("glTexEnvi");
}

void GL::TexEnvf(GLenum target,  GLenum pname,  GLfloat param)
{
	glTexEnvf (target, pname, param);

	ErrorCheck ("glTexEnvf");
}

void GL::TexParameteri(GLenum target,  GLenum pname,  GLint param)
{
	glTexParameteri(target, pname, param); 

	ErrorCheck ("glTexParameteri");
}

void GL::TexParameterf(GLenum target,  GLenum pname,  GLfloat param)
{
	glTexParameterf (target, pname, param);

	ErrorCheck ("glTexParameterf");
}

void GL::GenerateMipmap (GLenum target)
{
	glGenerateMipmap(target);

	ErrorCheck ("glGenerateMipmap");
}

/*
 * Shaders
*/

GLuint GL::CreateShader (GLenum shaderType)
{
	GLuint shader = glCreateShader(shaderType);

	ErrorCheck ("glCreateShader");

	return shader;
}

void GL::DeleteShader(GLuint shader)
{
	glDeleteShader (shader);

	ErrorCheck ("glDeleteShader");
}

void GL::ShaderSource (GLuint shader, GLsizei count, const GLchar **string, const GLint *length)
{
	glShaderSource(shader, count, string, length);	

	ErrorCheck ("glShaderSource");
}

void GL::CompileShader(GLuint shader)
{
	glCompileShader (shader);

	ErrorCheck ("glCompileShader");
}

void GL::GetShaderInfoLog(GLuint  shader,  GLsizei  maxLength,  GLsizei * length,  GLchar * infoLog)
{
	glGetShaderInfoLog(shader, maxLength, length, infoLog);

	ErrorCheck ("glGetShaderInfoLog");
}

GLuint GL::CreateProgram(void)
{
	GLuint program = glCreateProgram ();

	ErrorCheck ("glCreateProgram");

	return program;
}

void GL::DeleteProgram(GLuint program)
{
	glDeleteProgram (program);

	ErrorCheck ("glDeleteProgram");
}

void GL::UseProgram (GLuint program)
{
	glUseProgram (program);

	ErrorCheck ("glUseProgram");
}

void GL::LinkProgram(GLuint program)
{
	glLinkProgram (program);

	ErrorCheck ("glLinkProgram");
}

void GL::AttachShader(GLuint program, GLuint shader)
{
	glAttachShader(program, shader);

	ErrorCheck ("glAttachShader");
}

void GL::DetachShader(GLuint program, GLuint shader)
{
	glDetachShader (program, shader);

	ErrorCheck ("glDetachShader");
}


GLint GL::GetUniformLocation(GLuint program, const GLchar *name)
{
	GLint uniformLocation = glGetUniformLocation(program, name);

	ErrorCheck ("glGetUniformLocation");

	return uniformLocation;
}

/*
 * Getters
*/

void GL::GetBooleanv(GLenum pname, GLboolean * params)
{
	glGetBooleanv (pname, params);

	ErrorCheck ("glGetBooleanv");
}

void GL::GetFixedv(GLenum pname, GLfixed * params)
{
	glGetFixedv (pname, params);

	ErrorCheck ("glGetFixedv");
}

void GL::GetFloatv(GLenum pname, GLfloat * params)
{
	glGetFloatv (pname, params); 

	ErrorCheck ("glGetFloatv");
}

void GL::GetIntegerv(GLenum pname, GLint * params)
{
	glGetIntegerv(pname, params);

	ErrorCheck ("glGetIntegerv");
}

/*
 * Cleaning
*/

void GL::DeleteVertexArrays(GLsizei n, const GLuint *arrays)
{
	glDeleteVertexArrays(n, arrays);

	ErrorCheck ("glDeleteVertexArrays");
}

void GL::DeleteBuffers (GLsizei n, const GLuint* arrays)
{
	glDeleteBuffers (n, arrays);

	ErrorCheck ("glDeleteBuffers");
}

void GL::Check ()
{
	ErrorCheck ("Custom Query");
}

void GL::ErrorCheck (const std::string& methodName)
{
	GLenum error;
	while ((error = glGetError()) != GL_NO_ERROR) {
		std::string errorString = "On " + methodName + ": ";

		switch (error) {
			case GL_INVALID_ENUM:
				errorString += "GL_INVALID_ENUM (An unacceptable value is specified for an enumerated argument. The offending command is ignored and has no other side effect than to set the error flag.)";
				break;
			case GL_INVALID_VALUE:
				errorString += "GL_INVALID_VALUE (A numeric argument is out of range. The offending command is ignored and has no other side effect than to set the error flag.)";
				break;
			case GL_INVALID_OPERATION:
				errorString += "GL_INVALID_OPERATION (The specified operation is not allowed in the current state. The offending command is ignored and has no other side effect than to set the error flag.)";
				break;
			case GL_INVALID_FRAMEBUFFER_OPERATION:
				errorString += "GL_INVALID_FRAMEBUFFER_OPERATION (The framebuffer object is not complete. The offending command is ignored and has no other side effect than to set the error flag.)";
				break;
			case GL_OUT_OF_MEMORY:
				errorString += "GL_OUT_OF_MEMORY (There is not enough memory left to execute the command. The state of the GL is undefined, except for the state of the error flags, after this error is recorded.)";
				break;
			case GL_STACK_UNDERFLOW:
				errorString += "GL_STACK_UNDERFLOW (An attempt has been made to perform an operation that would cause an internal stack to underflow.)";
				break;
			case GL_STACK_OVERFLOW:
				errorString += "GL_STACK_OVERFLOW (An attempt has been made to perform an operation that would cause an internal stack to overflow.)";
				break;
		}

		Console::LogError (errorString);
	}
}