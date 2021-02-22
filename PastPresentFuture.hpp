//
// EPITECH PROJECT, 2021
// epitech JAM
// File description:
// hpp
//

#ifndef PASTPRESENTFUTURE_HPP_
#define PASTPRESENTFUTURE_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


class Game
{
public:
    Game();
    ~Game();
    sf::Event event;
    sf::Sprite loading;
    sf::Texture loadingt;
    sf::Texture nicet;
    sf::Sprite nice;
    sf::Texture congratst;
    sf::Sprite congrats;
    sf::Texture pict;
    sf::Texture byet;
    sf::Sprite bye;
    sf::Texture pict2;
    sf::Texture pict3;
    sf::Sprite pic;
    sf::Sprite pic2;
    sf::Sprite pic3;
    sf::Sprite size;
    sf::Texture introt;
    sf::Sprite onoff;
    sf::Texture onofft;
    sf::Sprite star;
    sf::Sprite star2;
    sf::Sprite star3;
    sf::Texture starTexture;
    sf::IntRect srect;
    sf::IntRect on;
    sf::Sprite intro;
    sf::Texture inst;
    sf::Sprite ins;
    sf::IntRect s;
    sf::Texture sizet;
    sf::IntRect m;
    sf::Sprite logo;
    sf::Texture logot;
    sf::Sprite menu;
    sf::Texture menut;
    sf::Sprite icon;
    sf::Sprite how;
    sf::Sprite quit;
    sf::Sprite skip;
    sf::Sprite sback;
    sf::Sprite steam;
    sf::Texture team_texture;
    sf::Sprite team_spr;
    sf::Texture icont;
    sf::IntRect rect;
    sf::Font font;
    sf::Text play;
    sf::Text howt;
    sf::Text quitt;
    sf::Text skipt;
    sf::Text back;
    sf::Text team;
    sf::SoundBuffer buffer;
    sf::Sound sound;
    sf::SoundBuffer mbuffer;
    sf::Sound music;
    void Events(void);
    void PlayButton();
    void HowButton();
    void SkipButton();
    void TeamButton();
    void BackButton();
    void rectPos();
    void Star1();
    void Star3();
    void Star2();
    void QuitButton();
    void CreateMenu(sf::RenderWindow& window);
    void ChangeState(sf::RenderWindow& window);
    void drawMenu(sf::RenderWindow& window);
    void drawGame(sf::RenderWindow& window);
    void drawHow(sf::RenderWindow& window);
    void drawSecond(sf::RenderWindow& window);
    void drawIntro(sf::RenderWindow& window);
    void drawLoading(sf::RenderWindow& window);
    void drawTeam(sf::RenderWindow& window);
    void gameOver(sf::RenderWindow& window);
    void gameOver2(sf::RenderWindow& window);
    int getState(void);
    void setState(int x);
    sf::Text word;
    sf::Text finished;
    sf::Text score;
    sf::Text tenses;
    sf::Text q;
    sf::RectangleShape bg;
    sf::RectangleShape square;
    int question;
    int correct;
    int wrong;
    int correct2;
    int wrong2;
    int count;
    int second_question;
private:
    int state;
};

#endif /* PASTPRESENTFUTURE_HPP_ */
