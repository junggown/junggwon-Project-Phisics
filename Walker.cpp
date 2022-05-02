#include "Walker.h"
#include <random>

// 시드값을 얻기 위한 random_device 생성.
std::random_device rd;

// random_device 를 통해 난수 생성 엔진을 초기화 한다.
std::mt19937 gen(rd());

// 0 부터 3까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
std::uniform_int_distribution<int> dis(0, 3);

Walker::Walker(int x, int y) 
{
 _x = x;
 _y = y;
}


void Walker::update() 
{
  int const way = dis(gen);
  switch(way)
    {
  case 0:
  if(way == 0)
  {
  _x = _x + 5;
    if(_x >600)
    {
      _x = 600;
    }
  }
  break;
      
  case 1:
  if(way == 1)
  {
  _x = _x - 5;
  }
  break;
      
  case 2:
  if(way == 2)
  {
  _y = _y + 5;
  }
  break;

  case 3:
  if(way == 3)
  {
  _y = _y - 5;
  }
  break;
      
  }
}


void Walker::draw(SDL_Renderer* renderer)
{
   filledCircleColor(renderer, _x, _y, 2, 0x60FFFFFF); 
}