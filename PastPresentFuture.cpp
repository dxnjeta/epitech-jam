//
// EPITECH PROJECT, 2021
// PastPresentFuture
// File description:
// main
//

#include <unistd.h>
#include "PastPresentFuture.hpp"

Game::Game()
{
    this->state = 5;
    this->question = 1;
    this->correct = 0;
    this->wrong = 0;
    this->count = 0;
    this->second_question = 0;
}

Game::~Game()
{
    
}

void	Game::CreateMenu(sf::RenderWindow& window)
{
    
    this->introt.loadFromFile("./assets/intro.png");
    this->introt.setSmooth(true);
    this->intro.setTexture(this->introt);

    this->congratst.loadFromFile("./assets/congrats.png");
    this->congratst.setSmooth(true);
    this->congrats.setTexture(this->congratst);

    this->nicet.loadFromFile("./assets/nice.png");
    this->nicet.setSmooth(true);
    this->nice.setTexture(this->nicet);

    this->byet.loadFromFile("./assets/bye.png");
    this->byet.setSmooth(true);
    this->bye.setTexture(this->byet);

    this->pict.loadFromFile("./assets/quote3.png");
    this->pict.setSmooth(true);
    this->pic.setTexture(this->pict);

    this->pict2.loadFromFile("./assets/quote1.png");
    this->pict2.setSmooth(true);
    this->pic2.setTexture(this->pict2);

    this->pict3.loadFromFile("./assets/quote2.png");
    this->pict3.setSmooth(true);
    this->pic3.setTexture(this->pict3);

    this->loadingt.loadFromFile("./assets/loading.png");
    this->loadingt.setSmooth(true);
    this->loading.setTexture(this->loadingt);

    this->team_texture.loadFromFile("./assets/team.png");
    this->team_texture.setSmooth(true);
    this->team_spr.setTexture(this->team_texture);

    this->onofft.loadFromFile("./assets/soundonoff.png");
    this->onofft.setSmooth(true);
    this->onoff.setTexture(this->onofft);
    this->on.top = 0;
    this->on.left = 70;
    this->on.height = 68;
    this->on.width = 70;
    this->onoff.setTextureRect(this->on);
    this->onoff.setPosition(1200.f, 400.f);

    this->inst.loadFromFile("./assets/instructions.png");
    this->inst.setSmooth(true);
    this->ins.setTexture(this->inst);

    this->menut.loadFromFile("./assets/m.png");
    this->menut.setSmooth(true);
    this->menu.setTexture(this->menut);
    this->menu.setColor(sf::Color(255, 255, 255, 100));
    this->logot.loadFromFile("./assets/name.png");
    this->logot.setSmooth(true);
    this->logo.setTexture(this->logot);
    this->logo.setPosition(273.5f, 130.f);
    this->starTexture.loadFromFile("./assets/star.png");
    this->starTexture.setSmooth(true);
    this->star.setTexture(this->starTexture);
    this->srect.top = 0;
    this->srect.left = 0;
    this->srect.height = 260;
    this->srect.width = 260;
    this->star.setTextureRect(this->srect);
    this->star.setPosition(130.f, 130.f);
    this->star2.setTexture(this->starTexture);
    this->star3.setTexture(this->starTexture);
    this->star2.setTextureRect(this->srect);
    this->star3.setTextureRect(this->srect);
    this->star2.setPosition(520.f, 130.f);
    this->star3.setPosition(910.f, 130.f);

    this->icont.loadFromFile("./assets/icon.png");
    this->icont.setSmooth(true);
    this->icon.setTexture(this->icont);
    this->icon.setScale(0.5f, 0.5f);
    this->icon.setPosition(486.f, 350.f);
    this->rect.top = 0;
    this->rect.left = 0;
    this->rect.height = 266.66;
    this->rect.width = 728;
    this->s.top = 0;
    this->s.left = 260;
    this->s.height = 80;
    this->s.width = 260;
    this->size.setTextureRect(this->s);
    this->size.setPosition(1000.f, 794.f);
    this->icon.setTextureRect(this->rect);
    this->quit.setTexture(this->icont);
    this->how.setTexture(this->icont);
    this->quit.setScale(0.5f, 0.5f);
    this->quit.setPosition(486.f, 610.f);
    this->how.setScale(0.5f, 0.5f);
    this->how.setPosition(486.f, 480.f);
    this->how.setTextureRect(this->rect);

    this->skip.setTexture(this->icont);
    this->skip.setScale(0.5f, 0.5f);
    this->skip.setPosition(486.f, 680.f);
    this->skip.setTextureRect(this->rect);

    this->steam.setTexture(this->icont);
    this->steam.setScale(0.5f, 0.5f);
    this->steam.setPosition(486.f, 740.f);
    this->steam.setTextureRect(this->rect);

    this->sback.setTexture(this->icont);
    this->sback.setScale(0.5f, 0.5f);
    this->sback.setPosition(486.f, 740.f);
    this->sback.setTextureRect(this->rect);

    this->quit.setTextureRect(this->rect);
    this->font.loadFromFile("./text/tx.ttf");

    this->back.setFont(font);
    this->team.setFont(font);
    this->play.setFont(font);
    this->howt.setFont(font);
    this->quitt.setFont(font);

    this->skipt.setFont(font);

    this->play.setString("Play");
    this->play.setPosition(590.f, 390.f);
    this->howt.setString("Instructions");
    this->howt.setPosition(526.f, 520.f);
    this->quitt.setString("Quit");
    this->quitt.setPosition(590.f, 650.f);
    this->team.setString("Team");
    this->team.setPosition(590.f, 780.f);
    this->team.setFillColor(sf::Color::Black);
    this->back.setString("Go Back");
    this->back.setPosition(550.f, 780.f);
    this->back.setFillColor(sf::Color::Black);

    this->word.setFont(font);
    this->word.setString("GONE");
    this->word.setPosition(520.f, 620.f);
    this->word.setFillColor(sf::Color::Black);
    this->word.setCharacterSize(90);

    this->q.setFont(font);
    this->q.setString("Choose the right tense of the word below");
    this->q.setPosition(90.f, 50.f);
    this->q.setFillColor(sf::Color::Yellow);
    this->q.setCharacterSize(50);

    this->tenses.setFont(font);
    this->tenses.setString("PAST\t\t\tPRESENT  \t\tFUTURE");
    this->tenses.setPosition(200.f, 230.f);
    this->tenses.setFillColor(sf::Color::Black);
    this->tenses.setCharacterSize(50);

 
    this->skipt.setString("Skip");
    this->skipt.setPosition(590.f, 720.f);

    this->play.setFillColor(sf::Color::Black);
    this->howt.setFillColor(sf::Color::Black);
    this->quitt.setFillColor(sf::Color::Black);
    this->skipt.setFillColor(sf::Color::Black);
    this->mbuffer.loadFromFile("./sound/music.wav");
    this->music.setBuffer(this->mbuffer);
    this->music.play();
    this->music.setLoop(true);
    this->bg.setSize(sf::Vector2f(450, 150));
    this->bg.setFillColor(sf::Color::Yellow);
    this->bg.setPosition(430.f, 600.f);
    this->score.setFont(font);
    this->score.setString("");
    this->score.setPosition(600.f, 400.f);
    this->score.setFillColor(sf::Color::White);
    this->score.setCharacterSize(100);
    this->finished.setFont(font);
    this->finished.setString("");
    this->finished.setPosition(600.f, 400.f);
    this->finished.setFillColor(sf::Color::White);
    this->finished.setCharacterSize(100);

    this->square.setSize(sf::Vector2f(260, 335));
    this->square.setPosition(-600.f, 270.f);
    this->square.setOutlineThickness(10);
    this->square.setOutlineColor(sf::Color::Yellow);
    this->square.setFillColor(sf::Color::Transparent);

}

