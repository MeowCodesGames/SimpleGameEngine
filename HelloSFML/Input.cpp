#include "Engine.h"

void Engine::input()
{
	// ������������ ������� Escape
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	// ������������ ������� ������ ��������
	if (Keyboard::isKeyPressed(Keyboard::A) or Keyboard::isKeyPressed(Keyboard::Left))
	{
		m_bob.moveLeft();
	}
	else
	{
		m_bob.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::D) or Keyboard::isKeyPressed(Keyboard::Right))
	{
		m_bob.moveRight();
	}
	else
	{
		m_bob.stopRight();
	}
}