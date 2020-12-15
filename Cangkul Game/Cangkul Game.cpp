﻿//---TERMASUK---
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <stdio.h>
//#include <stdlib.h>

using namespace std;
using namespace sf;

int main() {
	RenderWindow window(VideoMode(1920, 1080), "Cangkul Card Game", Style::Fullscreen); //Dimensi Layar
	window.setFramerateLimit(120); //FPS
	bool isFullscreen = true;

	//---GAMBAR---
	Texture cardTexture0C;
	Texture cardTexture0D;
	Texture cardTexture0H;
	Texture cardTexture0S;
	Texture cardTexture2C;
	Texture cardTexture2D;
	Texture cardTexture2H;
	Texture cardTexture2S;
	Texture cardTexture3C;
	Texture cardTexture3D;
	Texture cardTexture3H;
	Texture cardTexture3S;
	Texture cardTexture4C;
	Texture cardTexture4D;
	Texture cardTexture4H;
	Texture cardTexture4S;
	Texture cardTexture5C;
	Texture cardTexture5D;
	Texture cardTexture5H;
	Texture cardTexture5S;
	Texture cardTexture6C;
	Texture cardTexture6D;
	Texture cardTexture6H;
	Texture cardTexture6S;
	Texture cardTexture7C;
	Texture cardTexture7D;
	Texture cardTexture7H;
	Texture cardTexture7S;
	Texture cardTexture8C;
	Texture cardTexture8D;
	Texture cardTexture8H;
	Texture cardTexture8S;
	Texture cardTexture9C;
	Texture cardTexture9D;
	Texture cardTexture9H;
	Texture cardTexture9S;
	Texture cardTextureJC;
	Texture cardTextureJD;
	Texture cardTextureJH;
	Texture cardTextureJS;
	Texture cardTextureQC;
	Texture cardTextureQD;
	Texture cardTextureQH;
	Texture cardTextureQS;
	Texture cardTextureKC;
	Texture cardTextureKD;
	Texture cardTextureKH;
	Texture cardTextureKS;
	cardTexture0C.loadFromFile("picture/card/0-AC.png");
	cardTexture0D.loadFromFile("picture/card/0-AD.png");
	cardTexture0H.loadFromFile("picture/card/0-AH.png");
	cardTexture0S.loadFromFile("picture/card/0-AS.png");
	cardTexture2C.loadFromFile("picture/card/2C.png");
	cardTexture2D.loadFromFile("picture/card/2D.png");
	cardTexture2H.loadFromFile("picture/card/2H.png");
	cardTexture2S.loadFromFile("picture/card/2S.png");
	cardTexture3C.loadFromFile("picture/card/3C.png");
	cardTexture3D.loadFromFile("picture/card/3D.png");
	cardTexture3H.loadFromFile("picture/card/3H.png");	
	cardTexture3S.loadFromFile("picture/card/3S.png");
	cardTexture4C.loadFromFile("picture/card/4C.png");
	cardTexture4D.loadFromFile("picture/card/4D.png");
	cardTexture4H.loadFromFile("picture/card/4H.png");
	cardTexture4S.loadFromFile("picture/card/4S.png");
	cardTexture5C.loadFromFile("picture/card/5C.png");
	cardTexture5D.loadFromFile("picture/card/5D.png");
	cardTexture5H.loadFromFile("picture/card/5H.png");
	cardTexture5S.loadFromFile("picture/card/5S.png");
	cardTexture6C.loadFromFile("picture/card/6C.png");
	cardTexture6D.loadFromFile("picture/card/6D.png");
	cardTexture6H.loadFromFile("picture/card/6H.png");
	cardTexture6S.loadFromFile("picture/card/6S.png");
	cardTexture7C.loadFromFile("picture/card/7C.png");
	cardTexture7D.loadFromFile("picture/card/7D.png");
	cardTexture7H.loadFromFile("picture/card/7H.png");
	cardTexture7S.loadFromFile("picture/card/7S.png");
	cardTexture8C.loadFromFile("picture/card/8C.png");
	cardTexture8D.loadFromFile("picture/card/8D.png");
	cardTexture8H.loadFromFile("picture/card/8H.png");
	cardTexture8S.loadFromFile("picture/card/8S.png");
	cardTexture9C.loadFromFile("picture/card/9C.png");
	cardTexture9D.loadFromFile("picture/card/9D.png");
	cardTexture9H.loadFromFile("picture/card/9H.png");
	cardTexture9S.loadFromFile("picture/card/9S.png");
	cardTextureJC.loadFromFile("picture/card/JC.png");
	cardTextureJD.loadFromFile("picture/card/JD.png");
	cardTextureJH.loadFromFile("picture/card/JH.png");
	cardTextureJS.loadFromFile("picture/card/JS.png");
	cardTextureQC.loadFromFile("picture/card/QC.png");
	cardTextureQD.loadFromFile("picture/card/QD.png");
	cardTextureQH.loadFromFile("picture/card/QH.png");
	cardTextureQS.loadFromFile("picture/card/QS.png");
	cardTextureKC.loadFromFile("picture/card/KC.png");
	cardTextureKD.loadFromFile("picture/card/KD.png");
	cardTextureKH.loadFromFile("picture/card/KH.png");
	cardTextureKS.loadFromFile("picture/card/KS.png");

	while (window.isOpen()) { //Membuka Window

		Event event;

		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close(); //Menutup Window
		}
	}

	return 0;
}