void	Game::ChangeState(sf::RenderWindow& window)
{
    switch (this->getState()) {
    case 5:
        window.clear();
        this->drawLoading(window);
        break;
    case 6:
        window.clear();
        this->drawTeam(window);
        break;
    case 0:
        window.clear();
        this->drawMenu(window);
        break;
    case 1:
        window.clear();
        this->drawGame(window);
        break;
    case 2:
        window.clear();
        this->drawHow(window);
        break;
    case 3:
        window.clear();
        this->drawIntro(window);
        break;
    case 4:
        window.clear(sf::Color::Cyan);
        this->gameOver(window);
        break;
    case 10:
        window.clear(sf::Color::Cyan);
        this->gameOver2(window);
        break;
    case 7:
        window.clear();
        this->drawMenu(window);
        break;
    case 9:
        window.clear();
        this->drawSecond(window);
        break;
    }
}

void	Game::drawSecond(sf::RenderWindow& window)
{
    if (this->second_question == 0) {
        window.draw(this->pic);
    }
    if (this->second_question == 1) {
        window.draw(this->pic3);
    }
    if (this->second_question == 2) {
        window.draw(this->pic2);
    }
    window.draw(this->square);
}

void	Game::drawGame(sf::RenderWindow& window)
{
    window.draw(this->menu);
    // window.draw(this->onoff);
    window.draw(this->star);
    window.draw(this->star2);
    window.draw(this->star3);
    window.draw(this->tenses);
    window.draw(this->bg);
    window.draw(this->word);
    window.draw(this->q);
}


