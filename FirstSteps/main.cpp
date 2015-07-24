// Copyright [2015] <venkatabhaskaram@gmail.com>
#include <SFML/Window.hpp>

int main(int argc, char** argv) {
  sf::ContextSettings settings;
  settings.depthBits = 24;
  settings.stencilBits = 8;
  settings.antialiasingLevel = 2;
  sf::Window window(sf::VideoMode(800,600), "OpenGL", sf::Style::Close, settings);
  bool running  = true;
  while (running) {
    sf::Event event;
    while ( window.pollEvent(event) ) {
      switch (event.type) {
        case sf::Event::Closed: {
          running = false;
          break;
        }
        case sf::Event::KeyPressed: {
          if (event.key.code == sf::Keyboard::Escape) {
            running = false;
            break;
          }
        }
      }
    }
  }


  return 0;
}
