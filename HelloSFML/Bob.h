#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bob
{
	// Все private переменные могут быть доступны только внутри объекта
private: 

	// Позиция боба
	Vector2f m_Position;

	// Объявляем объект Sprite
	Sprite m_Sprite;

	// Добавляем текстуру
	Texture m_Texture;

	// Лоигческие переменные для отслеживания направления движения
	bool m_LeftPressed;
	bool m_RightPressed;

	// Скорость Боба в пикселях в секунду
	float m_Speed;

	// Дальше идут открытые методы
public:
	
	// Настраиваем Боба в конструкторе
	Bob();

	// Для отправки спрайта в главную функцию
	Sprite getSprite();

	// Для движения Боба
	void moveLeft();

	void moveRight();

	// Прекращение движения
	void stopLeft();

	void stopRight();

	// Эта функция будет вызываться каждый кадр
	void update(float elapsedTime);
};