void	Game::drawIntro(sf::RenderWindow& window)
{
    window.draw(this->intro);
    window.draw(this->skip);
    window.draw(this->skipt);
}

void	Game::drawTeam(sf::RenderWindow& window)
{
    window.draw(this->team_spr);
    window.draw(this->sback);
    window.draw(this->back);
}

void	Game::drawHow(sf::RenderWindow& window)
{
    window.draw(this->ins);
    window.draw(this->skip);
    window.draw(this->skipt);
}

void	Game::drawMenu(sf::RenderWindow& window)
{
    window.draw(this->menu);
    window.draw(this->icon);
    window.draw(this->how);
    window.draw(this->steam);
    window.draw(this->quit);    
    window.draw(this->play);
    window.draw(this->howt);
    window.draw(this->quitt);
    window.draw(this->team);
    window.draw(this->logo);
}

void	Game::PlayButton(void)
{
    if (this->event.mouseMove.x >= 490 && this->event.mouseMove.x <= 750 &&
	this->event.mouseMove.y >= 380 && this->event.mouseMove.y <= 448) {
	this->rect.top = 266.66;
    } else if (this->event.mouseButton.x >= 490 && this->event.mouseButton.x <= 750 &&
	       this->event.mouseButton.y >= 380 && this->event.mouseButton.y <= 448) {
	this->rect.top = 533.32;
    } else {
	this->rect.top = 0;
    }
    this->icon.setTextureRect(this->rect);
}

void	Game::HowButton(void)
{
    if (this->event.mouseMove.x >= 490 && this->event.mouseMove.x <= 750 &&
	this->event.mouseMove.y >= 515 && this->event.mouseMove.y <= 578) {
	this->rect.top = 266.66;
    } else if (this->event.mouseButton.x >= 490 && this->event.mouseButton.x <= 750 &&
	       this->event.mouseButton.y >= 515 && this->event.mouseButton.y <= 578) {
	this->rect.top = 533.32;
    } else {
	this->rect.top = 0;
    }
    this->how.setTextureRect(this->rect);
}

void	Game::SkipButton(void)
{
    if (this->event.mouseMove.x >= 490 && this->event.mouseMove.x <= 750 &&
	this->event.mouseMove.y >= 715 && this->event.mouseMove.y <= 780) {
	this->rect.top = 266.66;
    } else if (this->event.mouseButton.x >= 490 && this->event.mouseButton.x <= 750 &&
	       this->event.mouseButton.y >= 715 && this->event.mouseButton.y <= 780) {
	this->rect.top = 533.32;
    } else {
	this->rect.top = 0;
    }
    this->skip.setTextureRect(this->rect);
}

void	Game::QuitButton(void)
{
    if (this->event.mouseMove.x >= 490 && this->event.mouseMove.x <= 750 &&
	this->event.mouseMove.y >= 645 && this->event.mouseMove.y <= 710) {
	this->rect.top = 266.66;
    } else if (this->event.mouseButton.x >= 490 && this->event.mouseButton.x <= 750 &&
               this->event.mouseButton.y >= 645 && this->event.mouseButton.y <= 710) {
	this->rect.top = 533.32;
    } else {
	this->rect.top = 0;
    }
    this->quit.setTextureRect(this->rect);
}

void	Game::TeamButton(void)
{
    if (this->event.mouseMove.x >= 490 && this->event.mouseMove.x <= 750 &&
	this->event.mouseMove.y >= 775 && this->event.mouseMove.y <= 840) {
	this->rect.top = 266.66;
    } else if (this->event.mouseButton.x >= 490 && this->event.mouseButton.x <= 750 &&
               this->event.mouseButton.y >= 775 && this->event.mouseButton.y <= 840) {
	this->rect.top = 533.32;
    } else {
	this->rect.top = 0;
    }
    this->steam.setTextureRect(this->rect);
}

