#include "Thomas.h"
#include "TextureHolder.h"
Thomas::Thomas()
{
  // Associate a texture with the sprite
  m_Sprite = Sprite(TextureHolder::GetTexture(
  "graphics/thomas.png"));
  m_JumpDuration = .45;
}
