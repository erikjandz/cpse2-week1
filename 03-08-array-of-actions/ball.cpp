#include <SFML/Graphics.hpp>
#include "ball.hpp"

ball::ball( sf::Vector2f position, float size ) :
	drawable(position, sf::Color(0, 255, 0)),
	size(size)
{}

void ball::draw( sf::RenderWindow & window ) const{
	sf::CircleShape circle;
	circle.setRadius(size);
	circle.setPosition(position);
	circle.setFillColor(color);
	window.draw(circle);
}