void	Game::BackButton(void)
{
    if (this->event.mouseMove.x >= 490 && this->event.mouseMove.x <= 750 &&
	this->event.mouseMove.y >= 775 && this->event.mouseMove.y <= 840) {
	this->rect.top = 266.66;
    } else if (this->event.mouseButton.x >= 490 && this->event.mouseButton.x <= 750 &&
               this->event.mouseButton.y >= 775 && this->event.mouseButton.y <= 840) {
	this->rect.top = 533.32;
    } else {
	this->rect.top = 0;
    }
    this->sback.setTextureRect(this->rect);
}

void	Game::Star1(void)
{
    if (this->event.mouseMove.x >= 130 && this->event.mouseMove.x <= 390 &&
	this->event.mouseMove.y >= 130 && this->event.mouseMove.y <= 390) {
	this->srect.left = 260;
    } else if (this->event.mouseButton.x >= 130 && this->event.mouseButton.x <= 390 &&
               this->event.mouseButton.y >= 130 && this->event.mouseButton.y <= 390) {
	this->srect.left = 520;
    } else {
	this->srect.left = 0;
    }
    this->star.setTextureRect(this->srect);
}

void	Game::Star2(void)
{
    if (this->event.mouseMove.x >= 520 && this->event.mouseMove.x <= 780 &&
	this->event.mouseMove.y >= 130 && this->event.mouseMove.y <= 390) {
	this->srect.left = 260;
    } else if (this->event.mouseButton.x >= 520 && this->event.mouseButton.x <= 780 &&
               this->event.mouseButton.y >= 130 && this->event.mouseButton.y <= 390) {
	this->srect.left = 520;
    } else {
	this->srect.left = 0;
    }
    this->star2.setTextureRect(this->srect);
}

void	Game::drawLoading(sf::RenderWindow& window)
{
    window.draw(this->loading);
}

void	Game::gameOver2(sf::RenderWindow& window)
{
    string str = to_string(this->correct2);
    this->finished.setString(str);
    window.draw(this->bye);
    window.draw(this->finished);
}

void	Game::gameOver(sf::RenderWindow& window)
{
    string str = to_string(this->correct);
    if (this->correct >= 5)
        window.draw(this->congrats);
    else
        window.draw(this->nice);
    this->score.setString(str);
    window.draw(this->score);
}

void	Game::Star3(void)
{
    if (this->event.mouseMove.x >= 910 && this->event.mouseMove.x <= 1170 &&
        this->event.mouseMove.y >= 130 && this->event.mouseMove.y <= 390) {
        this->srect.left = 260;
    } else if (this->event.mouseButton.x >= 910 && this->event.mouseButton.x <= 1170 &&
               this->event.mouseButton.y >= 130 && this->event.mouseButton.y <= 390) {
        this->srect.left = 520;
    } else {
        this->srect.left = 0;
    }
    this->star3.setTextureRect(this->srect);
}

void	Game::rectPos(void)
{
    if (this->event.mouseMove.x >= 180 && this->event.mouseMove.x <= 405 &&
        this->event.mouseMove.y >= 270 && this->event.mouseMove.y <= 605) {
        this->square.setPosition(166.5f, 270.f);
    } else if (this->event.mouseMove.x >= 510 && this->event.mouseMove.x <= 770 &&
        this->event.mouseMove.y >= 270 && this->event.mouseMove.y <= 605) {
        this->square.setPosition(510.f, 270.f);
    } else if (this->event.mouseMove.x >= 890 && this->event.mouseMove.x <= 1120 &&
        this->event.mouseMove.y >= 270 && this->event.mouseMove.y <= 605) {
        this->square.setPosition(875.f, 270.f);
    } else {
        this->square.setPosition(-510.f, 270.f);
    }
}


void	Game::Events(void)
{
    this->PlayButton();
    this->QuitButton();
    this->HowButton();
    this->TeamButton();
}

int	Game::getState(void)
{
    return this->state;
}

void	Game::setState(int x)
{
    this->state = x;
}

