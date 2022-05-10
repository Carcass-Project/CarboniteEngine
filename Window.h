#pragma once
#include <iostream>
#include <string>
#include "mathlib.h"

class Window
{
public:
	Vector2 size;
	std::string title;

	// NOTE: Add settable key callbacks.

	virtual void Open() = 0;
	virtual bool ShouldClose() = 0;
	virtual void SwapBuffers() = 0;
	virtual void CurrentContext() = 0;
	virtual void Close() = 0;
};