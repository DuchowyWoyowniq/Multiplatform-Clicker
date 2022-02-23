#pragma once
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <stdio.h>
//#include <chrono>
#include <fstream>
#include <string>
#include <iostream>
#include <time.h>
#include <random>
#include <thread>


struct playerdata{
unsigned long long int points;
unsigned int effort;
int level;
int r;
int r_idle;
unsigned short idlers;
bool debug;
};