int main()
{
    Game g;
    sf::RenderWindow window(sf::VideoMode(1300, 900), "Past Present Future", sf::Style::Close);

    g.CreateMenu(window);
    while (window.isOpen())
    {
        if (g.getState() == 8) {
            g.setState(0);
        }
        if (g.getState() == 5) {
            g.count++;
            if (g.count >= 2500) {
                g.count = 0;
                g.setState(3);
            }
        }
        if (g.getState() == 9) {
            if (g.second_question >= 3) {
                g.setState(10);
            }
        }
        if (g.getState() == 10) {
            g.count++;
            if (g.count >= 4000) {
                g.count = 0;
                window.close();
            }
        }
        if (g.getState() == 4) {
            g.count++;
            if (g.count >= 5000) {
                if (g.correct >= 5) {
                    g.count = 0;
                    g.setState(9);
                } else {
                    g.count = 0;
                    window.close();
                }
            }
        }
        while (window.pollEvent(g.event))
        {
            if (g.event.type == sf::Event::Closed || (g.event.type == sf::Event::KeyPressed && g.event.key.code ==  sf::Keyboard::Escape)) {
		window.close();
	    }
            if (g.event.type == sf::Event::MouseButtonPressed || g.event.type == sf::Event::MouseMoved) {
                if (g.getState() == 3 || g.getState() == 2) {
                    g.SkipButton();
                }
                if (g.getState() == 0)
                    g.Events();
                if (g.getState() == 6)
                    g.BackButton();
                if (g.getState() == 1) {
                    g.Star1();
                    g.Star2();
                    g.Star3();
                }
                if (g.getState() == 9) {
                    g.rectPos();
                }
            }
            if (g.event.type == sf::Event::MouseButtonReleased) {
                sf::Vector2f pos = window.mapPixelToCoords({g.event.mouseButton.x, g.event.mouseButton.y});
                if (g.getState() == 3 || g.getState() == 2) {
                    if (pos.x >= 490 && pos.x <= 750 && pos.y >= 715 && pos.y <= 780)
                        g.setState(0);
                }
                if (g.getState() == 6) {
                    if (pos.x >= 490 && pos.x <= 750 && pos.y >= 775 && pos.y <= 840) {
                        g.setState(8);
                    }
                }
                if (g.getState() == 0) {
                    if (pos.x >= 490 && pos.x <= 750 && pos.y >= 380 && pos.y <= 448)
                        g.setState(1);
                    if (pos.x >= 490 && pos.x <= 750 && pos.y >= 515 && pos.y <= 578)
                        g.setState(2);
                    if (pos.x >= 490 && pos.x <= 750 && pos.y >= 645 && pos.y <= 710)
                        window.close();
                    if (pos.x >= 490 && pos.x <= 750 && pos.y >= 775 && pos.y <= 840)
                        g.setState(6);
                }
                if (g.getState() == 9) {
                    if (pos.x >= 180 && pos.x <= 405 && pos.y >= 270 && pos.y <= 605) {
                        if (g.second_question == 0) {
                            g.wrong2++;
                        }
                        if (g.second_question == 1) {
                            g.correct2++;
                        }
                        if (g.second_question == 2) {
                            g.wrong2++;
                        }
                        g.second_question++;
                    }
                    if (pos.x >= 510 && pos.x <= 770 && pos.y >= 270 && pos.y <= 605) {
                        if (g.second_question == 0) {
                            g.wrong2++;
                        }
                        if (g.second_question == 1) {
                            g.wrong2++;
                        }
                        if (g.second_question == 2) {
                            g.correct2++;
                        }
                        g.second_question++;
                    }
                    if (pos.x >= 890 && pos.x <= 1120 && pos.y >= 270 && pos.y <= 605) {
                        if (g.second_question == 0) {
                            g.correct2++;
                        }
                        if (g.second_question == 1) {
                            g.wrong2++;
                        }
                        if (g.second_question == 2) {
                            g.wrong2++;
                        }
                        g.second_question++;
                    }
                }
                if (g.getState() == 1) {
                    if (pos.x >= 130 && pos.x <= 390 && pos.y >= 130 && pos.y <= 390) {
                        if (g.question == 1) {
                            g.correct += 1;
                            g.word.setString("EAT");
                            g.word.setCharacterSize(100);
                        }
                        if (g.question == 2) {
                            g.wrong += 1;
                            g.word.setString("WILL TYPE");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 3) {
                            g.wrong += 1;
                            g.word.setString("SMILE");
                            g.word.setCharacterSize(80);
                        }
                        if (g.question == 4) {
                            g.wrong += 1;
                            g.word.setString("FOUND");
                        }
                        if (g.question == 5) {
                            g.correct += 1;
                            g.word.setString("WILL PULL");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 6) {
                            g.wrong += 1;
                            g.word.setString("TALKED");
                            g.word.setCharacterSize(78);
                        }
                        if (g.question == 7) {
                            g.correct += 1;
                            g.word.setString("FALLS");
                            g.word.setCharacterSize(80);
                        }
                        if (g.question == 8) {
                            g.wrong += 1;
                            g.word.setString("WILL CRY");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 9) {
                            g.wrong += 1;
                            g.word.setString("LOOKED");
                            g.word.setCharacterSize(72);
                        }
                        if (g.question == 10) {
                            g.correct += 1;
                            g.setState(4);
                        }
                        g.question += 1;
                    }
                    if (pos.x >= 520 && pos.x <= 780 && pos.y >= 130 && pos.y <= 390) {
                        if (g.question == 1) {
                            g.wrong += 1;
                            g.word.setString("EAT");
                            g.word.setCharacterSize(100);
                        }
                        if (g.question == 2) {
                            g.correct += 1;
                            g.word.setString("WILL TYPE");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 3) {
                            g.wrong += 1;
                            g.word.setString("SMILE");
                            g.word.setCharacterSize(80);
                        }
                        if (g.question == 4) {
                            g.correct += 1;
                            g.word.setString("FOUND");
                        }
                        if (g.question == 5) {
                            g.wrong += 1;
                            g.word.setString("WILL PULL");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 6) {
                            g.wrong += 1;
                            g.word.setString("TALKED");
                            g.word.setCharacterSize(78);
                        }
                        if (g.question == 7) {
                            g.wrong += 1;
                            g.word.setString("FALLS");
                            g.word.setCharacterSize(80);
                        }
                        if (g.question == 8) {
                            g.correct += 1;
                            g.word.setString("WILL CRY");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 9) {
                            g.wrong += 1;
                            g.word.setString("LOOKED");
                            g.word.setCharacterSize(72);
                        }
                        if (g.question == 10) {
                            g.wrong += 1;
                            g.setState(4);
                        }
                        g.question += 1;
                    }
                    if (pos.x >= 910 && pos.x <= 1170 && pos.y >= 130 && pos.y <= 390) {
                        if (g.question == 1) {
                            g.wrong += 1;
                            g.word.setString("EAT");
                            g.word.setCharacterSize(100);
                        }
                        if (g.question == 2) {
                            g.wrong += 1;
                            g.word.setString("WILL TYPE");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 3) {
                            g.correct += 1;
                            g.word.setString("SMILE");
                            g.word.setCharacterSize(80);
                        }
                        if (g.question == 4) {
                            g.wrong += 1;
                            g.word.setString("FOUND");
                        }
                        if (g.question == 5) {
                            g.wrong += 1;
                            g.word.setString("WILL PULL");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 6) {
                            g.correct += 1;
                            g.word.setString("TALKED");
                            g.word.setCharacterSize(78);
                        }
                        if (g.question == 7) {
                            g.wrong += 1;
                            g.word.setString("FALLS");
                            g.word.setCharacterSize(80);
                        }
                        if (g.question == 8) {
                            g.wrong += 1;
                            g.word.setString("WILL CRY");
                            g.word.setCharacterSize(70);
                        }
                        if (g.question == 9) {
                            g.correct += 1;
                            g.word.setString("LOOKED");
                            g.word.setCharacterSize(72);
                        }
                        if (g.question == 10) {
                            g.wrong += 1;
                            g.setState(4);
                        }
                        g.question += 1;
                    }
                    // if (pos2.x >= 1185 && pos2.x <= 1385 && pos2.y >= 380 && pos2.y <= 490) {
		    //     if (g.music.getStatus() == g.music.Status::Playing) {
		    //         g.music.pause();
		    //     } else
		    //         g.music.play();
                    //     if (g.on.left == 0)
                    //         g.on.left = 70;
                    //     else
                    //         g.on.left = 0;
                    //     g.onoff.setTextureRect(g.on);
                    // }
		}
            }
        }
        window.clear();
        g.ChangeState(window);
        window.display();
    }
    return 0;
}
