#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

#include <SFML/Graphics.hpp>

class drawable{
public:
  drawable(	sf::Vector2f position, sf::Color color):
    position{ position },
    color{color}
    {}
  virtual void draw( sf::RenderWindow & window ) const = 0;

  void move( sf::Vector2f delta ){
  	position += delta;
  }

  void jump( sf::Vector2f target ){
  	position = target;
  }

  void jump( sf::Vector2i target ){
  	jump( sf::Vector2f(
  		static_cast< float >( target.x ),
  		static_cast< float >( target.y )
  	));
  }
protected:
	sf::Vector2f position;
  sf::Color color;
};
#endif
