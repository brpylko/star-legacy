
//AUTOGENERATED FILE: DO NOT EDIT
#include <MINX/Game.hpp>
#include <MINX/GameTime.hpp>
#ifndef MINX_SLMAIN_HPP_
#define MINX_SLMAIN_HPP_

using namespace MINX;

namespace StarLegacy
{
	class SLMain : public Game
	{
		public:
			SLMain();
			void Initialize();
			void LoadContent();
			void UnloadContent();
			void Update(GameTime* gameTime);
			void Draw(GameTime* gameTime);
	};
}

#endif